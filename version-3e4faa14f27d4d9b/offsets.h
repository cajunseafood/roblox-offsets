/*
 * Dumped With: roblox-dumper 2.6
 * Created by: Jonah (jonahw on Discord)
 * Github: https://github.com/nopjo/roblox-dumper
 * Roblox Version: version-3e4faa14f27d4d9b
 * Time Taken: 2857 ms (2.857000 seconds)
 * Total Offsets: 22
 */

#pragma once
#include <cstdint>

// clang-format off
namespace offsets {
    inline constexpr const char* roblox_version = "version-3e4faa14f27d4d9b";

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x198;
        inline constexpr uintptr_t GameId = 0x1A0;
        inline constexpr uintptr_t GameLoaded = 0x678;
        inline constexpr uintptr_t JobId = 0x138;
        inline constexpr uintptr_t PlaceId = 0x1A8;
        inline constexpr uintptr_t ServerIP = 0x660;
        inline constexpr uintptr_t Workspace = 0x178;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x7BD20C0;
        inline constexpr uintptr_t RealDataModel = 0x1D8;
    }

    namespace Instance {
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x78;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t Name = 0xB0;
        inline constexpr uintptr_t Parent = 0x70;
    }

    namespace RenderView {
        inline constexpr uintptr_t LightingValid = 0x170;
        inline constexpr uintptr_t SkyboxValid = 0x28D;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0xAB0;
        inline constexpr uintptr_t FakeDataModel = 0xA90;
        inline constexpr uintptr_t Pointer = 0x82EA3B8;
        inline constexpr uintptr_t RenderView = 0xBB8;
        inline constexpr uintptr_t ViewMatrix = 0x150;
    }

} // namespace offsets
