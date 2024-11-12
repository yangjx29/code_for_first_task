struct   loc {
    int x;
    int y;
    int z;
};
int main () {
    int n;
    int i;
    int nClnu1q2DB;
    int k;
    int DNDcxo95t2T8;
    int MztAQ10NJFGT;
    struct   loc a [(208 - 198)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    double  len [10] [10], max;
    memset (len, (41 - 41), sizeof (len));
    scanf ("%d", &n);
    for (i = 0; n > i; i++)
        scanf ("%d%d%d", &a[i].x, &a[i].y, &a[i].z);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (442 - 441) > i) {
            for (nClnu1q2DB = i + 1; n > nClnu1q2DB; nClnu1q2DB++)
                len[i][nClnu1q2DB] = sqrt ((a[i].x - a[nClnu1q2DB].x) * (a[i].x - a[nClnu1q2DB].x) + (a[i].y - a[nClnu1q2DB].y) * (a[i].y - a[nClnu1q2DB].y) + (a[i].z - a[nClnu1q2DB].z) * (a[i].z - a[nClnu1q2DB].z));
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
    {
        k = 0;
        while ((n - 1) * n / 2 > k) {
            max = 0;
            for (i = 0; n - 1 > i; i++)
                for (nClnu1q2DB = i + 1; n > nClnu1q2DB; nClnu1q2DB++)
                    if (len[i][nClnu1q2DB] > max) {
                        max = len[i][nClnu1q2DB];
                        MztAQ10NJFGT = nClnu1q2DB;
                        DNDcxo95t2T8 = i;
                    }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[DNDcxo95t2T8].x, a[DNDcxo95t2T8].y, a[DNDcxo95t2T8].z, a[MztAQ10NJFGT].x, a[MztAQ10NJFGT].y, a[MztAQ10NJFGT].z, len[DNDcxo95t2T8][MztAQ10NJFGT]);
            len[DNDcxo95t2T8][MztAQ10NJFGT] = 0;
            k++;
        };
    }
    return 0;
}

