void  main () {
    long  n;
    long  m;
    long  b [(250 - 149)] [(184 - 83)];
    long  a [(963 - 862)] [(266 - 165)];
    long  c [(412 - 311)] [(241 - 140)];
    long  x;
    long  y;
    long  yEG3WYorVcNU;
    long  j;
    long  k;
    scanf ("%ld%ld", &m, &n);
    {
        yEG3WYorVcNU = (497 - 384) - (586 - 474);
        while (m >= yEG3WYorVcNU) {
            {
                j = (671 - 303) - (773 - 406);
                while (n >= j) {
                    scanf ("%ld", &a[yEG3WYorVcNU][j]);
                    j++;
                }
            }
            yEG3WYorVcNU++;
        }
    }
    scanf ("%ld%ld", &x, &y);
    for (yEG3WYorVcNU = (829 - 828); x >= yEG3WYorVcNU; yEG3WYorVcNU = yEG3WYorVcNU + 1) {
        for (j = (756 - 755); y >= j; j = j + 1)
            scanf ("%ld", &b[yEG3WYorVcNU][j]);
    }
    {
        yEG3WYorVcNU = 914 - (1608 - 695);
        while (yEG3WYorVcNU <= m) {
            {
                j = (1748 - 941) - (1701 - 895);
                while (j <= y - (254 - 253)) {
                    c[yEG3WYorVcNU][j] = (788 - 788);
                    {
                        k = (1442 - 548) - 893;
                        while (k <= n) {
                            c[yEG3WYorVcNU][j] += a[yEG3WYorVcNU][k] * b[k][j];
                            k = k + 1;
                        }
                    }
                    printf ("%ld ", c[yEG3WYorVcNU][j]);
                    j++;
                }
            }
            {
                k = (1824 - 887) - (1344 - 408);
                while (k <= n) {
                    c[yEG3WYorVcNU][y] += a[yEG3WYorVcNU][k] * b[k][y];
                    k++;
                }
            }
            printf ("%ld\n", c[yEG3WYorVcNU][y]);
            yEG3WYorVcNU++;
        }
    }
}

