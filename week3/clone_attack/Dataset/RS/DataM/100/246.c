int main () {
    int hI9EPC1pL3, i;
    char tang;
    char x;
    char yw [(600 - 298)];
    char c;
    tang = (509 - 509);
    x = 0;
    scanf ("%s", yw);
    hI9EPC1pL3 = strlen (yw);
    {
        c = 'A';
        while ('Z' >= c) {
            x = 0;
            {
                i = 0;
                while (i < hI9EPC1pL3) {
                    if (!(yw[i] != c)) {
                        x++;
                    }
                    i++;
                };
            }
            if (x != 0) {
                tang++;
                printf ("%c=%d\n", c, x);
            }
            c = c + 1;
        };
    }
    {
        c = 'a';
        while ('z' >= c) {
            x = 0;
            {
                i = 0;
                while (i < hI9EPC1pL3) {
                    if (c == yw[i]) {
                        x++;
                    }
                    i++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (x != 0) {
                printf ("%c=%d\n", c, x);
                tang++;
            }
            c++;
        };
    }
    if (tang == 0) {
        printf ("No");
    }
    return 0;
}

