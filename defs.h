/*
 * TESAnnwyn: A TES3 height map importer/exporter (to & from RAW or BMP).
 *
 * Paul Halliday: 31-Dec-2006
 * Bret Curtis: 2015
 *
 * This is entirely my own work. No borrowed code.
 * All reverse engineering has been researched by myself.
 *
 * License: GNU (Copy, modify, distribute as you please. ;)
 */
#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#define APP_NAME   "TESAnnwyn"

#define TA_ESP_OUT "tesannwyn.esp"
#define TA_RAW_OUT "tesannwyn.raw"
#define TA_BMP_OUT "tesannwyn.bmp"
#define TA_VCLR_OUT "tesannwyn-vclr.bmp"
#define TA_VTEX3_OUT "tesannwyn-vtex3.bmp"
#define TA_VCLR_IN  "tesannwyn-vclr.bmp"

#define TA_TMP_RAW "ta_tmp.raw"
#define TA_TMP_VCLR_RAW "ta_vclr_tmp.raw"
#define TA_TMP_DIR "annwyn.tmp"

#define TES3_LTEX_DATA_FILE "tes3ltex.txt"
#define TA_LTEX3_OUT	"tesannwyn-ltex3.dat"

#define MW_CELLSIZE 64

#define MW_TEXSIZE 16

#define MAX_LAYERS 9 // The CS only supports up to 9 texture layers in TES4 (Oblivion, Fallout 3 & Skyrim).

#define MAX_HEIGHT 1048576
#define MIN_HEIGHT -1048576

enum { UNKNOWN, IMPORT, EXPORT };
enum { UNKNOWN_IMAGE, RAW, BMP, CSV };

struct {
    int count;
    char filename[256][128];
} input_files;

struct {
    int count;
    int replace_count;
    short unsigned int myindex;
    short unsigned int old_values[1024];
    short unsigned int new_values[1024];
} vtex3_replace;

// Record the minimum and maximum heights
struct {
    int min;
    int max;
    int cell_max_x;
    int cell_max_y;
    int cell_min_x;
    int cell_min_y;
} height_stat;

/***************************
* Just some running totals.
**************************/

struct {
        unsigned short int count;
        unsigned short int texnum[2048];
        char texname[2048][64];
        char filename[2048][64];
        char formid[2048][4];
} ltex;

#endif /* DEFINITIONS_H */
