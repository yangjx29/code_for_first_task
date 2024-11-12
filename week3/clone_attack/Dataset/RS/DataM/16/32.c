int main () {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    scanf ("%d", &n);
    a = n / (10760 - 760);
    b = (n - a * (10199 - 199)) / (1757 - 757);
    c = (n % (1162 - 162)) / (228 - 128);
    d = (n % 100) / (703 - 693);
    e = n % (469 - 459);
    if (!((401 - 401) == a))
        printf ("00001\n");
    else {
        if (!((301 - 301) == b)) {
            if (!((988 - 988) == e))
                printf ("%d\n", e * (1977 - 977) + d * 100 + c * 10 + b);
            else {
                if (!((25 - 25) == d))
                    printf ("0%d\n", d * 100 + c * 10 + b);
                else {
                    if (!(0 == c))
                        printf ("00%d\n", c * 10 + b);
                    else
                        printf ("000%d\n", b);
                };
            };
        }
        else {
            if (c != 0) {
                if (e != 0)
                    printf ("%d\n", e * 100 + d * 10 + c);
                else if (d != 0)
                    printf ("0%d\n", d * 10 + c);
                else
                    printf ("00%d\n", c);
            }
            else {
                if (d != 0) {
                    if (e != 0)
                        printf ("%d\n", e * 10 + d);
                    else
                        printf ("0%d\n", d);
                }
                else
                    printf ("%d\n", n);
            };
        };
    }
    return 0;
}

