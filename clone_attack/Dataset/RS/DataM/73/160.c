int main () {
    int AOofC2vgb03k;
    int IhLfpZ;
    AOofC2vgb03k = 0;
    int qVCPR7Lmw3 [6];
    int lRaMz6 [6];
    int yNriyKnt [6];
    int H4ayjgMi [6] [6];
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
    int i;
    int rnHkc2b6;
    int tiQLoHvA;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 6) {
            for (rnHkc2b6 = 1; rnHkc2b6 < 6; rnHkc2b6 = rnHkc2b6 + 1) {
                cin >> H4ayjgMi[i][rnHkc2b6];
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
            i++;
        };
    }
    memset (qVCPR7Lmw3, 0, sizeof (qVCPR7Lmw3));
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < 6) {
            for (rnHkc2b6 = 1; rnHkc2b6 < 6; rnHkc2b6++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (H4ayjgMi[i][rnHkc2b6] > qVCPR7Lmw3[i]) {
                    qVCPR7Lmw3[i] = H4ayjgMi[i][rnHkc2b6];
                    lRaMz6[i] = i;
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
                    yNriyKnt[i] = rnHkc2b6;
                };
            }
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
            i++;
        };
    }
    for (i = 1; i < 6; i++) {
        tiQLoHvA = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tiQLoHvA < 6) {
            IhLfpZ = yNriyKnt[i];
            if (H4ayjgMi[tiQLoHvA][IhLfpZ] < qVCPR7Lmw3[i]) {
                break;
            }
            else if (tiQLoHvA == 5) {
                cout << lRaMz6[i] << " " << yNriyKnt[i] << " " << qVCPR7Lmw3[i];
                AOofC2vgb03k = 1;
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
            tiQLoHvA++;
        };
    }
    if (!AOofC2vgb03k)
        cout << "not found";
}

