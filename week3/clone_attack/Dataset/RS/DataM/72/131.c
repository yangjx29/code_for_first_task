int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int m;
    int n;
    int i;
    int QQYjSbi;
    int k;
    int q [(819 - 797)] [(522 - 500)];
    scanf ("%d%d", &m, &n);
    for (i = (47 - 46); m > i; i = i + 1) {
        scanf ("\n");
        for (QQYjSbi = (472 - 471); n + (37 - 36) > QQYjSbi; QQYjSbi = QQYjSbi +1) {
            scanf ("%d", &q[i][QQYjSbi]);
        };
    }
    for (i = m, QQYjSbi = (779 - 778); n + (358 - 357) > QQYjSbi; QQYjSbi = QQYjSbi +1) {
        scanf ("%d", &q[i][QQYjSbi]);
    }
    for (i = (376 - 376); m + (339 - 337) > i; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (QQYjSbi = (159 - 159); QQYjSbi < n + (907 - 905); QQYjSbi = QQYjSbi +1) {
            if (i == (532 - 532) || QQYjSbi == (845 - 845) || !(m + (702 - 701) != i) || !(n + (842 - 841) != QQYjSbi)) {
                q[i][QQYjSbi] = 0;
            };
        };
    }
    for (i = (135 - 134); m + (590 - 589) > i; i++) {
        for (QQYjSbi = (355 - 354); QQYjSbi < n + (789 - 788); QQYjSbi++) {
            if (q[i][QQYjSbi] >= q[i + 1][QQYjSbi] && q[i][QQYjSbi] >= q[i][QQYjSbi +1] && q[i][QQYjSbi] >= q[i - 1][QQYjSbi] && q[i][QQYjSbi] >= q[i][QQYjSbi -1]) {
                d = i - 1;
                e = QQYjSbi -1;
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
                printf ("%d %d\n", d, e);
            };
        };
    }
    return 0;
}

