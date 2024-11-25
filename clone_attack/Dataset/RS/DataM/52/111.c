void  main () {
    void  sQCFo6lDJ (int *p, int hkhaIO0iT, int iulv3fVrY0);
    int hkhaIO0iT;
    int iulv3fVrY0;
    int num [(717 - 617)];
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
    int zkdbAuc34Omp;
    scanf ("%d%d", &hkhaIO0iT, &iulv3fVrY0);
    {
        zkdbAuc34Omp = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zkdbAuc34Omp < hkhaIO0iT) {
            scanf ("%d", &num[zkdbAuc34Omp]);
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
            zkdbAuc34Omp = zkdbAuc34Omp + 1;
        };
    }
    sQCFo6lDJ (num, hkhaIO0iT, iulv3fVrY0);
    {
        zkdbAuc34Omp = 0;
        while (zkdbAuc34Omp < hkhaIO0iT) {
            if (zkdbAuc34Omp == 0)
                printf ("%d", num[zkdbAuc34Omp]);
            else
                printf (" %d", num[zkdbAuc34Omp]);
            zkdbAuc34Omp = zkdbAuc34Omp + 1;
        };
    };
}

void  sQCFo6lDJ (int *p, int hkhaIO0iT, int iulv3fVrY0) {
    int *q, OBNTk8xt;
    iulv3fVrY0--;
    q = p;
    OBNTk8xt = *(p + hkhaIO0iT - (754 - 753));
    {
        q = p + hkhaIO0iT - 1;
        while (q > p) {
            *q = *(q - 1);
            q--;
        };
    }
    if (iulv3fVrY0 > 0)
        sQCFo6lDJ (p, hkhaIO0iT, iulv3fVrY0);
    *q = OBNTk8xt;
}

