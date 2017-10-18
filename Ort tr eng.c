#include <stdio.h>
int main(){
	
	float a,b,c;
	int x;
	
	printf("Please select a language : 1-->TR / 2--> ENG\n");
	scanf("%d",&x);
	
	if(x==1){
	
	
	printf("Vize notunuzu giriniz :\n");   scanf("%f",&a);
	printf("Final notunuzu giriniz :\n");  scanf("%f",&b);
	
	c = (a * 0.4 )+ (b * 0.6);
	("%.2f = %.2f * %.2f + %.2f * %.2f\n",c,a,0.4,b,0.6);

	printf("Ortalamaniz = %.2f\n",c);
	
	if(c>=60)
	printf("Tebrikler. Dersten basarili bir sekilde gectiniz !");
    
	else
	printf("Uzgunuz. Bute kaldiniz.");
}

	else{
		
    if(x>2){
	
	printf("Ups. You made a mistake. Please check the information.\n");
	printf("Please restart the programme.");	
}
	else{
	
	
	printf("Enter your visa point :\n");   scanf("%f",&a);
	printf("Enter your final point :\n");  scanf("%f",&b);
	
	c = (a * 0.4 )+ (b * 0.6);
	("%.2f = %.2f * %.2f + %.2f * %.2f\n",c,a,0.4,b,0.6);

	printf("Your Average = %.2f\n",c);
	
	if(c>=60)
	printf("Congratulations ! You passed the lesson.");
    
	else
	printf("We are sorry. You gotta make bonus exam.");
}
}


	getchar();	getchar();
	return 0;
}
