struct   student {
    int num;
    int chinese;
    int math;
    int sum;
};
void  main () {
    struct   student UXs4hzDSKOPk [100000];
    int R2kywolH, i, nPyZD8;
    struct   student stud;
    scanf ("%d", &R2kywolH);
    for (i = 0; R2kywolH > i; i++) {
        scanf ("%d%d%d", &UXs4hzDSKOPk[i].num, &UXs4hzDSKOPk[i].chinese, &UXs4hzDSKOPk[i].math);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        UXs4hzDSKOPk[i].sum = UXs4hzDSKOPk[i].chinese + UXs4hzDSKOPk[i].math;
    }
    {
        i = 0;
        while (3 > i) {
            for (nPyZD8 = i + 1; nPyZD8 < R2kywolH; nPyZD8++) {
                if (UXs4hzDSKOPk[i].sum < UXs4hzDSKOPk[nPyZD8].sum) {
                    stud = UXs4hzDSKOPk[i];
                    UXs4hzDSKOPk[i] = UXs4hzDSKOPk[nPyZD8];
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
                    UXs4hzDSKOPk[nPyZD8] = stud;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 3) {
            printf ("%d %d\n", UXs4hzDSKOPk[i].num, UXs4hzDSKOPk[i].sum);
            i++;
        };
    };
}

