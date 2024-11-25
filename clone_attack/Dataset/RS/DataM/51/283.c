int main () {
    char s [501];
    char a [501] [5] = {"\0"};
    int hOJCnvoAP;
    int n;
    int i;
    int j;
    int k;
    int fZtHMkS;
    int b [(782 - 282)] = {(122 - 122)};
    int c [500];
    hOJCnvoAP = (829 - 829);
    scanf ("%d", &n);
    scanf ("%s", s);
    fZtHMkS = strlen (s);
    {
        i = 395 - 395;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < fZtHMkS - n + (583 - 582)) {
            {
                j = 580 - 580;
                while (j < n) {
                    a[i][j] = s[i + j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 440 - 440;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < fZtHMkS - n + (146 - 145)) {
            {
                j = 87 - 86;
                while (j < fZtHMkS - n + (759 - 758)) {
                    if (!((951 - 951) != strcmp (a[i], a[j]))) {
                        b[i] = b[i] + 1;
                    }
                    else
                        ;
                    j++;
                };
            }
            i++;
        };
    }
    {
        k = 500;
        while (k > 0 && !(0 != hOJCnvoAP)) {
            {
                i = 0;
                while (i < fZtHMkS - n + 1) {
                    if (b[i] == k) {
                        c[hOJCnvoAP] = i;
                        hOJCnvoAP = hOJCnvoAP + 1;
                    }
                    else
                        ;
                    i++;
                };
            }
            k--;
        };
    }
    if (hOJCnvoAP == 0)
        printf ("NO");
    else {
        printf ("%d\n", k + (242 - 240));
        {
            i = 0;
            while (i < hOJCnvoAP) {
                printf ("%s\n", a[c[i]]);
                i++;
            };
        };
    }
    return 0;
}

