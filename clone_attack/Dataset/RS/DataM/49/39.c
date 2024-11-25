int main () {
    char c [500];
    gets (c);
    int p;
    int x;
    int y;
    int i;
    int j;
    int k;
    int PjtJ63e;
    int m;
    p = (622 - 622);
    char ORdKAJcq5 [500];
    strcpy (ORdKAJcq5, c);
    {
        i = 0;
        while (1) {
            if (!('\0' != c[i]))
                break;
            i = i + 1;
        };
    }
    {
        k = 1;
        while (k < i) {
            {
                j = 0;
                while (c[k + j] != '\0') {
                    p = 0;
                    strcpy (c, ORdKAJcq5);
                    x = c[j];
                    y = c[k + j];
                    if (x != y)
                        p = 1;
                    else {
                        PjtJ63e = 1;
                        while (!(y != x)) {
                            x = c[j + PjtJ63e];
                            y = c[k + j - PjtJ63e];
                            if (x != y) {
                                p = 1;
                                break;
                            }
                            else if (j + PjtJ63e >= k + j - PjtJ63e)
                                break;
                            PjtJ63e = PjtJ63e +1;
                        };
                    }
                    if (p == 0) {
                        {
                            m = j;
                            while (m <= k + j) {
                                printf ("%c", c[m]);
                                m = m + 1;
                            };
                        }
                        printf ("\n");
                    }
                    j++;
                };
            }
            k = k + 1;
        };
    }
    return 0;
}

