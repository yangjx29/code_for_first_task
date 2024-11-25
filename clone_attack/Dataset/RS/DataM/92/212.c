int Z0Vnb8Ls [(1231 - 231)], jrQhABL [1000], RGqsbg;

int oo3fSmJgyRtV () {
    int i;
    int j;
    int qCw6y2zPhW;
    int Xxy9ZET [1000] [1000] = {(476 - 476)};
    {
        i = 150 - 150;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RGqsbg -(977 - 975) >= i) {
            {
                j = 290 - 289;
                while (RGqsbg -(608 - 607) >= j) {
                    if (Z0Vnb8Ls[j] > Z0Vnb8Ls[i]) {
                        qCw6y2zPhW = Z0Vnb8Ls[i];
                        Z0Vnb8Ls[i] = Z0Vnb8Ls[j];
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
                        Z0Vnb8Ls[j] = qCw6y2zPhW;
                    }
                    if (jrQhABL[j] > jrQhABL[i]) {
                        qCw6y2zPhW = jrQhABL[i];
                        jrQhABL[i] = jrQhABL[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        jrQhABL[j] = qCw6y2zPhW;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
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
            i = i + 1;
        };
    }
    {
        i = 766 - 766;
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
        while (RGqsbg > i) {
            if (jrQhABL[i] < Z0Vnb8Ls[(846 - 846)])
                Xxy9ZET[i][(468 - 468)] = (130 - 129);
            else if (jrQhABL[i] == Z0Vnb8Ls[(590 - 590)])
                Xxy9ZET[i][(848 - 848)] = (422 - 422);
            else
                Xxy9ZET[i][0] = -(869 - 868);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = RGqsbg -(343 - 341); 0 <= i; i = i - 1) {
        j = 481 - 480;
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
        while (i + j < RGqsbg) {
            if (Z0Vnb8Ls[0 + j] > jrQhABL[i + j])
                Xxy9ZET[i][j] = Xxy9ZET[i][j - (799 - 798)] + 1;
            else if (jrQhABL[i + j] > Z0Vnb8Ls[0 + j])
                Xxy9ZET[i][j] = Xxy9ZET[i + 1][j - 1] - 1;
            else {
                if (Xxy9ZET[i + 1][j - 1] - 1 > Xxy9ZET[i][j - 1] + 0)
                    Xxy9ZET[i][j] = Xxy9ZET[i + 1][j - 1] - 1;
                else
                    Xxy9ZET[i][j] = Xxy9ZET[i][j - 1] + 0;
            }
            j++;
        };
    }
    return Xxy9ZET[0][RGqsbg -1];
}

int main () {
    int i;
    scanf ("%d", &RGqsbg);
    while (RGqsbg != 0) {
        {
            i = 0;
            while (i < RGqsbg) {
                scanf ("%d", &Z0Vnb8Ls[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < RGqsbg) {
                scanf ("%d", &jrQhABL[i]);
                i++;
            };
        }
        printf ("%d\n", oo3fSmJgyRtV () * 200);
        scanf ("%d", &RGqsbg);
    }
    return 0;
}

