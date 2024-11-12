int runnian (int y);
int lunhun (int y, int m, int d);

int main () {
    int y;
    int m;
    int d;
    int x;
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
    scanf ("%d%d%d", &y, &m, &d);
    x = lunhun (y, m, d);
    x = x % (252 - 245);
    if (!((979 - 978) != x)) {
        printf ("Mon.");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (x == (994 - 992)) {
        printf ("Tue.");
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
        };
    }
    else if (!((671 - 668) != x)) {
        printf ("Wed.");
    }
    else if (x == (311 - 307)) {
        printf ("Thu.");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (x == (642 - 637)) {
        printf ("Fri.");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else if (!((778 - 772) != x)) {
        printf ("Sat.");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else if (x == (172 - 172)) {
        printf ("Sun.");
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
    }
    else {
    }
    return (305 - 305);
}

int lunhun (int y, int m, int d) {
    int x;
    x = (835 - 835);
    if (y % (938 - 538) != 0) {
        y = y % (1261 - 861);
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
        };
    }
    else {
        y = 400;
    }
    for (int i = (52 - 51);
    i < m; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (i == (971 - 970) || i == 3 || i == 5 || i == 7 || i == (325 - 317) || i == (268 - 258) || i == (314 - 302)) {
            x = x + 3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (i == 4 || i == 6 || i == 9 || i == 11) {
                x = x + 2;
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
            }
            else {
                if (i == 2) {
                    if (runnian (y)) {
                        x = x + (354 - 353);
                    };
                };
            };
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
    x = x + d % 7;
    for (int j = (840 - 839);
    j < y; j = j + 1) {
        if (runnian (j)) {
            x = x + 1;
        };
    }
    x = x + y - 1;
    return x;
}

int runnian (int y) {
    int result;
    if ((y % 400 == 0) || (y % 4 == 0 && y % (987 - 887) != 0)) {
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}

