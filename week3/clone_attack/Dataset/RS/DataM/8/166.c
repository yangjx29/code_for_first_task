int fMXvhJxE, bJS7OIRmc, a2yGMwefk [(1367 - 867)] = {(473 - 473)}, AJf1Z3 [500] = {(810 - 810)};

void  scanarray () {
    int THuIMQVqgyG2;
    scanf ("%d %d", &fMXvhJxE, &bJS7OIRmc);
    {
        THuIMQVqgyG2 = 165 - 165;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (fMXvhJxE - (197 - 196) >= THuIMQVqgyG2) {
            scanf ("%d", &a2yGMwefk[THuIMQVqgyG2]);
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
            THuIMQVqgyG2 = THuIMQVqgyG2 +1;
        };
    }
    for (THuIMQVqgyG2 = 0; THuIMQVqgyG2 <= bJS7OIRmc - (827 - 826); THuIMQVqgyG2 = THuIMQVqgyG2 +1) {
        scanf ("%d", &AJf1Z3[THuIMQVqgyG2]);
    };
}

void  shengxu (int teqIyPwn3CAR [], int dTJoCc7iBxu) {
    int THuIMQVqgyG2;
    int j;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int temp;
    for (THuIMQVqgyG2 = dTJoCc7iBxu - 1; THuIMQVqgyG2 >= 0; THuIMQVqgyG2 = THuIMQVqgyG2 -1) {
        j = 0;
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
        while (j <= THuIMQVqgyG2 -1) {
            if (teqIyPwn3CAR[j] >= teqIyPwn3CAR[j + 1]) {
                temp = teqIyPwn3CAR[j];
                teqIyPwn3CAR[j] = teqIyPwn3CAR[j + 1];
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
                teqIyPwn3CAR[j + 1] = temp;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        };
    };
}

void  hebing (int teqIyPwn3CAR [], int y [], int lenx, int zSu8RFJxt) {
    int *G5vpRis, *RA2Mm01wKz3E;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        RA2Mm01wKz3E = y;
        G5vpRis = teqIyPwn3CAR + lenx;
        while (RA2Mm01wKz3E < y + zSu8RFJxt) {
            *G5vpRis = *RA2Mm01wKz3E;
            RA2Mm01wKz3E = RA2Mm01wKz3E +1;
            G5vpRis++;
        };
    };
}

void  printarray (int teqIyPwn3CAR [], int dTJoCc7iBxu) {
    int THuIMQVqgyG2;
    putchar ('\n');
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    printf ("%d", teqIyPwn3CAR[0]);
    for (THuIMQVqgyG2 = 1; THuIMQVqgyG2 <= dTJoCc7iBxu - 1; THuIMQVqgyG2++) {
        printf (" %d", a2yGMwefk[THuIMQVqgyG2]);
    };
}

int main () {
    scanarray ();
    shengxu (a2yGMwefk, fMXvhJxE);
    shengxu (AJf1Z3, bJS7OIRmc);
    hebing (a2yGMwefk, AJf1Z3, fMXvhJxE, bJS7OIRmc);
    printarray (a2yGMwefk, fMXvhJxE + bJS7OIRmc);
    return 0;
}

