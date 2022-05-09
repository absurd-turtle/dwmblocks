//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	        30,		1},
	{"", "$HOME/.config/bar-scripts/scripts/sb-volume",         					  	5,		2},
	{"", "$HOME/.config/bar-scripts/scripts/sb-battery",	 		          			60,		3},
	{"", "$HOME/.config/bar-scripts/scripts/sb-internet", 					        	60,   4},
	{"", "$HOME/.config/bar-scripts/scripts/sb-disk", 						            600,	5},
	{"", "$HOME/.config/bar-scripts/scripts/sb-clock", 						            5,		6}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " \\ ";
static unsigned int delimLen = 5;
