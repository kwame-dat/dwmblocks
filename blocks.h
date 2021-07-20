//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/    /*Command*/         /*Update Interval*/    /*Update Signal*/
  /* {"",        "upt",                  60,                   2}, */
  /* { "",       "weather",              300,                  2}, */
  /* { "",       "sb-vpn-openvpn-isrunning",   1,                    0}, */
  { " ",      "sb-bandwidth",               2,                    1},
  { " ",      "sb-anniversary",             2,                    0},
  { " ",      "sb-cpu",                     10,                   1},
  { " ",      "sb-memory",                  6,                    1},
  { " ",      "sb-temperature",             10,                   1},
  { " ",      "sb-brightness",              1,                    0},
  { " ",      "sb-pacupdate",               36000,                1},
  { " ",      "sb-battery",                 5,                    12},
  { " ",      "sb-volume",                  1,                    0},
  { " ",      "sb-date",                    1,                    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
