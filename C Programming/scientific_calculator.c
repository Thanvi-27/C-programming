#include <stdio.h>
#include <string.h>
#include <math.h>
#define PI 3.141592654

int main(){
    printf(" \n");
    printf("Select an operation:\n");
    printf(" \n");
    printf("enter '+' to Add\n");
    printf("enter '-' to Subtract\n");
    printf("enter '*' to Multiply\n");
    printf("enter '/' to Quotient\n");
    printf("enter '%%' to Remainder\n");
    printf("enter '^' to Power of a number\n");
    printf(" \n");
    printf("enter 'SQUAREROOT' for Square Root\n");
    printf("enter 'CUBEROOT' for Cube Root\n");
    printf(" \n");
    printf("enter 'LOGX' for Logarithmic value of base 10\n");
    printf("enter 'LNX' for Natural Logaritm Value\n");
    printf(" \n");
    printf("enter 'FLOOR' for Lowest Nearest Integer\n");
    printf("enter 'CEIL' for Highest Nearest Integer\n");
    printf(" \n");
    printf("enter 'HYPOTENUSE' for Hypotenuse of Right-Angled Triangle\n");
    printf("enter 'MOD' for Mod operation(to get positive/Absoulte value of a number)\n");
    printf(" \n");
    printf("enter 'COSX' to Cosine (cosx)\n");
    printf("enter 'SINX' to Sine (sinx)\n");
    printf("enter 'TANX' to Tangent (tanx)\n");
    printf(" \n");
    printf("enter 'CONINVERSE' to cos⁻¹(x)\n");
    printf("enter 'SININVERSE' to sin⁻¹(x)\n");
    printf("enter 'TANINVERSE' to tan⁻¹(x)\n");
    printf(" \n");
    printf("enter 'COSHX' to Hyperbolic Cosine (coshx)\n");
    printf("enter 'SINHX' to Hyperbolic Sine (sinhx)\n");
    printf("enter 'TANHX' to Hyperbolic Tangent (tanhx)\n");
    printf(" \n");
    printf("enter 'COSHINVERSEX' to cosh⁻¹(x)\n");
    printf("enter 'SINHINVERSEX' to sinh⁻¹(x)\n");
    printf("enter 'TANHINVERSEX' to tanh⁻¹(x)\n");
    printf(" \n");
    
    double a,b,num,res,power,angle,num2;
    char sign[20];
    
    printf("enter name of the operation : ");
    scanf(" %s",sign);
    
    if(strcmp(sign, "+") == 0 || strcmp(sign, "-") == 0 || strcmp(sign, "*") == 0 || 
    strcmp(sign, "/") == 0 || strcmp(sign, "%") == 0 || strcmp(sign, "^") == 0){
        
        printf("enter 1st value : ");
        scanf("%lf", &a);
        printf("enter 2nd value : ");
        scanf("%lf", &b);
    
        switch(sign[0]){
            case '+' : printf("Sum : %lf",a+b);
            break;
            case '-' : printf("Subtraction : %lf",a-b);
            break;
            case '*' : printf("Multiplication : %lf",a*b);
            break;
            case '/' : 
            if(b == 0){
                printf("Infinity");
            }else{
                printf("Division : %lf",a/b);
            }
            break;
            case '%' : double remainder = fmod(a, b);
            printf("Remainder : %lf",remainder);
            break;
            case '^' : power = pow(a,b);
            printf("power value : %lf",power);
            break;
        }
    }
    else if(strcmp(sign, "SQUAREROOT") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = sqrt(num);
        printf("Square Root: %lf\n", res);
    }
    else if(strcmp(sign, "CUBEROOT") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = cbrt(num);
        printf("Cube Root: %lf\n", res);
    } 
    else if(strcmp(sign, "LOGX") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        if(num <= 0){
            printf("Error: Logarithm of non-positive number!\n");
        }else{
            res = log10(num);
            printf("Logarithm (base 10): %lf\n", res);
        }
    }
    else if(strcmp(sign, "LNX") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = log(num);
        if (num <= 0) {
            printf("Error: Natural logarithm of non-positive number!\n");
        } else {
            res = log(num);
            printf("Natural Logarithm: %lf\n", res);
        }
    }
    else if(strcmp(sign, "FLOOR") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = floor(num);
        printf("%lf",res);
    }
    else if(strcmp(sign, "CEIL") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = ceil(num);
        printf("%lf",res);
    }
    else if(strcmp(sign, "HYPOTENUSE") == 0){
        printf("enter Base : ");
        scanf("%lf",&num);
        printf("enter Height : ");
        scanf("%lf",&num2);
        res = hypot(num,num2);
        printf("Hypotenuse: %lf\n", res);

    }
    else if(strcmp(sign, "MOD") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = fabs(num);
        printf("Absolute Value: %lf\n", res);
    }
    else if(strcmp(sign, "COSX") == 0){
        printf("enter a angle : ");
        scanf("%lf",&angle);
        angle = (angle * PI) / 180;
        res = cos(angle);
        printf("Cosine: %lf\n", res);
    }
    else if(strcmp(sign, "SINX") == 0){
        printf("enter a angle : ");
        scanf("%lf",&angle);
        angle = (angle * PI) / 180;
        res = sin(angle);
        printf("sine: %lf\n", res);
    }
    else if(strcmp(sign, "TANX") == 0){
        printf("enter a angle : ");
        scanf("%lf",&angle);
        angle = (angle * PI) / 180;
        res = tan(angle);
        printf("Tangent: %lf\n", res);
    }
    else if(strcmp(sign, "COSHX") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = cosh(num);
        printf("Result: %lf\n", res);
    }
    else if(strcmp(sign, "SINHX") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = sinh(num);
        printf("Result: %lf\n", res);
    }
    else if(strcmp(sign, "TANHX") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = tanh(num);
        printf("Result: %lf\n", res);
    }
    else if(strcmp(sign, "COSINVERSE") == 0){
        printf("enter a value : ");
        scanf("%lf",&num);
        if(num < -1 || num > 1){
            printf("Limit exceeds");
        }else{
        res = acos(num)*180/PI;
        printf("Inverse Cosine: %lf degrees\n", res);
        }
    }
    else if(strcmp(sign, "SININVERSE") == 0){
        printf("enter a value : ");
        scanf("%lf",&num);
        if(num < -1 || num > 1){
            printf("Limit exceeds");
        }else{
        res = asin(num)*180/PI; //converting radians to degrees
        printf("Inverse Sine: %lf degrees\n", res);
        }
    }
    else if(strcmp(sign, "TANINVERSE") == 0){
        printf("enter a value : ");
        scanf("%lf",&num);
        res = atan(num)*180/PI; //converting radians to degrees
        printf("Inverse Tangent: %lf degrees\n", res);
    }
    else if(strcmp(sign, "COSHINVERSEX") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = acosh(num);
        res = (res*180)/PI; //converting radians to degrees
        printf("Result: %lf",res);
    }
    else if(strcmp(sign, "SINHINVERSEX") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = asinh(num);
        res = (res*180)/PI; //converting radians to degrees
        printf("Result: %lf",res);
    }
    else if(strcmp(sign, "TANHINVERSEX") == 0){
        printf("enter a number : ");
        scanf("%lf",&num);
        res = atanh(num);
        res = (res*180)/PI; //converting radians to degrees
        printf("Result: %lf",res);
    }
}
