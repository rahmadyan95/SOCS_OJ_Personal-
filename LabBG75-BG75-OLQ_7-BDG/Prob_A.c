#include <stdio.h>  

void main(){     
	int t;              
	long long int j = 1;           
	scanf("%d", &t);        
	
	int a[2 * t];  
	for(int i = 0; i < 2 * t; i++){         
		scanf("%d", &a[i]);  
		 }     
	for(int i = 0; i < 2 * t; i = i + 2){         
		while(a[i] > 1 && a[i] != a[i+1]){             
			if(a[i] % 2 == 0)                
				a[i] = a[i]/2;        
			else    
				a[i] = (3 * a[i]) + 1;  
			}     
		if(a[i] == a[i+1])           
			printf("Case #%d: YES\n", j);  
		 else    
			printf("Case #%d: NO\n", j);    
		j++;     
		} 


} 