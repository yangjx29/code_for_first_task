int main () {
    char c;
    int LO5HZF8BmjYQ, z6ryv8mobfaS;
    char a [10000];
    char b [10000];
    scanf ("%s %s", &a, &b);
    if (strlen (a) != strlen (b))
        ;
    else {
        {
            LO5HZF8BmjYQ = 796 - 796;
            while (strlen (a) > LO5HZF8BmjYQ) {
                {
                    z6ryv8mobfaS = LO5HZF8BmjYQ;
                    while (strlen (a) > z6ryv8mobfaS) {
                        if (a[LO5HZF8BmjYQ] > a[z6ryv8mobfaS]) {
                            c = a[LO5HZF8BmjYQ];
                            a[LO5HZF8BmjYQ] = a[z6ryv8mobfaS];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            a[z6ryv8mobfaS] = c;
                        }
                        z6ryv8mobfaS = z6ryv8mobfaS + 1;
                    };
                }
                LO5HZF8BmjYQ = LO5HZF8BmjYQ +1;
            };
        }
        for (LO5HZF8BmjYQ = 0; strlen (b) > LO5HZF8BmjYQ; LO5HZF8BmjYQ = LO5HZF8BmjYQ +1) {
            z6ryv8mobfaS = LO5HZF8BmjYQ;
            while (z6ryv8mobfaS < strlen (b)) {
                if (b[LO5HZF8BmjYQ] > b[z6ryv8mobfaS]) {
                    c = b[LO5HZF8BmjYQ];
                    b[LO5HZF8BmjYQ] = b[z6ryv8mobfaS];
                    b[z6ryv8mobfaS] = c;
                }
                z6ryv8mobfaS++;
            };
        }
        if (strcmp (a, b) == 0)
            printf ("YES");
        else
            ;
    }
    return 0;
}

