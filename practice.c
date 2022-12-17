void swap(int a, int b)
{
    int temp = a;
    a = b;
    b= a;
}

void swap2(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5;
    int b = 10;
    printf("before swap : %d %d\n", a, b);
    swap(a,b);
    printf("after swap: %d %d\n");

    printf("before swap : %d %d\n", a, b);
    swap(&a,&b);
    printf("after swap: %d %d\n");

}

void add_nth_note()