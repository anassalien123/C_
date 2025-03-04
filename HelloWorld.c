#include <stdio.h>

int main(){
    printf("Hello world\n");
    printf("Yep that's agin a learn samething i know it \n");
    int a = 12;
    int b = 10;
    int c ;
    c = a + b;
    printf("%d \n",c);
    for(int i=5; i>=0; i--){
        for (int y = 0; y <= i; y++)
        {
            printf("* "); 
        }
        printf("\n");
    }
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    anass(); 
    return 0;
}

void anass(){
    float d = 13;
    float q = 22;
    float r = d + q;
    printf("the result is %f \n",r);
}
// #include <stdio.h>

// int main() {
//     char name[50];

//     printf("Enter your name: ");
//     gets(name); // Unsafe and deprecated

//     pute("Your name is %s.\n", name);

//     return 0;
// }
