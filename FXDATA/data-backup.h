#pragma once

/**** FX data header generated by fxdata-build.py tool version 1.15 ****/

using uint24_t = __uint24;

// Initialize FX hardware using  FX::begin(FX_DATA_PAGE); in the setup() function.

constexpr uint16_t FX_DATA_PAGE  = 0xfffe;
constexpr uint24_t FX_DATA_BYTES = 296;

constexpr uint24_t FXhero = 0x000000;
constexpr uint16_t FXheroWidth  = 8;
constexpr uint16_t FXheroHeight = 8;
constexpr uint8_t  FXheroFrames = 2;

constexpr uint24_t FXenemy = 0x000014;
constexpr uint16_t FXenemyWidth  = 8;
constexpr uint16_t FXenemyHeight = 8;
constexpr uint8_t  FXenemyFrames = 8;

constexpr uint24_t FXdungeon = 0x000058;
constexpr uint16_t FXdungeonWidth  = 8;
constexpr uint16_t FXdungeonHeight = 8;
constexpr uint8_t  FXdungeonFrames = 20;

constexpr uint24_t FXui = 0x0000FC;
constexpr uint16_t FXuiWidth  = 8;
constexpr uint16_t FXuiHeight = 8;
constexpr uint8_t  FXuiFrames = 5;

