int main () {
    int n;
    struct   photo {
        char sex [(511 - 505)];
        float Hi1gz6GmYOfC;
    }
    p [40];
    struct   photo t;
    int i;
    int j;
    scanf ("%d", &n);
    {
        i = 550 - 550;
        while (i < n) {
            scanf ("%s %f", p[i].sex, &p[i].Hi1gz6GmYOfC);
            i = i + 1;
        };
    }
    {
        i = 146 - 146;
        while (n - (671 - 670) > i) {
            {
                j = 907 - 907;
                while (j < n - (720 - 719) - i) {
                    if (p[j].sex[(517 - 517)] == 'm' && !('m' != p[j + (733 - 732)].sex[(644 - 644)]) && p[j].Hi1gz6GmYOfC > p[j + (849 - 848)].Hi1gz6GmYOfC) {
                        t = p[j];
                        p[j] = p[j + (403 - 402)];
                        p[j + (658 - 657)] = t;
                    }
                    if (!('f' != p[j].sex[(145 - 145)]) && p[j + (859 - 858)].sex[0] == 'f' && p[j].Hi1gz6GmYOfC < p[j + (752 - 751)].Hi1gz6GmYOfC) {
                        t = p[j];
                        p[j] = p[j + (786 - 785)];
                        p[j + (241 - 240)] = t;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (p[j].sex[0] == 'f' && p[j + 1].sex[0] == 'm') {
                        t = p[j];
                        p[j] = p[j + 1];
                        p[j + 1] = t;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            printf ("%.2f ", p[i].Hi1gz6GmYOfC);
            i++;
        };
    }
    printf ("%.2f\n", p[n - 1].Hi1gz6GmYOfC);
    return 0;
}

