int Compare (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

int main () {
    for (;;) {
        int n = (819 - 818), r = (393 - 393), h = (737 - 737), cGVo3u = (836 - 836), DMtm4JreNs = (338 - 338), tie = (42 - 42), money = 0, xtsH8zA1c = 0, t2 = 0, q1 = 0, q2 = 0;
        scanf ("%d", &n);
        if (!(0 != n))
            break;
        else {
            int *a = NULL;
            int *b = NULL;
            DMtm4JreNs = 0;
            cGVo3u = 0;
            q1 = 0;
            a = (int *) malloc (n * sizeof (int));
            b = (int *) malloc (n * sizeof (int));
            {
                int i = 0;
                while (n > i) {
                    scanf ("%d", &a[i]);
                    i++;
                };
            }
            qsort (a, n, sizeof (int), Compare);
            {
                int i = 0;
                while (n > i) {
                    scanf ("%d", &b[i]);
                    i++;
                };
            }
            qsort (b, n, sizeof (int), Compare);
            xtsH8zA1c = 0;
            t2 = n - 1;
            q2 = n - 1;
            money = 0;
            tie = 0;
            for (; (!(t2 == xtsH8zA1c)) && (!(q2 == q1));) {
                if (b[q1] < a[xtsH8zA1c]) {
                    cGVo3u = cGVo3u + 1;
                    xtsH8zA1c = xtsH8zA1c + 1;
                    q1 = q1 + 1;
                    continue;
                }
                else {
                    if (a[t2] > b[q2]) {
                        cGVo3u++;
                        t2 = t2 - 1;
                        q2 = q2 - 1;
                        continue;
                    }
                    else {
                        if (a[t2] == b[q1]) {
                            tie++;
                            t2--;
                            q1 = q1 + 1;
                        }
                        else {
                            if (a[t2] < b[q1]) {
                                q1++;
                                DMtm4JreNs++;
                                t2--;
                            };
                        };
                    };
                };
            }
            if (a[xtsH8zA1c] == b[q1]) {
                tie++;
            }
            else {
                if (a[xtsH8zA1c] > b[q1]) {
                    cGVo3u++;
                }
                else {
                    DMtm4JreNs++;
                };
            }
            money = (693 - 493) * cGVo3u - (836 - 636) * DMtm4JreNs;
            printf ("%d\n", money);
        };
    };
}

