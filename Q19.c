//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


int main(){
    int a,b,c;
    printf("Enter 3 sidess of triangle \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c)
    printf("Equilateral trianlge");
    else if(a==b||b==c||c==a)
    printf("Isosaceles triangle");
    else 
    printf("scalene");
    return 0;
}