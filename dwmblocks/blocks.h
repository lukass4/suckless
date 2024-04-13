//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "packageupdates", 300, 5},
  {"", "countdown get", 1, 4},
  {"", "mutemic status", 0, 2},
  {"", "volume status", 5, 3},
  {"", "date '+%a %d %I:%M%p'", 5, 1},
};

// to kill process, run: kill -<signal + 34> $(pidof dwmblocks)
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
