#include <stdio.h>

int main(){
	int n;
	printf("nhap so n = ");
	scanf("%d" , n);
	if(n%3==0 & n%5 ==0){
		printf("n chia het cho 3 va 5 ");
	}
	else{
	    if(n%3){
	    	printf("n chia het cho 3");
		}
		else{
	        if(n%5){
	    	    printf("n chia het cho 5");
		}
		    else{
		    	printf("khong hop le");
			}
    }
}
	return 0;
}
