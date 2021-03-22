//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",        "~/bin/dwm-cpu",                                             10,             1},
    {"Mem: ",   "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",   30,             0},
    {"",        "~/bin/dwm-upgrades",                                       600,             0},
    {"",        "~/bin/dwm-volume",                                           0,             2},
    {"",        "~/bin/dwm-weather",                                        600,             0},
    {"",        "date '+%a %b %d %I:%M%p'",                                   5,             0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
