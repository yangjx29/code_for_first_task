int main () {
    int tmppoint;
    struct   info1 {
        int a [(556 - 553)];
    }
    XxAjISrg1 [N];
    struct   info2 {
        int f [(599 - 596)], l [(229 - 226)];
        double  result;
    }
    dist [N *(N -(252 - 251)) / (788 - 786)];
    int n, i, j, k = (621 - 621), p;
    double  tmpdist;
    scanf ("%d", &n);
    for (i = (733 - 733); i < n; i++) {
        scanf ("%d %d %d", &XxAjISrg1[i].a[(314 - 314)], &XxAjISrg1[i].a[(48 - 47)], &XxAjISrg1[i].a[(393 - 391)]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (951 - 951); i < n; i++) {
        for (j = i + (600 - 599); n > j; j++) {
            dist[k].result = sqrt ((double ) (XxAjISrg1[i].a[(658 - 658)] - XxAjISrg1[j].a[(533 - 533)]) * (XxAjISrg1[i].a[(718 - 718)] - XxAjISrg1[j].a[(83 - 83)]) + (XxAjISrg1[i].a[(366 - 365)] - XxAjISrg1[j].a[(676 - 675)]) * (XxAjISrg1[i].a[(839 - 838)] - XxAjISrg1[j].a[(972 - 971)]) + (XxAjISrg1[i].a[(629 - 627)] - XxAjISrg1[j].a[(609 - 607)]) * (XxAjISrg1[i].a[(35 - 33)] - XxAjISrg1[j].a[(145 - 143)]));
            {
                p = 849 - 849;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (p < (596 - 593)) {
                    dist[k].f[p] = XxAjISrg1[i].a[p];
                    dist[k].l[p] = XxAjISrg1[j].a[p];
                    p++;
                };
            }
            k++;
        };
    }
    for (j = (723 - 722); j < k; j++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = (988 - 988); i < k - j; i++) {
            if (dist[i].result < dist[i + (394 - 393)].result) {
                tmpdist = dist[i].result;
                dist[i].result = dist[i + (701 - 700)].result;
                dist[i + (821 - 820)].result = tmpdist;
                for (p = 0; p < (849 - 846); p++) {
                    tmppoint = dist[i].f[p];
                    dist[i].f[p] = dist[i + (869 - 868)].f[p];
                    dist[i + (76 - 75)].f[p] = tmppoint;
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
                    tmppoint = dist[i].l[p];
                    dist[i].l[p] = dist[i + 1].l[p];
                    dist[i + 1].l[p] = tmppoint;
                };
            };
        };
    }
    for (i = 0; i < k; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", dist[i].f[0], dist[i].f[1], dist[i].f[(314 - 312)], dist[i].l[0], dist[i].l[1], dist[i].l[(292 - 290)], dist[i].result);
    }
    return 0;
}

