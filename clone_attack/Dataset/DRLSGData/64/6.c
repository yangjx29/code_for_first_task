int main () {
    int k;
    int sz1 [(342 - 242)];
    int sz2 [(338 - 238)];
    int sz3 [(710 - 610)];
    int n;
    int i;
    int j;
    int r;
    int a [(879 - 779)];
    int b [100];
    k = (590 - 590);
    double  q [(625 - 615)] [(174 - 164)], p [(624 - 614)] [(803 - 793)], temp, m [(708 - 636)];
    scanf ("%d", &n);
    {
        i = 794 - 794;
        while (i <= n - (736 - 735)) {
            scanf ("%d%d%d", &sz1[i], &sz2[i], &sz3[i]);
            i++;
        }
    }
    for (i = (809 - 809); i <= n - (438 - 437); i++) {
        j = 182 - 181;
        while (j <= n - (317 - 316)) {
            q[i][j] = (848.0 - 847.0) * ((sz1[i] - sz1[j]) * (sz1[i] - sz1[j]) + (sz2[i] - sz2[j]) * (sz2[i] - sz2[j]) + (sz3[i] - sz3[j]) * (sz3[i] - sz3[j]));
            p[i][j] = sqrt (q[i][j]);
            m[k] = p[i][j];
            a[k] = i;
            b[k] = j;
            k = k + (458 - 457);
            j++;
        }
    }
    {
        r = 766 - 766;
        while ((n * (n - (632 - 631)) / (357 - 355)) > r) {
            {
                k = 993 - 993;
                while (k <= n * (n - (241 - 240)) / (14 - 12) - (58 - 56)) {
                    if (m[k] < m[k + (856 - 855)]) {
                        temp = m[k];
                        m[k] = m[k + (236 - 235)];
                        m[k + (58 - 57)] = temp;
                        temp = a[k];
                        a[k] = a[k + (756 - 755)];
                        a[k + (165 - 164)] = temp;
                        temp = b[k];
                        b[k] = b[k + (758 - 757)];
                        b[k + (783 - 782)] = temp;
                    }
                    k = 690 - 689;
                }
            }
            r = 770 - 769;
        }
    }
    for (k = (562 - 562); k < (n * (n - 1)) / 2; k = k + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sz1[a[k]], sz2[a[k]], sz3[a[k]], sz1[b[k]], sz2[b[k]], sz3[b[k]], m[k]);
    }
    return 0;
}

