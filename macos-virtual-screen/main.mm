//
//  main.cpp
//  macos-virtual-screen
//
//  Created by Jevin Sweval on 2024-05-03.
//

#undef NDEBUG
#include <CoreGraphics/CoreGraphics.h>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fmt/color.h>
#include <fmt/format.h>
#include <fmt/ostream.h>
#include <fmt/ranges.h>
#include <fmt/std.h>
#include <vector>

struct DisplayConfig {
    CGDirectDisplayID displayID;
    CGDisplayModeRef originalMode;
};

// template <> struct fmt::formatter<DisplayConfig> {
//     // parse is inherited from formatter<string_view>.
//
//     auto format(const DisplayConfig &c, format_context &ctx) const;
// };

// template <> struct fmt::formatter<DisplayConfig> {
//     auto format(DisplayConfig &p, format_context &ctx) const {
//         return write_padded(ctx, [=](auto out) {
//             return format_to(out, "DisplayConfig\{\}");
//         });
//     }
// };

template <> struct fmt::formatter<DisplayConfig> {
    template <typename ParseContext> constexpr auto parse(ParseContext &ctx) {
        return ctx.begin();
    }

    auto format(const DisplayConfig &c, format_context &ctx) const {
        return format_to(ctx.out(), "DisplayConfigDummy");
    }
};

std::vector<DisplayConfig> savedConfigs;

void saveCurrentDisplayConfigurations() {
    CGDirectDisplayID displays[10];
    CGDisplayCount numDisplays;
    CGError error = CGGetOnlineDisplayList(10, displays, &numDisplays);

    for (int i = 0; i < numDisplays; i++) {
        CGDisplayModeRef currentMode = CGDisplayCopyDisplayMode(displays[i]);
        savedConfigs.push_back({displays[i], currentMode});
    }
}

void restoreOriginalDisplayConfigurations() {
    for (auto &config : savedConfigs) {
        CGConfigureDisplayWithDisplayMode(NULL, config.displayID, config.originalMode, NULL);
        CGDisplayModeRelease(config.originalMode); // Release the retained mode reference
    }
    savedConfigs.clear();
}

void changeDisplayConfiguration() {
    CGDisplayConfigRef config;
    CGError error = CGBeginDisplayConfiguration(&config);

    // Example of changing display configurations
    // For simplicity, assuming changes are made here

    error = CGCompleteDisplayConfiguration(config, kCGConfigureForSession);

    if (error != kCGErrorSuccess) {
        // Handle potential error
    }
}

int main() {
    saveCurrentDisplayConfigurations();
    atexit(restoreOriginalDisplayConfigurations); // Register cleanup function

    // fmt::print("savedConfigs: {}\n", fmt::join(savedConfigs, ", "));

    fmt::print("savedConfigs: {}\n", savedConfigs[0]);

    // changeDisplayConfiguration();
    // Your application logic here

    return 0; // On exit, restoreOriginalDisplayConfigurations() will be called
}
