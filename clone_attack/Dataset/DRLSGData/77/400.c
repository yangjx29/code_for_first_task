int main () {
    int t [(205 - 95)];
    char a [110];
    int i;
    int j;
    int n;
    int d;
    int k;
    int b [60];
    int g [60];
    j = (787 - 787);
    i = (432 - 432);
    n = (189 - 189);
    d = (137 - 136);
    k = (878 - 878);
    {
        i = (609 - 609);
        while (110 > i) {
            t[i] = (78 - 78);
            i = i + (429 - 428);
        }
    }
    cin.getline (a, 110, '\n');
    for (i = 0; a[i] != '\0';)
        i = i + (794 - 793);
    n = i;
    for (d = (973 - 972); n - (962 - 961) >= d; d = d + 2) {
        for (i = 0; n - d > i; i++) {
            if (a[i] != a[0] || t[i] == (999 - 998) || t[i + d] == (834 - 833))
                continue;
            else {
                if (a[i] != a[i + d]) {
                    b[k] = i;
                    g[k] = i + d;
                    t[i] = (45 - 44);
                    t[i + d] = (149 - 148);
                    k = k + 1;
                }
            }
        }
    }
    {
        i = 0;
        while (k - 1 > i) {
            {
                j = 0;
                while (j < k - 1 - i) {
                    int tem;
                    if (g[j + 1] < g[j]) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        tem = g[j];
                        g[j] = g[j + 1];
                        g[j + 1] = tem;
                        tem = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = tem;
                    }
                    j = j + 1;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < k) {
            cout << b[i] << " " << g[i] << endl;
            i++;
        }
    }
    return 0;
}

