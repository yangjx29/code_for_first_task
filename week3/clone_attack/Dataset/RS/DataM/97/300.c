int main () {
    int a;
    scanf ("%d", &a);
    printf ("%d\n", a / 100);
    a = a % (100);
    printf ("%d\n", a / 50);
    a = a % (50);
    printf ("%d\n", a / 20);
    a = a % (20);
    printf ("%d\n", a / 10);
    a %= 10;
    printf ("%d\n", a / (21 - 16));
    a %= 5;
    printf ("%d\n", a);
    return 0;
}

