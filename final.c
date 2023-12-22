#include<stdio.h>
#include<stdbool.h>

#define PI 3.14

int getInput(){
	int input;
	scanf("%d", &input);
	return input;
}

bool choice(void){
	int choice;
	printf("\nENTER 0 TO EXIT AND 1 TO RETURN TO MENU: ");
	if(getInput() == 1){
		return 1;
	}
	else{
		return 0;	
	}
}

void triangle()
{
	float base, height, area;
	printf("Give the base of a triangle:\n");
	scanf("%f", &base);
	printf("Give the height of a triangle:\n");
	scanf("%f", &height);
	area = (base * height)/2;
	printf("Area: %f", area);
	return;
}

void rectangle()
{
	int length, width, perimeter;
	printf("Give the length of a rectangle:\n");
	scanf("%d", &length);
	printf("Give the width of a rectangle:\n");
	scanf("%d", &width);
	perimeter = (length + width)*2;
	printf("Perimeter: %d", perimeter);
	return;
}

void average()
{
	int score1, score2, score3, score4, score5;
	float avg;
	printf("Give your 5 scores: \n");
	scanf("%d", &score1);
	scanf("%d", &score2);	   
	scanf("%d", &score3);
	scanf("%d", &score4);
	scanf("%d", &score5);
	avg = (float)(score1 + score2 + score3 + score4 + score5) / 5;
	printf("Average: %.2f", avg);
	return;
}

void discount()
{
	int quantity;
	float totalPrice, discountPrice, price, discount, dicountedPrice;
	printf("quantity: ");
	scanf("%d", &quantity);
	printf("price: ");
	scanf("%f", &price);
	totalPrice = price * quantity;
	printf("Total Price %.2f \n", totalPrice);
	if(totalPrice >= 1000 && totalPrice <= 3000)
	{
		discount = 0.05;
		discountPrice = totalPrice*discount;	
		dicountedPrice = totalPrice - discountPrice;
		
	}
	else if(totalPrice >= 3000)
	{
		discount = 0.10;
		discountPrice = totalPrice*discount;
		dicountedPrice = totalPrice - discountPrice;		
	}
	else
	{
		discount = 0.0;
		discountPrice = totalPrice*discount;
		dicountedPrice = totalPrice - discountPrice;	
	}
	
	printf("Discount Price: %.2f\n", discountPrice);
	printf("Dicounted Price: %.2f", dicountedPrice);
	return;
}


void identify()
{
	int numero;
	
	printf("Enter a number: ");
	scanf("%d", &numero);
	
	switch (numero%2) {
		case 0:
			printf("%d is an even number", numero);
			break;
		case 1:
			printf("%d is an odd number", numero);
			break;
		}
	return;
}


void oddeventerms()
{
	int term, sum_Even = 0, sum_Odd = 0, i;
	printf("Enter a nummber of term: ");
	scanf("%d", &term);
	printf("\nThese are the even numbers of the %d term: ", term);
	for(i = 1; i <= term; i++){
		if(i%2 == 0){
			sum_Even += i;
			printf("%3d ", i );
		}	 
	}
	printf("\nThe sum of even numbers: %d\n\n", sum_Even);
	
	printf("These are the odd numbers of the %d term: ", term);
	for(i = 1; i <= term; i++){
		if(i%2 != 0){
			sum_Odd += i;
			printf("%3d ", i );
		}	 
	}
	printf("\nThe sum of odd numbers: %d", sum_Odd);
	return;
}


void counter()
{
	int i, count=0;
	
	while(count<5){
		for(i = 1; i<=5; i++){
			printf("%d\n", i);
		}
		count++;
	}
	
	return;
}

float getFInput(){
	float input;
	scanf("%f", &input);
	return input;
}

float calcAreaCirc(float radius) {
    return PI * radius * radius;
}

float calcAreaRect(float length, float width) {
    return length * width;
}

float calcAreaTri(float base, float height) {
    return 0.5 * base * height;
}


void printResult(int choice, float result) {
    switch (choice) {
        case 1:
            printf("The area of the circle is: %.2f\n", result);
            break;
        case 2:
            printf("The area of the rectangle is: %.2f\n", result);
            break;
        case 3:
            printf("The area of the triangle is: %.2f\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }
}

void areaofCRT() {
    
	printf("Enter your choice:\n");
    printf("1. Area of a circle\n");
    printf("2. Area of a rectangle\n");
    printf("3. Area of a triangle\n");
    
	int choice = getInput();
    float result;
	float radius, base, length, height, width;
    
    switch (choice)
	{
       case 1:
            printf("Enter the radius: ");
            radius = getFInput();
            result = calcAreaCirc(radius);
            break;
        case 2:
            printf("Enter the length: ");
            length = getFInput();
            printf("Enter the width: ");
            width = getFInput();
            result = calcAreaRect(length, width);
            break;
        case 3:
            printf("Enter the base: ");
            base = getFInput();
            printf("Enter the height: ");
            height = getFInput();
            result = calcAreaTri(base, height);
            break;
        default:
            result = -1;
    }

    printResult(choice, result);
    return;
}

void subPointer(){

    int num1, num2,sub;
    int *ptr1, *ptr2, *ptrMinus;
    
    ptr1 = &num1;
    ptr2 = &num2;
    ptrMinus = &sub;
	
    printf("Enter the first number: ");
    scanf("%d",&num1);
    
    printf("Enter the second number: ");
    scanf("%d",&num2);
    
    *ptrMinus = *ptr1-*ptr2;
    
	printf("Difference is = %d\n", sub);
    
    return;
}

//finals

void finals1(){
	int sumOdd=0, sumEven=0, i, countOdd=0, countEven=0;
	int numbers[15];
	float aveOdd, aveEven;
	
	
	printf("Enter 15 numbers to find it's sum and avarage for odd and even numbers: \n");
	for(i = 0; i < 15; i++){
		scanf("%d", &numbers[i]);
		if( numbers[i] %2 != 0 ){
			sumOdd += numbers[i];
			countOdd++;	   	   
		}
		else{
			sumEven += numbers[i];
			countEven++;		
		}
	}


	aveOdd = (float) sumOdd/countOdd;
	aveEven = (float) sumEven/countEven;
	
	if(countEven == 0){
		printf("\nYou did not enter an even number\n");
	}
	else{
		printf("\nThe sum of all EVEN numbers is: %d\n", sumEven);
		printf("The average of all EVEN numbers is: %.2f\n\n", aveEven);
	}

	if(countOdd == 0){
		printf("\nYou did not enter an odd number\n");
	}
	else{
		printf("\nThe sum of all ODD numbers is: %d\n", sumOdd);
		printf("The average of all ODD numbers is: %.2f\n", aveOdd);
	}
	
	return;
}

void finals2(){
	int numbers[10];
	int sum = 0, i, smallest, largest, j, temp;
	float average;
	
	printf("Enter 10 numbers: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &numbers[i]);
	}

	smallest = numbers[0];
	largest = numbers[0];
		
	for(i = 0; i < 10; i++){
		if(numbers[i] < largest){
			largest = numbers[i];
	}
		if(numbers[i] > smallest){
			smallest = numbers[i];
		}
		
		sum += numbers[i];
	}
	
	for (i = 0; i < 10; i++){
		for( j = i+1; j < 10; j++){
			if(numbers[i] > numbers[j]){
				temp = numbers[i];
				numbers[i] = numbers [j];
				numbers[j] = temp;
			}
		}
	}
	
	average = (float) sum/10;
	
	printf("\nSmallest Value: %d\n", largest);
	printf("Largest Value: %d\n", smallest);
	printf("The sum: %d\n", sum);
	printf("The average: %.2f\n", average); 


	printf("\nAscending sort:\n");
	for( i = 0; i < 10; i++){
		printf(" %d ", numbers[i]);
	}
	
	for( i = 0; i < 10; i++){
		for( j = i+1; j < 10; j++){
			if(numbers[i] < numbers[j]){
					temp = numbers[i];
					numbers[i] = numbers [j];
					numbers[j] = temp;
			}
		}
	}
			
	printf("\nDescending sort:\n");			
	for( i = 0; i < 10; i++){
		printf(" %d ", numbers[i]);
	}
	

	return;
}

void sum( int array1[100][100], int array2[100][100], int dimension){
	int i, j;
		
	for( i = 0; i<dimension; i++){
		for( j = 0; j<dimension; j++){
			printf("%4d ", array1[i][j] + array2[i][j]);
		}
		printf("\n");
	}
	return;
}

void product( int array1[100][100], int array2[100][100], int dimension){
	int i, j;
	for( i = 0; i<dimension; i++){
		for( j = 0; j<dimension; j++){
			printf("%4d ", array1[i][j] * array2[i][j]);
		}
		printf("\n");
	}
	return;
}


void finals3(){
	int array1[100][100], array2[100][100] ;
	int dimension,i ,j;
	
	printf("Enter the dimension of the array: ");
	scanf("%d", &dimension);
	
	printf("Array1: \n");
	for( i = 0; i<dimension; i++){
		for( j = 0; j<dimension; j++){
			scanf("%d", &array1[i][j]);
		}
	}
	
	
	printf("\nArray2: \n");
	for( i = 0; i<dimension; i++){
		for( j = 0; j<dimension; j++){
			scanf("%d", &array2[i][j]);
		}
	}
	
	printf("\nSum:\n");
	sum(array1,array2,dimension);
	
	printf("\nProduct:\n");
	product(array1,array2,dimension);
	
	return;
}


int main(){
	int choices;
	bool x;
	
	do{
		printf("MENU\n");
		printf("1. shurva\n");
		printf("2. shurva\n");
		printf("3. shurva\n");
		printf("4. shurva\n");
		printf("5. shurva\n");
		printf("6. shurva\n");
		printf("7. shurva\n");
		printf("8. shurva\n");
		printf("9. shurva\n");
		printf("10. shurva\n");
		printf("11. shurva\n");
		printf("12. shurva\n");
		printf("pumili ka tangina mo: ");
		choices = getInput();
		switch(choices){
			case 1: 
					triangle();
					x = choice();
				break;
			case 2: 
					rectangle();
					x = choice();
				break;
			case 3: 
					average();
					x = choice();
				break;
			case 4: 
					discount();
					x = choice();
				break;
			case 5: 
					identify();
					x = choice();
				break;
			case 6: 
					oddeventerms();
					x = choice();
				break;
			case 7: 
					counter();
					x = choice();
				break;
			case 8: 
					areaofCRT();
					x = choice();
				break;
			case 9: 
					subPointer();
					x = choice();
				break;
			case 10: 
					finals1();
					x = choice();
				break;
			case 11: 
					finals2();
					x = choice();
				break;
			case 12: 
					finals3();
					x = choice();
				break;	     
			
			default:
				printf("\nPlease choice between 1-12:");
				x = choice();
				break;
		}
	}while(x==1);
}