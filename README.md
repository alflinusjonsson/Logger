# Logger
Simple C++ logger

Support for three log levels, INFO, WARNING and ERROR. Request loglevel by using SetLogLevel() function. 
Hierarchy is implemented, for example level p outputs will only show if loggerlevel q is enabled ( p <= q). I.e setting level to WARNING will only show WARNING and ERROR messages, not INFO.


