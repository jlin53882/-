#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    int opt=-1;/*選項變數*/
    float number,number1,sum;/*加減乘除變數*/
    float square;/*次方變數*/
    float root;/*開根號變數*/
    char  ch;/*運算符號變數*/
	while(opt!=0){
        printf("請輸入要計算的數字公式\nEx:5^2,5+2,5-2,5*2,5/2\n");
        printf("輸入根號時'x'r'y'，x是你要計算的數字，y隨便都可以，'r'是運算公式\n");
        scanf("%f%c%f",&number,&ch,&number1);/* '+' '-' '*' '/' '^' */
		if(ch=='r'){
		}
			switch (ch){
 	        	case'+':
                	sum=number+number1;   
		        	printf("%f\n",sum);
    	        		break;
            	case'-':
                	sum=number-number1;  
        	    	printf("%f\n",sum);
    	        		break;  
            	case'*':
                	sum=number*number1;  
        	    	printf("%f\n",sum);
    	        		break;
            	case'^':/*次方*/
                	square=pow(number,number1);
                	printf("%f\n",square);
                		break;	
				case'r':
					root=sqrt(number);
            		printf("根號=%f\n",root);
            		printf("%.0f沒有任何用處\n",number1);
            		break;
				case'/':
                	sum=number/number1; 
            		if (ch=='/'&& number1==0){  /*ch="/"時，且number1=0*/
        	    			printf("不可以除以0\n");
            		}
            		else if(ch=='/'&&number1!=0){   /*ch="/"時，且number1 不等於0*/
                			printf("%f\n",sum);
                default:
                	printf("輸入錯誤，請重新輸入\n");
                		break;
}
}
} 
} 