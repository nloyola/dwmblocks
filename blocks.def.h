//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/                /*Update Interval*/     /*Update Signal*/
    {"",        "~/bin/dwm-cpu",                    10,             1},
    {"",        "~/bin/dwm-mem",                    30,             4},
    {"",        "~/bin/dwm-upgrades",              600,             5},
    {"",        "~/bin/dwm-volume",                  0,             2},
    {"",        "~/bin/dwm-weather",               600,             3},
    {"",        "~/bin/dwm-date",                    5,             6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
