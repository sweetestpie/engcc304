#include <stdio.h>
#include <string.h>



struct people {
    char name [100] ;
    float slary ;
    int duration ;
} ;

struct people p [100] ;

int check_emp( char check , int a ) ;
void avgpayment( int c ) ;
void mostduration( int c ) ;

int main() {
    int c = 0 ;
    int yn = 1 ;
    char check ;
    while ( yn ) {
        printf ( "Do you want to Enter Employee Information? (y/n) : " ) ;
        scanf ( " %c", &check ) ;
        yn = check_emp( check, c ) ;
        c++ ;
    }
    avgpayment( c );
    mostduration( c );
}

int check_emp ( char check, int a ) {
	char name [100] ;
    switch( check ) {
      case 'y' :
      	getchar();
        printf ( "Employee Name : " ) ;
        gets( p[a].name ) ;
        printf ( "Salary (Bath/Month) : " ) ;
        scanf ( "%f" , &p[a].slary ) ;
        printf ( "Duration (Year) : " ) ;
        scanf ( "%d" , &p[a].duration ) ;
        break;
      case 'n' :
        return 0;
    default :
     	getchar();
        printf ( "Employee Name : " ) ;
        gets( p[a].name ) ;
        printf ( "Salary (Bath/Month) : " ) ;
        scanf ( "%f" , &p[a].slary ) ;
        printf ( "Duration (Year) : " ) ;
        scanf ( "%d" , &p[a].duration ) ;
        break;
    }
}

void avgpayment( int c ) {
    c = c - 1 ;
    float avrg , pay = 0 ;
    int i = 0 ;
    
    while( i <= c ) {
        pay = p[i].slary + pay ;
        i++ ;
    }

    avrg = pay / c ;

    printf( "Average of Salary : %.2f Bath \n", avrg ) ;
    printf( "Payment of every month : %.2f Bath \n", pay ) ;
    printf( "* Most duration in this business * \n" ) ;
}

void mostduration(int c) {
    c = c - 1 ;
    float per_slary[c] ;
    int i = 0 ;

    while( i <= c ) {
        per_slary[i] = p[i].slary * ( p[i].duration * 12 ) ;
        i++ ;
    }

    int max = per_slary[0] ;
    int icount = 0 ;
    int ii = 0 ;

    while ( ii <= c ) {
    	int bl = per_slary[ii] > max ;
        switch ( bl ) {
        	case 1 :
            	max = per_slary[ii] ;
            	icount = ii ;
              	ii++ ;
            	break ;
            case 0 :
              	ii++ ;
            	break ;
        }
      
    }

    printf( "Name : %s (%.d Years)\n", p[icount].name , p[icount].duration ) ;
    printf( "Salary : %.2f Bath \n", p[icount].slary ) ;
}
