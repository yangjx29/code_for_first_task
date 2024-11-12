char name [(611 - 411)] [(416 - 395)];
int wyJjN1MpxB [(1075 - 875)];
int ce7qyuj548Vh [200];
char gb [200];
char xb [200];
int wXVeK8NE [200];
int xRm416UTEk [200];

int main () {
    char Qs65xz974mvW [(346 - 325)];
    puts (Qs65xz974mvW);
    int n;
    int C7QVE5;
    int T2GN4dEouzqp;
    int rY93CZN;
    rY93CZN = 0;
    scanf ("%d", &n);
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
    {
        C7QVE5 = 818 - 818;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > C7QVE5) {
            int kWJ6PpZRv, jROie4oY, x6;
            char Ya08uRyTGmW [21], o6dTlUY, uOw5Nqi4Qr;
            int FnHEV7Xz1J;
            scanf ("%s %d %d %c %c %d", Ya08uRyTGmW, &kWJ6PpZRv, &jROie4oY, &o6dTlUY, &uOw5Nqi4Qr, &x6);
            {
                FnHEV7Xz1J = 179 - 179;
                while (FnHEV7Xz1J < 21) {
                    name[C7QVE5][FnHEV7Xz1J] = Ya08uRyTGmW[FnHEV7Xz1J];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    FnHEV7Xz1J = FnHEV7Xz1J +1;
                };
            }
            wyJjN1MpxB[C7QVE5] = kWJ6PpZRv;
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
            ce7qyuj548Vh[C7QVE5] = jROie4oY;
            gb[C7QVE5] = o6dTlUY;
            xb[C7QVE5] = uOw5Nqi4Qr;
            wXVeK8NE[C7QVE5] = x6;
            C7QVE5++;
        };
    }
    for (C7QVE5 = (809 - 809); n > C7QVE5; C7QVE5++) {
        xRm416UTEk[C7QVE5] = (723 - 723);
        if (wyJjN1MpxB[C7QVE5] > 80 && (402 - 401) <= wXVeK8NE[C7QVE5])
            xRm416UTEk[C7QVE5] += (8937 - 937);
        if (wyJjN1MpxB[C7QVE5] > (502 - 417) && ce7qyuj548Vh[C7QVE5] > 80)
            xRm416UTEk[C7QVE5] += (4614 - 614);
        if (wyJjN1MpxB[C7QVE5] > 90)
            xRm416UTEk[C7QVE5] += (2220 - 220);
        if (xb[C7QVE5] == 'Y' && wyJjN1MpxB[C7QVE5] > 85)
            xRm416UTEk[C7QVE5] += 1000;
        if (gb[C7QVE5] == 'Y' && ce7qyuj548Vh[C7QVE5] > 80)
            xRm416UTEk[C7QVE5] += 850;
    }
    T2GN4dEouzqp = 0;
    {
        C7QVE5 = 1;
        while (C7QVE5 < n) {
            if (xRm416UTEk[T2GN4dEouzqp] < xRm416UTEk[C7QVE5])
                T2GN4dEouzqp = C7QVE5;
            C7QVE5++;
        };
    }
    {
        C7QVE5 = 0;
        while (C7QVE5 < 21) {
            Qs65xz974mvW[C7QVE5] = name[T2GN4dEouzqp][C7QVE5];
            C7QVE5++;
        };
    }
    printf ("%d\n", xRm416UTEk[T2GN4dEouzqp]);
    {
        C7QVE5 = 0;
        while (C7QVE5 < n) {
            rY93CZN += xRm416UTEk[C7QVE5];
            C7QVE5++;
        };
    }
    printf ("%d", rY93CZN);
    return 0;
}

