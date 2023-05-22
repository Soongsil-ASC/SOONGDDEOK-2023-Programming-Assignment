#include <stdio.h>
#include <math.h>

long toBin(int);

int c;
long num;

int main(){
    long bno;
    int dno;
    printf("====================================================\n");
    printf("\tFunction : convert decimal to binary\n");
    printf("====================================================\n");
    printf("Decimal Number : ");
    scanf("%d", &dno);
    bno = toBin(dno);
    printf("The Binary value is : %ld\n\n",bno);
    return 0;
}

long toBin(int dno){

    if ( dno/2 != 0 )
    {
        if ( dno%2 == 0 )
            c++;
        else if ( dno%2 == 1 )
        {
            if ( c == 0 )
            {
                num += 1;
                c++;
            }
            else
            {
                num += pow(10, c);
                c++;
            }
        }
        return toBin(dno/2);
    }
    else if ( dno/2 == 0 )
    {
        num += pow(10,c);
        return num;
    }
}
