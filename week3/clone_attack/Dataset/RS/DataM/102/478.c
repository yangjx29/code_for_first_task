struct   student {
    char T3pN4X7aJx [(925 - 915)];
    float h;
};
int main () {
    int nfh5EwVMoY;
    int k2;
    nfh5EwVMoY = (489 - 489);
    k2 = (345 - 345);
    char str1 [] = "male";
    char KDG28UT6r [] = "female";
    struct   student ArgFeh9x [(494 - 454)];
    struct   student G57rqLjWD39x [(103 - 63)];
    struct   student uY7eVhx;
    struct   student M8ulHA [40];
    int EEU5SOWZR;
    cin >> EEU5SOWZR;
    cin.get ();
    {
        int uPpgRV1bzHM = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (EEU5SOWZR > uPpgRV1bzHM) {
            cin >> M8ulHA[uPpgRV1bzHM].T3pN4X7aJx >> M8ulHA[uPpgRV1bzHM].h;
            if (!(0 != strcmp (M8ulHA[uPpgRV1bzHM].T3pN4X7aJx, str1))) {
                ArgFeh9x[nfh5EwVMoY++] = M8ulHA[uPpgRV1bzHM];
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
            if (!(0 != strcmp (M8ulHA[uPpgRV1bzHM].T3pN4X7aJx, KDG28UT6r))) {
                G57rqLjWD39x[k2++] = M8ulHA[uPpgRV1bzHM];
            }
            uPpgRV1bzHM = uPpgRV1bzHM + 1;
        };
    }
    {
        int uPpgRV1bzHM = 0;
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
        while (nfh5EwVMoY > uPpgRV1bzHM) {
            {
                int QJd4A8a = uPpgRV1bzHM + (383 - 382);
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
                while (QJd4A8a < nfh5EwVMoY) {
                    if (ArgFeh9x[QJd4A8a].h < ArgFeh9x[uPpgRV1bzHM].h) {
                        uY7eVhx = ArgFeh9x[uPpgRV1bzHM];
                        ArgFeh9x[uPpgRV1bzHM] = ArgFeh9x[QJd4A8a];
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
                        ArgFeh9x[QJd4A8a] = uY7eVhx;
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
                    QJd4A8a = QJd4A8a +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            uPpgRV1bzHM = uPpgRV1bzHM + 1;
        };
    }
    {
        int uPpgRV1bzHM = 0;
        while (k2 > uPpgRV1bzHM) {
            {
                int QJd4A8a = uPpgRV1bzHM + 1;
                while (k2 > QJd4A8a) {
                    if (G57rqLjWD39x[uPpgRV1bzHM].h < G57rqLjWD39x[QJd4A8a].h) {
                        uY7eVhx = G57rqLjWD39x[uPpgRV1bzHM];
                        G57rqLjWD39x[uPpgRV1bzHM] = G57rqLjWD39x[QJd4A8a];
                        G57rqLjWD39x[QJd4A8a] = uY7eVhx;
                    }
                    QJd4A8a = QJd4A8a +1;
                };
            }
            uPpgRV1bzHM = uPpgRV1bzHM + 1;
        };
    }
    {
        int uPpgRV1bzHM = 0;
        while (uPpgRV1bzHM < nfh5EwVMoY) {
            cout << fixed << setprecision (2) << ArgFeh9x[uPpgRV1bzHM].h << " ";
            uPpgRV1bzHM = uPpgRV1bzHM + 1;
        };
    }
    {
        int uPpgRV1bzHM = 0;
        while (uPpgRV1bzHM < k2 - 1) {
            cout << fixed << setprecision (2) << G57rqLjWD39x[uPpgRV1bzHM].h << " ";
            uPpgRV1bzHM++;
        };
    }
    cout << G57rqLjWD39x[k2 - 1].h << endl;
    return 0;
}

