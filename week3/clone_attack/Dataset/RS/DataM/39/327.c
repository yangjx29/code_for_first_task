int main () {
    int lun [200];
    int sum [200];
    int ban [200];
    int qimo [200];
    char name [200] [30];
    int n;
    int i;
    int max;
    int zong;
    char gan [200];
    char xi [200];
    scanf ("%d", &n);
    zong = 0;
    {
        i = 0;
        while (n > i) {
            scanf ("%s%d%d %c %c%d", name[i], &qimo[i], &ban[i], &gan[i], &xi[i], &lun[i]);
            sum[i] = 0;
            if (qimo[i] > 80) {
                if (lun[i] >= 1) {
                    sum[i] += 8000;
                };
            }
            if (gan[i] == 'Y' && ban[i] > 80)
                sum[i] += 850;
            if (85 < qimo[i]) {
                if (ban[i] > 80) {
                    sum[i] += 4000;
                }
                if (xi[i] == 'Y') {
                    sum[i] += 1000;
                };
            }
            if (qimo[i] > 90) {
                sum[i] += 2000;
            }
            zong = zong + sum[i];
            i = i + 1;
        };
    }
    max = 0;
    for (i = 0; i < n; i++) {
        if (sum[max] < sum[i]) {
            max = i;
        };
    }
    printf ("%s\n%d\n", name[max], sum[max]);
    printf ("%d", zong);
    return 0;
}

