#include <stdio.h>
#include "logapi.h"

void main( void )
{
   initLog( "logfile.txt", INFO );

   logger( FATAL, "A Fatal message %d\n", 123 );

   logger( WARNING, "A warning message %d, %d\n", 1, 2 );

   logger( INFO, "An Info message %s %d\n", "some text", 42 );

   closeLog( );

   return;
}
