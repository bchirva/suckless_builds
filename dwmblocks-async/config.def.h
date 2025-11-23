#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "status-ffmpeg-record-icon icon", 1, 0) \
    X("", "status-music status", 1, 0) \
    X("", "status-audio status output", 1, 0) \
    X("", "status-audio status input", 1, 0) \
    X("", "status-network status", 5, 0) \
    X("", "status-weather", 3600, 0) \
    X(" ", "date '+%H:%M'", 5, 0)

    // X("", "status-music.sh status", 1, 0) 
    // X("", "status-bluetooth.sh status", 5, 0) 
#endif  // CONFIG_H
