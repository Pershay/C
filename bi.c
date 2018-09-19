#include <stdio.h>

int main(){
  int scope[ 2 ] = {1, 100};
  int pick = (scope[ 0 ] + scope[ 1 ]) / 2;
  char input[ 2 ] = "  ";

  printf( "Загадайте число от %d до %d. И нажмите клавишу Enter.\n", scope[ 0 ], scope[ 1 ] );

  do{
  switch( input[ 0 ] ){
      case 'l':
          scope[ 1 ] = pick;
        break;
      case 'h':
          scope[ 0 ] = pick;
        break;
      case 'y':
        printf( "\nУра!\n" );
        return 0;
    }
    pick = (scope[ 0 ] + scope[ 1 ]) / 2;

    getchar();
    printf( "Это число %d? (y/l/h) ", pick );
    }
   while( scanf( "%1s", input ) == 1 );

  return 0;
}
