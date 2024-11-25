int main () {
    char ZInWfGxcy [(69 - 59)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int ca, cb, B9b8TtXlEP, QIlRZe3zShr;
    int ovLEd8fUeqj;
    int numb;
    ovLEd8fUeqj = 0;
    numb = 0;
    int NSC9n6XtW, j = (904 - 904), k;
    char a [(1142 - 892)];
    char u0szZxwO [250];
    char c [250];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (a);
    gets (u0szZxwO);
    {
        NSC9n6XtW = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a[NSC9n6XtW]) {
            NSC9n6XtW = NSC9n6XtW +1;
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
            ovLEd8fUeqj++;
        };
    }
    {
        NSC9n6XtW = 0;
        while (u0szZxwO[NSC9n6XtW]) {
            NSC9n6XtW = NSC9n6XtW +1;
            numb = numb + 1;
        };
    }
    if (ovLEd8fUeqj >= numb) {
        {
            NSC9n6XtW = 316 - 315;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while ((ovLEd8fUeqj - numb) <= NSC9n6XtW) {
                u0szZxwO[NSC9n6XtW] = u0szZxwO[NSC9n6XtW -ovLEd8fUeqj + numb];
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
                NSC9n6XtW = NSC9n6XtW -1;
            };
        }
        {
            NSC9n6XtW = 0;
            while ((ovLEd8fUeqj - numb) > NSC9n6XtW) {
                u0szZxwO[NSC9n6XtW] = '0';
                NSC9n6XtW++;
            };
        };
    }
    if (ovLEd8fUeqj < numb) {
        {
            NSC9n6XtW = numb - 1;
            while ((numb - ovLEd8fUeqj) <= NSC9n6XtW) {
                a[NSC9n6XtW] = a[NSC9n6XtW -numb + ovLEd8fUeqj];
                NSC9n6XtW = NSC9n6XtW -1;
            };
        }
        {
            NSC9n6XtW = 0;
            while ((numb - ovLEd8fUeqj) > NSC9n6XtW) {
                a[NSC9n6XtW] = '0';
                NSC9n6XtW++;
            };
        }
        ovLEd8fUeqj = numb;
    }
    {
        NSC9n6XtW = 0;
        while (ovLEd8fUeqj >= NSC9n6XtW) {
            c[NSC9n6XtW] = '0';
            NSC9n6XtW++;
        };
    }
    {
        NSC9n6XtW = ovLEd8fUeqj - 1;
        while (0 <= NSC9n6XtW) {
            QIlRZe3zShr = c[NSC9n6XtW +1] - '0';
            if (10 > B9b8TtXlEP +QIlRZe3zShr)
                c[NSC9n6XtW +1] = ZInWfGxcy[B9b8TtXlEP +QIlRZe3zShr];
            ca = a[NSC9n6XtW] - '0';
            cb = u0szZxwO[NSC9n6XtW] - '0';
            if (B9b8TtXlEP +QIlRZe3zShr >= 10) {
                c[NSC9n6XtW] = '1';
                c[NSC9n6XtW +1] = ZInWfGxcy[B9b8TtXlEP +QIlRZe3zShr-10];
            }
            NSC9n6XtW--;
            B9b8TtXlEP = ca + cb;
        };
    }
    {
        NSC9n6XtW = 0;
        while (NSC9n6XtW <= ovLEd8fUeqj) {
            if (c[NSC9n6XtW] == '0')
                j++;
            NSC9n6XtW++;
        };
    }
    if (j == ovLEd8fUeqj + 1)
        ;
    else {
        {
            NSC9n6XtW = 0;
            while (NSC9n6XtW <= ovLEd8fUeqj) {
                if (c[NSC9n6XtW] != '0') {
                    k = NSC9n6XtW;
                    break;
                }
                NSC9n6XtW++;
            };
        }
        {
            NSC9n6XtW = k;
            while (NSC9n6XtW <= ovLEd8fUeqj) {
                printf ("%c", c[NSC9n6XtW]);
                NSC9n6XtW++;
            };
        };
    }
    return 0;
}

