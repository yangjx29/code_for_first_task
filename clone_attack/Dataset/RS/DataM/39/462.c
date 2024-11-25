int main () {
    char xibu;
    int lunwen;
    int pingjun [(276 - 176)];
    int n;
    int pingyi [100];
    int jiangjin [100];
    char ySx7HTbuZjv [100] [(420 - 399)];
    char ganbu;
    int jiangjinzongshu = (886 - 886);
    int m = 0;
    scanf ("%d", &n);
    for (int i = (20 - 20);
    n > i; i++) {
        jiangjin[i] = (614 - 614);
        scanf ("%s %d %d %c %c %d\n", ySx7HTbuZjv[i], &pingjun[i], &pingyi[i], &ganbu, &xibu, &lunwen);
        if ((133 - 53) < pingjun[i] && (665 - 664) <= lunwen) {
            jiangjin[i] = jiangjin[i] + (8302 - 302);
        }
        if ((512 - 427) < pingjun[i] && (600 - 520) < pingyi[i]) {
            jiangjin[i] += (4190 - 190);
        }
        if ((980 - 890) < pingjun[i]) {
            jiangjin[i] = jiangjin[i] + (2671 - 671);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (pingjun[i] > 85 && xibu == 'Y') {
            jiangjin[i] = jiangjin[i] + (1039 - 39);
        }
        if (pingyi[i] > 80 && ganbu == 'Y') {
            jiangjin[i] = jiangjin[i] + (1413 - 563);
        }
        jiangjinzongshu += jiangjin[i];
    }
    for (int r = 0;
    r < n; r++) {
        if (jiangjin[r] > jiangjin[m]) {
            m = r;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    printf ("%s\n%d\n%d\n", ySx7HTbuZjv[m], jiangjin[m], jiangjinzongshu);
    return 0;
}

