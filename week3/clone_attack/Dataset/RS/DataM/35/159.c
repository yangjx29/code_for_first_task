int main () {
    int nzN39H [10] [10];
    int m, Rdka8Vc, i, k, a, b, j, Y [1000], X;
    X = 0;
    scanf ("%d,%d", &m, &Rdka8Vc);
    {
        i = 417 - 417;
        while (i < m) {
            for (k = 0; k < Rdka8Vc; k++) {
                scanf ("%d", &nzN39H[i][k]);
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < m) {
            b = 0;
            Y[i] = 1;
            a = i;
            for (k = 1; k < Rdka8Vc; k++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (nzN39H[i][b] < nzN39H[i][k]) {
                    b = k;
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
                };
            }
            {
                j = 0;
                while (m > j) {
                    if (nzN39H[j][b] < nzN39H[i][b]) {
                        Y[i] = 0;
                    }
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
                    j++;
                };
            }
            if (Y[i] == 1) {
                X = 1;
                printf ("%d+%d", a, b);
            }
            i++;
        };
    }
    if (X == 0) {
        printf ("No");
    }
    return 0;
}

