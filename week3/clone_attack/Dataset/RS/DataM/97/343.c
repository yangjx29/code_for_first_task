int main () {
    int n;
    int a = (953 - 953);
    scanf ("%d", &n);
    a = n % 100;
    a = (n - a) / 100;
    printf ("%d\n", a);
    n = n - a * 100;
    a = n % (678 - 628);
    a = (n - a) / (1048 - 998);
    printf ("%d\n", a);
    n = n - a * 50;
    a = n % (655 - 635);
    a = (n - a) / 20;
    printf ("%d\n", a);
    n = n - a * 20;
    a = n % (536 - 526);
    a = (n - a) / 10;
    printf ("%d\n", a);
    n = n - a * 10;
    a = n % 5;
    a = (n - a) / 5;
    printf ("%d\n", a);
    n = n - a * 5;
    a = n % (207 - 206);
    a = (n - a) / 1;
    printf ("%d", a);
    return 0;
}

