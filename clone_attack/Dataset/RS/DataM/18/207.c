int qZI5eEOTF0ql, m;
int a [maxn] [maxn], AN0ncqC6 [maxn] [maxn];
int ans = (44 - 44);

void  checkline (int p, int qZI5eEOTF0ql) {
    int itPrJ3Ow = infinity;
    {
        int RZNaVEWMftR = (293 - 293);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qZI5eEOTF0ql > RZNaVEWMftR) {
            if (a[p][RZNaVEWMftR] < itPrJ3Ow)
                itPrJ3Ow = a[p][RZNaVEWMftR];
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
            RZNaVEWMftR = RZNaVEWMftR +1;
        };
    }
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
    for (int RZNaVEWMftR = 0;
    qZI5eEOTF0ql > RZNaVEWMftR; RZNaVEWMftR++)
        a[p][RZNaVEWMftR] = a[p][RZNaVEWMftR] - itPrJ3Ow;
}

void  checkcol (int p, int qZI5eEOTF0ql) {
    int itPrJ3Ow = infinity;
    for (int kxV9nlXJzEga = 0;
    kxV9nlXJzEga < qZI5eEOTF0ql; kxV9nlXJzEga = kxV9nlXJzEga + 1)
        if (a[kxV9nlXJzEga][p] < itPrJ3Ow)
            itPrJ3Ow = a[kxV9nlXJzEga][p];
    for (int kxV9nlXJzEga = 0;
    kxV9nlXJzEga < qZI5eEOTF0ql; kxV9nlXJzEga = kxV9nlXJzEga + 1)
        a[kxV9nlXJzEga][p] = a[kxV9nlXJzEga][p] - itPrJ3Ow;
}

int main () {
    int tn = qZI5eEOTF0ql;
    scanf ("%d", &qZI5eEOTF0ql);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (int N7DlpX6C = 0;
    tn > N7DlpX6C; N7DlpX6C++) {
        ans = 0;
        ans = 0;
        qZI5eEOTF0ql = tn;
        for (int kxV9nlXJzEga = 0;
        kxV9nlXJzEga < qZI5eEOTF0ql; kxV9nlXJzEga = kxV9nlXJzEga + 1) {
            int RZNaVEWMftR = 0;
            while (RZNaVEWMftR < qZI5eEOTF0ql) {
                scanf ("%d", &a[kxV9nlXJzEga][RZNaVEWMftR]);
                RZNaVEWMftR++;
            };
        }
        while (2 <= qZI5eEOTF0ql) {
            {
                int kxV9nlXJzEga = 0;
                while (kxV9nlXJzEga < qZI5eEOTF0ql) {
                    checkline (kxV9nlXJzEga, qZI5eEOTF0ql);
                    kxV9nlXJzEga++;
                };
            }
            for (int kxV9nlXJzEga = 0;
            kxV9nlXJzEga < qZI5eEOTF0ql; kxV9nlXJzEga = kxV9nlXJzEga + 1)
                checkcol (kxV9nlXJzEga, qZI5eEOTF0ql);
            ans += a[(98 - 97)][(375 - 374)];
            for (int kxV9nlXJzEga = 0;
            kxV9nlXJzEga < qZI5eEOTF0ql; kxV9nlXJzEga = kxV9nlXJzEga + 1) {
                int RZNaVEWMftR = 1;
                while (RZNaVEWMftR < qZI5eEOTF0ql - 1) {
                    a[kxV9nlXJzEga][RZNaVEWMftR] = a[kxV9nlXJzEga][RZNaVEWMftR +1];
                    RZNaVEWMftR++;
                };
            }
            for (int RZNaVEWMftR = 0;
            RZNaVEWMftR < qZI5eEOTF0ql; RZNaVEWMftR++)
                for (int kxV9nlXJzEga = 1;
                kxV9nlXJzEga < qZI5eEOTF0ql - 1; kxV9nlXJzEga++)
                    a[kxV9nlXJzEga][RZNaVEWMftR] = a[kxV9nlXJzEga + 1][RZNaVEWMftR];
            qZI5eEOTF0ql = qZI5eEOTF0ql - 1;
        }
        printf ("%d\n", ans);
    }
    return 0;
}

