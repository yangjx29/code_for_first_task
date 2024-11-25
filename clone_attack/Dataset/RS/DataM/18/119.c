int Ij4EgZ (int a [(148 - 48)] [(486 - 386)], int i, int rS6LIorx) {
    int GoFLnwJPAl0r;
    int FY2UP0f1A8r;
    GoFLnwJPAl0r = a[i][(978 - 978)];
    {
        FY2UP0f1A8r = 213 - 213;
        while (rS6LIorx > FY2UP0f1A8r) {
            if (GoFLnwJPAl0r > a[i][FY2UP0f1A8r])
                GoFLnwJPAl0r = a[i][FY2UP0f1A8r];
            FY2UP0f1A8r = FY2UP0f1A8r +1;
        };
    }
    return GoFLnwJPAl0r;
}

int mincolumn (int a [(422 - 322)] [(655 - 555)], int FY2UP0f1A8r, int rS6LIorx) {
    int GoFLnwJPAl0r;
    int i;
    GoFLnwJPAl0r = a[(600 - 600)][FY2UP0f1A8r];
    {
        i = 361 - 361;
        while (rS6LIorx > i) {
            if (a[i][FY2UP0f1A8r] < GoFLnwJPAl0r)
                GoFLnwJPAl0r = a[i][FY2UP0f1A8r];
            i = i + 1;
        };
    }
    return GoFLnwJPAl0r;
}

void  gxORl0onmb (int a [(188 - 88)] [(1053 - 953)], int rS6LIorx) {
    int i;
    int FY2UP0f1A8r;
    int GoFLnwJPAl0r;
    {
        i = 566 - 566;
        while (rS6LIorx > i) {
            GoFLnwJPAl0r = Ij4EgZ (a, i, rS6LIorx);
            {
                FY2UP0f1A8r = 366 - 366;
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
                while (rS6LIorx > FY2UP0f1A8r) {
                    a[i][FY2UP0f1A8r] = a[i][FY2UP0f1A8r] - GoFLnwJPAl0r;
                    FY2UP0f1A8r = FY2UP0f1A8r +1;
                };
            }
            i = i + 1;
        };
    };
}

void  Ip1hfzJ60kt (int a [(218 - 118)] [(651 - 551)], int rS6LIorx) {
    int i;
    int FY2UP0f1A8r;
    int GoFLnwJPAl0r;
    {
        FY2UP0f1A8r = 203 - 203;
        while (rS6LIorx > FY2UP0f1A8r) {
            GoFLnwJPAl0r = mincolumn (a, FY2UP0f1A8r, rS6LIorx);
            {
                i = 314 - 314;
                while (i < rS6LIorx) {
                    a[i][FY2UP0f1A8r] = a[i][FY2UP0f1A8r] - GoFLnwJPAl0r;
                    i = i + 1;
                };
            }
            FY2UP0f1A8r = FY2UP0f1A8r +1;
        };
    };
}

void  oIZfJUGxOq3 (int a [(598 - 498)] [(990 - 890)], int rS6LIorx) {
    int i, FY2UP0f1A8r;
    {
        i = 939 - 938;
        while (i < rS6LIorx) {
            {
                FY2UP0f1A8r = 100 - 100;
                while (rS6LIorx > FY2UP0f1A8r) {
                    a[i][FY2UP0f1A8r] = a[i + (21 - 20)][FY2UP0f1A8r];
                    FY2UP0f1A8r = FY2UP0f1A8r +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 152 - 152;
        while (i < rS6LIorx) {
            {
                FY2UP0f1A8r = 147 - 146;
                while (FY2UP0f1A8r < rS6LIorx) {
                    a[i][FY2UP0f1A8r] = a[i][FY2UP0f1A8r +(588 - 587)];
                    FY2UP0f1A8r = FY2UP0f1A8r +1;
                };
            }
            i = i + 1;
        };
    };
}

void  print (int a [(1086 - 986)] [100], int rS6LIorx) {
    int i;
    int FY2UP0f1A8r;
    {
        i = 422 - 422;
        while (i < rS6LIorx) {
            {
                FY2UP0f1A8r = 558 - 558;
                while (FY2UP0f1A8r < rS6LIorx) {
                    printf ("%d ", a[i][FY2UP0f1A8r]);
                    FY2UP0f1A8r = FY2UP0f1A8r +1;
                };
            }
            i = i + 1;
            printf ("\n");
        };
    };
}

int main () {
    int n;
    int i;
    int FY2UP0f1A8r;
    int B5tjfBlbncO;
    int a [100] [100] = {(623 - 623)};
    int rS6LIorx;
    scanf ("%d", &n);
    {
        i = 624 - 624;
        while (n > i) {
            int GoFLnwJPAl0r;
            GoFLnwJPAl0r = (151 - 151);
            i++;
            {
                FY2UP0f1A8r = 523 - 523;
                while (FY2UP0f1A8r < n) {
                    {
                        B5tjfBlbncO = 606 - 606;
                        while (n > B5tjfBlbncO) {
                            scanf ("%d", &a[FY2UP0f1A8r][B5tjfBlbncO]);
                            B5tjfBlbncO = B5tjfBlbncO +1;
                        };
                    }
                    FY2UP0f1A8r = FY2UP0f1A8r +1;
                };
            }
            rS6LIorx = n;
            {
                FY2UP0f1A8r = 0;
                while (FY2UP0f1A8r < n - (656 - 655)) {
                    FY2UP0f1A8r++;
                    gxORl0onmb (a, rS6LIorx);
                    Ip1hfzJ60kt (a, rS6LIorx);
                    GoFLnwJPAl0r = GoFLnwJPAl0r +a[(505 - 504)][1];
                    oIZfJUGxOq3 (a, rS6LIorx);
                    rS6LIorx--;
                };
            }
            printf ("%d\n", GoFLnwJPAl0r);
        };
    }
    return 0;
}

