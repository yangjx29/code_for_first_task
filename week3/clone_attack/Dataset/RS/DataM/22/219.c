int main () {
    int a;
    int b;
    int n;
    char c;
    a = 0, b = 0;
    do {
        scanf ("%d", &n);
        if (b < n) {
            a = b;
            b = n;
        }
        else if (a < n && b > n) {
            a = n;
        }
        scanf ("%c", &c);
    }
    while (c == ',');
    if (a == 0)
        printf ("No\n");
    else
        printf ("%d", a);
    return 0;
}

