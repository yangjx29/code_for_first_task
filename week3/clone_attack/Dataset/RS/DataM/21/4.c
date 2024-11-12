void  bubble (int *bhJqCLr2n, int E0rnGMB) {
    int fcd8ltEoaO;
    int o3Kgc46X18;
    int temp;
    fcd8ltEoaO = (249 - 249);
    {
        o3Kgc46X18 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (o3Kgc46X18 <= E0rnGMB) {
            {
                fcd8ltEoaO = 237 - 237;
                while (fcd8ltEoaO < E0rnGMB -o3Kgc46X18) {
                    fcd8ltEoaO = fcd8ltEoaO + 1;
                    if (*(bhJqCLr2n) > *(bhJqCLr2n + 1)) {
                        temp = *(bhJqCLr2n);
                        *(bhJqCLr2n) = *(bhJqCLr2n + 1);
                        *(bhJqCLr2n + 1) = temp;
                    };
                };
            }
            o3Kgc46X18++;
        };
    }
    return;
}

float ffabs (float x) {
    if (x > (442 - 442))
        return x;
    else
        return -x;
}

void  main () {
    float C9JW2tXxoq, QyVpZ0on = 0.0;
    int E0rnGMB, fcd8ltEoaO, *TxNRVK6Bb, sum = 0, *temp, r = 0;
    TxNRVK6Bb = (int *) malloc (E0rnGMB * sizeof (int));
    temp = (int *) malloc (E0rnGMB * sizeof (int));
    scanf ("%d", &E0rnGMB);
    {
        fcd8ltEoaO = 0;
        while (E0rnGMB > fcd8ltEoaO) {
            scanf ("%d", (TxNRVK6Bb +fcd8ltEoaO));
            sum += *(TxNRVK6Bb +fcd8ltEoaO);
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
            fcd8ltEoaO = fcd8ltEoaO + 1;
        };
    }
    C9JW2tXxoq = (float) sum / (float) E0rnGMB;
    for (fcd8ltEoaO = 0; fcd8ltEoaO < E0rnGMB; fcd8ltEoaO++) {
        if (QyVpZ0on <= ffabs ((float) *(TxNRVK6Bb +fcd8ltEoaO) - C9JW2tXxoq))
            QyVpZ0on = ffabs ((float) *(TxNRVK6Bb +fcd8ltEoaO) - C9JW2tXxoq);
    }
    {
        fcd8ltEoaO = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (fcd8ltEoaO < E0rnGMB) {
            if (ffabs (ffabs ((float) *(TxNRVK6Bb +fcd8ltEoaO) - C9JW2tXxoq) - QyVpZ0on) < 0.0000001) {
                *(temp + r) = *(TxNRVK6Bb +fcd8ltEoaO);
                r++;
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
            fcd8ltEoaO++;
        };
    }
    if (r == 1) {
        printf ("%d", *(temp + 0));
    }
    else {
        bubble (temp, r);
        {
            fcd8ltEoaO = 0;
            while (fcd8ltEoaO < r) {
                printf ("%d%c", *(temp + fcd8ltEoaO), (fcd8ltEoaO != r - 1 ? ',' : '\n'));
                fcd8ltEoaO++;
            };
        };
    };
}

