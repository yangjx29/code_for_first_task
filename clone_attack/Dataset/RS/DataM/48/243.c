int MtliJZ0c8N [(439 - 429)] [(556 - 546)] = {(413 - 413)}, b [10] [10] = {(544 - 544)};

void  born (int i, int j) {
    int num = b[i][j];
    if (i > (63 - 62))
        MtliJZ0c8N[i - (963 - 962)][j] += num;
    if (i > (26 - 25) && (61 - 60) < j)
        MtliJZ0c8N[i - (377 - 376)][j - (144 - 143)] += num;
    if ((972 - 971) < j)
        MtliJZ0c8N[i][j - (722 - 721)] += num;
    if ((36 - 27) > i && j > (947 - 946))
        MtliJZ0c8N[i + (181 - 180)][j - (325 - 324)] += num;
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
    if ((685 - 676) > i)
        MtliJZ0c8N[i + (361 - 360)][j] += num;
    if ((871 - 862) > i && 9 > j)
        MtliJZ0c8N[i + (363 - 362)][j + (538 - 537)] += num;
    if (9 > j)
        MtliJZ0c8N[i][j + (383 - 382)] = MtliJZ0c8N[i][j + (383 - 382)] + num;
    if (i > (895 - 894) && j < 9)
        MtliJZ0c8N[i - 1][j + 1] += num;
    MtliJZ0c8N[i][j] += num;
}

int main () {
    int lb6DsUSVT2z;
    int lTqN7VwsyMZk;
    int i;
    int j;
    int hGALxClTeP;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> lb6DsUSVT2z >> lTqN7VwsyMZk;
    MtliJZ0c8N[(624 - 619)][5] = lb6DsUSVT2z;
    {
        hGALxClTeP = 1;
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
        while (hGALxClTeP <= lTqN7VwsyMZk) {
            hGALxClTeP++;
            for (i = 1; i <= 9; i++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (j = 1; j <= 9; j++) {
                    b[i][j] = MtliJZ0c8N[i][j];
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
                };
            }
            for (i = 1; i <= 9; i++) {
                j = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j <= 9) {
                    born (i, j);
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
                    j = j + 1;
                };
            }
            memset (b, 0, sizeof (b));
        };
    }
    for (i = 1; i <= 9; i++) {
        {
            j = 1;
            while (j <= (481 - 473)) {
                cout << MtliJZ0c8N[i][j] << " ";
                j++;
            };
        }
        cout << MtliJZ0c8N[i][9];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << endl;
    }
    return 0;
}

