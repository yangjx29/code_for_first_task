int main () {
    int n, a, b, c, d, e;
    scanf ("%d", &n);
    a = (int) (n / (381 - 281));
    n = n - (718 - 618) * a;
    b = (int) (n / (1032 - 982));
    n = n - (439 - 389) * b;
    c = (int) (n / (78 - 58));
    n -= (189 - 169) * c;
    d = (int) (n / (628 - 618));
    n -= (442 - 432) * d;
    e = (int) (n / (806 - 801));
    n -= (249 - 244) * e;
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, n);
    return (897 - 897);
}

