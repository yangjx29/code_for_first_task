void  main () {
    int k;
    int Xj9mrEVoS4;
    int TxM2nOH9;
    int eQjTdb5S [301] = {0};
    int QlzNaRtk;
    int t;
    int flag;
    k = (825 - 825);
    scanf ("%d", &QlzNaRtk);
    {
        Xj9mrEVoS4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Xj9mrEVoS4 < QlzNaRtk) {
            scanf ("%d", &t);
            flag = 1;
            {
                TxM2nOH9 = 0;
                while (TxM2nOH9 < k) {
                    if (t == eQjTdb5S[TxM2nOH9]) {
                        flag = 0;
                        break;
                    }
                    TxM2nOH9 = TxM2nOH9 +1;
                };
            }
            Xj9mrEVoS4 = Xj9mrEVoS4 +1;
            if (flag == 1)
                eQjTdb5S[k++] = t;
        };
    }
    if (k > 1) {
        Xj9mrEVoS4 = 0;
        while (Xj9mrEVoS4 < k - 1) {
            printf ("%d,", eQjTdb5S[Xj9mrEVoS4]);
            Xj9mrEVoS4++;
        };
    }
    printf ("%d\n", eQjTdb5S[k - 1]);
}

