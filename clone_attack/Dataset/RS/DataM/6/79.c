int main () {
    int ztz2E9G36U4, t8SvgHtaw, MrhUfTCFL4in, zcNkrA, vpwqWU, OpOFVPh, y;
    int *qfZYL3k = NULL;
    cin >> ztz2E9G36U4;
    {
        t8SvgHtaw = 661 - 660;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t8SvgHtaw <= ztz2E9G36U4) {
            int kkUnzbZX [101] [101] = {0};
            t8SvgHtaw++;
            cin >> vpwqWU >> OpOFVPh;
            y = 0;
            {
                MrhUfTCFL4in = 365 - 364;
                while (MrhUfTCFL4in <= vpwqWU) {
                    {
                        zcNkrA = 1;
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
                        while (zcNkrA <= OpOFVPh) {
                            cin >> kkUnzbZX[MrhUfTCFL4in][zcNkrA];
                            zcNkrA++;
                        };
                    }
                    MrhUfTCFL4in = MrhUfTCFL4in +1;
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
            {
                qfZYL3k = 1;
                while (qfZYL3k <= kkUnzbZX[1] + OpOFVPh) {
                    y = y + (*qfZYL3k);
                    qfZYL3k++;
                };
            }
            {
                qfZYL3k = 2;
                while (qfZYL3k <= kkUnzbZX[vpwqWU - 1] + 1) {
                    y = y + (*qfZYL3k) + (*(qfZYL3k + OpOFVPh -1));
                    qfZYL3k = qfZYL3k + 101;
                };
            }
            {
                qfZYL3k = vpwqWU;
                while (qfZYL3k <= kkUnzbZX[vpwqWU] + OpOFVPh) {
                    y = y + (*qfZYL3k);
                    qfZYL3k++;
                };
            }
            cout << y << endl;
        };
    }
    return 0;
}

