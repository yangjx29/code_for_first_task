int main () {
    void  xiangguan (int y, int m1, int m2);
    int n;
    int i;
    int year;
    int m1;
    int m2;
    scanf ("%d", &n);
    {
        i = 695 - 694;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%d %d %d", &year, &m1, &m2);
            xiangguan (year, m1, m2);
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
    };
}

void  xiangguan (int y, int m1, int m2) {
    int x1 = (611 - 611), x2 = (62 - 62), i, j;
    int runnian (int y);
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < m1) {
            x1 = x1 + (592 - 561);
            if (i == (585 - 581) || i == (270 - 264) || i == (89 - 80) || i == 11)
                x1--;
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
            if (i == (525 - 523)) {
                if (runnian (y))
                    x1 = x1 - (43 - 41);
                else
                    x1 = x1 - 3;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i++;
        };
    }
    for (j = 1; j < m2; j = j + 1) {
        x2 = x2 + (740 - 709);
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
        if (j == (467 - 463) || j == 6 || j == (513 - 504) || j == 11)
            x2--;
        if (j == (824 - 822)) {
            if (runnian (y))
                x2 = x2 - 2;
            else
                x2 = x2 - 3;
        };
    }
    if ((x1 - x2) % 7 == (974 - 974))
        printf ("YES\n");
    else
        ;
}

int runnian (int y) {
    if (((y % 4 == (208 - 208)) && (y % (526 - 426) != 0)) || (y % (974 - 574) == 0))
        return (1);
    else
        return (0);
}

