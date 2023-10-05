/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/
#include <stdio.h>

int main() {
    int n = 100 ;
    int a[n] ;  
    int c = 1 , i = 0 , j = 0 , min = 0 , max = 0 ; 
    for (int i = 0 ; i < n ; i++ ) {
        printf( "Input :\n" );
        scanf( "%d", &a[i] ) ;
        if ( a[ i ] < 0 ) {
            break ;
        }
        c++ ;
    } //end for loop

    // printf( "array = " ) ;
    // for (int i = 0 ; i < c-1 ; i++) {
    //     printf("%d ", a[i]);

    // }//end for array

    
    // printf( "\n" ) ;
    // printf( "c= %d", c ) ;
    // printf( "\n" ) ;
    
    printf( "0-99 :" ) ;
    for (i = 0 ; i < c-1 ; i++) {
        for ( j = i + 1 ; j < c - 1 ; j++ ) {
            if ( a [ i ] > a[ j ] ) {
                min = a[ j ] ;
                a[ j ] = a [ i ] ;
                a[ i ] = min ;
            }
        }
    }
    for ( i = 0 ; i < c - 1 ; i++) {
        printf(" %d", a[i]);
    }

    //end 0-99

    printf( "\n" ) ;
    printf( "99-0 :" ) ;
    for (i = 0 ; i < c-1 ; i++) {
        for ( j = i + 1 ; j < c - 1 ; j++ ) {
            if ( a [ j ] > a[ i ] ) {
                min = a[ i ] ;
                a[ i ] = a [ j ] ;
                a[ j ] = min ;
            }
        }
    }
    for ( i = 0 ; i < c - 1 ; i++) {
        printf(" %d", a[i]);
    }

    return 0;
}