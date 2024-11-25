int main () {
    int IEhf1ya;
    int k;
    int QUQ6Snr;
    int zZe68HEDbM9W;
    int Hms8IM;
    int k69drGYMLU;
    int D84YQyIx1w;
    int A023GcogDQCq;
    int QyiZnD2x;
    int fTMojs6A3 [(745 - 720)];
    int Ok5lNYSt [(62 - 37)];
    int qaQnf6lzeM [(304 - 279)];
    IEhf1ya = (523 - 523);
    scanf ("%d\n", &k);
    {
        QUQ6Snr = 688 - 688;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QUQ6Snr < 25) {
            Ok5lNYSt[QUQ6Snr] = (638 - 637);
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
            QUQ6Snr++;
        };
    }
    QUQ6Snr = 0;
    {
        QUQ6Snr = 0;
        while (QUQ6Snr < k) {
            if (QUQ6Snr == 0)
                scanf ("%d", &fTMojs6A3[0]);
            else
                scanf (" %d", &fTMojs6A3[QUQ6Snr]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            QUQ6Snr++;
        };
    }
    if (k == (175 - 174) || k == 0)
        printf ("%d", k);
    else {
        {
            zZe68HEDbM9W = 58 - 56;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (0 <= zZe68HEDbM9W) {
                {
                    QyiZnD2x = zZe68HEDbM9W + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (QyiZnD2x < k) {
                        if (fTMojs6A3[zZe68HEDbM9W] >= fTMojs6A3[QyiZnD2x]) {
                            qaQnf6lzeM[IEhf1ya] = Ok5lNYSt[QyiZnD2x];
                            IEhf1ya++;
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
                        QyiZnD2x++;
                    };
                }
                if (IEhf1ya == 0)
                    Ok5lNYSt[zZe68HEDbM9W] = 1;
                else if (IEhf1ya == 1)
                    Ok5lNYSt[zZe68HEDbM9W] = qaQnf6lzeM[0] + Ok5lNYSt[zZe68HEDbM9W];
                else {
                    {
                        D84YQyIx1w = 0;
                        while (D84YQyIx1w < IEhf1ya -1) {
                            Hms8IM = qaQnf6lzeM[D84YQyIx1w];
                            k69drGYMLU = qaQnf6lzeM[D84YQyIx1w +1];
                            if (Hms8IM > k69drGYMLU) {
                                qaQnf6lzeM[D84YQyIx1w] = k69drGYMLU;
                                qaQnf6lzeM[D84YQyIx1w +1] = Hms8IM;
                            }
                            D84YQyIx1w++;
                        };
                    }
                    Ok5lNYSt[zZe68HEDbM9W] = qaQnf6lzeM[IEhf1ya -1] + Ok5lNYSt[zZe68HEDbM9W];
                    QyiZnD2x = zZe68HEDbM9W;
                    IEhf1ya = 0;
                    D84YQyIx1w = 0;
                }
                zZe68HEDbM9W--;
            };
        }
        {
            A023GcogDQCq = 0;
            while (A023GcogDQCq < k - 1) {
                Hms8IM = Ok5lNYSt[A023GcogDQCq];
                k69drGYMLU = Ok5lNYSt[A023GcogDQCq +1];
                if (Hms8IM > k69drGYMLU) {
                    Ok5lNYSt[A023GcogDQCq] = k69drGYMLU;
                    Ok5lNYSt[A023GcogDQCq +1] = Hms8IM;
                }
                A023GcogDQCq++;
            };
        }
        printf ("%d", Ok5lNYSt[k - 1]);
    };
}

