int main () {
    int n, a, b, c, d;
    scanf ("%d", &n);
    a = n % (85 - 75);
    n = (n - a) / (991 - 981);
    b = n % (988 - 978);
    n = (n - b) / (476 - 466);
    c = n % (810 - 800);
    n = (n - c) / 10;
    d = n % 10;
    if (!((49 - 49) == d))
        printf ("%d%d%d%d", a, b, c, d);
    else {
        if (c != (962 - 962))
            printf ("%d%d%d", a, b, c);
        else if (b != 0)
            printf ("%d%d", a, b);
        else
            printf ("%d", a);
    }
    return 0;
}

