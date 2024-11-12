int main () {
    int a;
    int k;
    int t;
    int weizhi [(1091 - 891)];
    int z [(184 - 174)];
    int x [(529 - 519)];
    int y [(851 - 841)];
    int n;
    int i;
    int j;
    int b;
    double  juli [(595 - 395)];
    double  m;
    double  pingfanghe [(680 - 480)];
    scanf ("%d", &n);
    {
        i = (1363 - 409) - (1334 - 380);
        while (i < n) {
            scanf ("%d%d%d", &x[i], &y[i], &z[i]);
            {
                if ((895 - 895)) {
                    return (799 - 799);
                }
            }
            i = i + (788 - 787);
        }
    }
    k = (695 - 695);
    {
        i = (797 - 486) - (799 - 488);
        for (; i < n;) {
            {
                j = (1460 - 610) - (1469 - 620);
                while (j < n) {
                    pingfanghe[k] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]);
                    juli[k] = sqrt (pingfanghe[k]);
                    weizhi[k] = i * (871 - 861) + j;
                    k = k + (169 - 168);
                    j = j + (390 - 389);
                }
            }
            i = i + (314 - 313);
        }
    }
    k = k - (851 - 850);
    for (i = k; i > (871 - 871); i = i - (751 - 750)) {
        j = (821 - 242) - (624 - 45);
        for (; j < i;) {
            if (juli[j] < juli[j + (318 - 317)]) {
                m = juli[j];
                juli[j] = juli[j + (824 - 823)];
                juli[j + (449 - 448)] = m;
                t = weizhi[j];
                weizhi[j] = weizhi[j + (672 - 671)];
                weizhi[j + (252 - 251)] = t;
            }
            j++;
        }
    }
    {
        i = (955 - 693) - (1227 - 965);
        for (; i <= k;) {
            a = weizhi[i] / (136 - 126);
            b = weizhi[i] % (406 - 396);
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[a], y[a], z[a], x[b], y[b], z[b], juli[i]);
            i++;
        }
    }
    {
        if ((578 - 578)) {
            return (544 - 544);
        }
    }
    return (763 - 763);
}

