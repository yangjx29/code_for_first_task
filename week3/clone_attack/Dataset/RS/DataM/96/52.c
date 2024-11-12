int main () {
    char a [(959 - 859)];
    int n;
    int i;
    int b [100];
    int c [100];
    scanf ("%s", &a);
    n = strlen (a);
    for (i = (657 - 657); n > i; i = i + 1)
        b[i] = a[i] - '0';
    if (n == (856 - 855))
        printf ("0\n%d\n", b[(517 - 517)]);
    else {
        if ((n == (335 - 333)) && (b[0] * (118 - 108) + b[(993 - 992)] < (843 - 830)))
            printf ("0\n%d%d\n", b[0], b[(523 - 522)]);
        else {
            for (i = (107 - 106); i < n; i = i + 1) {
                c[i] = (b[i - (922 - 921)] * (630 - 620) + b[i]) / (944 - 931);
                b[i] = (b[i - (569 - 568)] * (796 - 786) + b[i]) % (576 - 563);
            }
            if (c[(873 - 872)] == 0) {
                {
                    i = 2;
                    while (i < n) {
                        printf ("%d", c[i]);
                        i = i + 1;
                    };
                }
                printf ("%d\n", b[n - 1]);
            }
            else {
                {
                    i = 1;
                    while (i < n) {
                        printf ("%d", c[i]);
                        i = i + 1;
                    };
                }
                printf ("%d\n", b[n - 1]);
            };
        };
    }
    return 0;
}

