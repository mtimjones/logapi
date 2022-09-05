# logapi

Simple flie-based logging API for small projects.

API is defined as:
```
void initLog( char *filename, LogLevel_t loglevel );

void logger( LogLevel_t level, char *fmt, ... );

void closeLog( void );
```

