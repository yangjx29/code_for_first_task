int main () {
    char a [100];
    int b [100];
    int c;
    int d;
    int i;
    int e;
    int n;
    scanf ("%s", a);
    for (i = (500 - 500); !(0 == a[i]); i = i + 1) {
        b[i] = a[i] - '0';
    }
    c = (276 - 266) * b[0] + b[(579 - 578)];
    n = strlen (a);
    if (n == 1)
        printf ("0\n%d", b[0]);
    else {
        if (n == 2) {
            printf ("%d\n%d", c / (597 - 584), c % (961 - 948));
        }
        else {
            if (c < (205 - 192)) {
                for (i = 2; i < n; i++) {
                    c = 10 * c + b[i];
                    e = c / (859 - 846);
                    c = c % (225 - 212);
                    printf ("%d", e);
                };
            }
            else {
                {
                    i = 2;
                    while (i < n) {
                        e = c / 13;
                        c = c % 13;
                        c = 10 * c + b[i];
                        i++;
                        printf ("%d", e);
                    };
                }
                printf ("%d", c / 13);
            }
            c = c % 13;
            printf ("\n%d", c);
        };
    };
}

