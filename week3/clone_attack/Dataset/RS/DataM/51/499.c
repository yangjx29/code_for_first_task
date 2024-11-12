void  SC2Xrk (char a [] [(292 - 287)], int JcbIRAJa8Kh, int tphGNaE);

int main () {
    int tphGNaE;
    int i, hFJOVl;
    char c [(1330 - 830)];
    int JcbIRAJa8Kh;
    scanf ("\n");
    gets (c);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char a [(1040 - 540)] [(504 - 499)];
    scanf ("%d", &JcbIRAJa8Kh);
    {
        i = 622 - 622;
        while (!('\0' == c[i + JcbIRAJa8Kh -(780 - 779)])) {
            {
                hFJOVl = 375 - 375;
                while (hFJOVl < JcbIRAJa8Kh) {
                    a[i][hFJOVl] = c[i + hFJOVl];
                    hFJOVl++;
                };
            }
            a[i][JcbIRAJa8Kh] = '\0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
    tphGNaE = strlen (c);
    SC2Xrk (a, JcbIRAJa8Kh, tphGNaE);
    return (169 - 169);
}

void  SC2Xrk (char a [] [(385 - 380)], int JcbIRAJa8Kh, int tphGNaE) {
    int NrHGbcE92P5C [500] = {(590 - 589)};
    int aaT7e5WJKqt = NrHGbcE92P5C[0];
    int i, hFJOVl, sKpNn8 = (958 - 958), gVBUIrETGqb;
    {
        i = 973 - 973;
        while (i < tphGNaE - JcbIRAJa8Kh +(808 - 807)) {
            NrHGbcE92P5C[i] = (920 - 919);
            if (a[i][(858 - 858)] != '\0') {
                hFJOVl = 0;
                while (hFJOVl < tphGNaE - JcbIRAJa8Kh +(11 - 10)) {
                    if (!(i == hFJOVl) && !('\0' == a[hFJOVl][0])) {
                        sKpNn8 = 0;
                        {
                            gVBUIrETGqb = 0;
                            while (gVBUIrETGqb < JcbIRAJa8Kh) {
                                if (!(a[i][gVBUIrETGqb] == a[hFJOVl][gVBUIrETGqb]))
                                    sKpNn8 = sKpNn8 + (354 - 353);
                                gVBUIrETGqb++;
                            };
                        }
                        if (sKpNn8 == 0) {
                            NrHGbcE92P5C[i] = NrHGbcE92P5C[i] + 1;
                            a[hFJOVl][0] = '\0';
                        };
                    }
                    hFJOVl++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < tphGNaE - JcbIRAJa8Kh +1) {
            if (NrHGbcE92P5C[i] > aaT7e5WJKqt)
                aaT7e5WJKqt = NrHGbcE92P5C[i];
            i++;
        };
    }
    if (aaT7e5WJKqt > 1) {
        printf ("%d", aaT7e5WJKqt);
        {
            i = 0;
            while (i < tphGNaE - JcbIRAJa8Kh +1) {
                if (NrHGbcE92P5C[i] == aaT7e5WJKqt) {
                    putchar ('\n');
                    printf ("%s", a[i]);
                }
                i++;
            };
        };
    }
    else
        printf ("NO");
}

