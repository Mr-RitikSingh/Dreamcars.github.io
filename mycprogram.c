                    <<<<<<<<<<<<----------About 'C' Language------------>>>>>>>>>>>>
                                                                                                 ---->>>> Our code is called "Source Code"
       #include <stdio.h>             (Header file)
       int main() {
         printf("Hello world");       (Print / Output Function)
         return 0;                    (End the code)
       }


Variable---------->>>>>>>>>>>>      Memory storage
  
      a =  4
      |    |
variable data

Data type -------->>>>>>>>>>>>

a = 7              (integer)
b = "Ritik"        (character)
c = 7.7000000      (float)





%   Place holder                          Ex.          #include <stdio.h>
%d  Integer Format specifier                           int main() { 
%f  Float Format specifier                                 int a = 10;  
%s  Characters Format specifier                            printf("the variable is %d, a")                         
                                                           return 0;
                                                       }



  First code ----->>>>>>>>>

#include <stdio.h>

int main() {
    int a = 100;
    char b[] = "Ritik";
    float c = 65.3;
    printf("The variable is: %d, My name is: %s, my marks are: %.1f, my marks are: %.3f", a,b,c);

    return 0;
}

  Second code ------>>>>>>>>>

#include <stdio.h>

int main() {
    int a=5, b=6, c=7;
    printf("Sum is %d", a+b+c);
    return 0;
}


Algorithm --------->>>>>>>>>>>>>
1. Start
2. initialize
3. add sum
4. Print the output
5. End


Third code ---------->>>>>>>>>

#include <stdio.h>

int main() {
    int mynum1 = 5;
    int mynum2 = 10;
    mynum2 = mynum1;
    printf("%d", mynum2);
    return 0;
}

fourth code ---------->>>>>>>>>

#include <stdio.h>

int main() {
    float a,b;
    char c;
    printf("Enter your first num:-");
    scanf("%f", &a);
    printf("Enter your second num:-");
    scanf("%f", &b);
    printf("what do you want (+,-,*,/):-");
    scanf(" %c", &c);
    if (c == '+') {
        printf("The sum of First num & Second num is:- %.2f", (a+b));
    } else if (c=='-') {
        printf("The sub of First num & Second num is:- %.2f", (a-b));
    } else if (c=='*') {
        printf("The mul of First num & Second num is:- %.2f", (a*b));
    } else {
        printf("The dev of First num & Second num is:- %.2f", (a/b));
    }
    return 0;
}
