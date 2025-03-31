//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",      "sb-now-playing",              1,               7},
  {"",      "sb-nettraf",                  1,               6},
  {"",      "sb-brightness",               0,               5},
  {"",      "sb-battery",                 30,               8},
  {"",      "sb-audio-sink",               0,               4},
  {"",      "sb-audio-source",             0,               3},
  {"",      "sb-memory",                   1,               2},
  {"",      "sb-clock",                   60,               1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " • ";
static unsigned int delimLen = 5;
