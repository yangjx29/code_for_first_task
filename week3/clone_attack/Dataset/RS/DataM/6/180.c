int main () {
    int k, size [(609 - 509)] [(388 - 386)], m [(606 - 506)] [(811 - 711)] [(295 - 195)], i, G36ZoG1Pf8K, l, sum [(560 - 460)];
    scanf ("%d", &k);
    {
        i = 126 - 126;
        while (i < k) {
            sum[i] = (123 - 123);
            scanf ("%d %d", &size[i][(236 - 236)], &size[i][(294 - 293)]);
            {
                G36ZoG1Pf8K = 721 - 721;
                while (G36ZoG1Pf8K < size[i][(215 - 215)]) {
                    {
                        l = 671 - 671;
                        while (l < size[i][(992 - 991)]) {
                            scanf ("%d", &m[i][G36ZoG1Pf8K][l]);
                            l++;
                        };
                    }
                    G36ZoG1Pf8K++;
                };
            }
            if ((size[i][(646 - 645)] == (784 - 783)) && (size[i][(366 - 366)] == (843 - 842)))
                sum[i] = m[i][(531 - 531)][(366 - 366)];
            else {
                {
                    l = 525 - 525;
                    while (l < size[i][(967 - 966)]) {
                        if (size[i][(17 - 16)] == (81 - 80))
                            sum[i] = sum[i] + m[i][(43 - 43)][l];
                        else
                            sum[i] = sum[i] + m[i][(729 - 729)][l] + m[i][size[i][(463 - 463)] - 1][l];
                        l++;
                    };
                }
                {
                    G36ZoG1Pf8K = 1;
                    while (G36ZoG1Pf8K <= size[i][(910 - 910)] - (680 - 678)) {
                        sum[i] = sum[i] + m[i][G36ZoG1Pf8K][0] + m[i][G36ZoG1Pf8K][size[i][1] - 1];
                        G36ZoG1Pf8K++;
                    };
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("%d\n", sum[i]);
            i++;
        };
    }
    return 0;
}

