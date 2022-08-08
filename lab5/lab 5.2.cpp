#include <stdio.h>

int main() {
    int years, check_years;

    printf( "Input years : " ) ;
    scanf( "%d", &years ) ;
    
    check_years = years % 4 ;
    switch ( check_years ) {
        case 0:
            printf( "Feb = 29 days" ) ;
            break;
        default:
            printf( "Feb = 28 days" ) ;
            break;
    }
    return 0 ;
}
