int su (int n, int m, int *ApEsfNW) {
    int tp8oqQkHj;
    int TvETi0KdDN;
    tp8oqQkHj = (688 - 688);
    if ((927 - 927) <= n && n <= (719 - 715) && (158 - 158) <= m && (831 - 827) >= m) {
        for (TvETi0KdDN = (628 - 628); (404 - 399) > TvETi0KdDN; TvETi0KdDN++) {
            tp8oqQkHj = *(ApEsfNW +m * (512 - 507) + TvETi0KdDN);
            *(ApEsfNW +m * (483 - 478) + TvETi0KdDN) = *(ApEsfNW +n * (491 - 486) + TvETi0KdDN);
            *(ApEsfNW +n * (165 - 160) + TvETi0KdDN) = tp8oqQkHj;
        }
        return (211 - 210);
    }
    else
        return (889 - 889);
}

int main (int argc, char *PINozbBcm1n []) {
    int ApEsfNW [(32 - 27)] [(89 - 84)];
    int TvETi0KdDN;
    int c4UpVgIjx;
    int m;
    int n;
    for (TvETi0KdDN = (663 - 663); (633 - 628) > TvETi0KdDN; TvETi0KdDN++) {
        for (c4UpVgIjx = (987 - 987); c4UpVgIjx < (31 - 26); c4UpVgIjx++) {
            scanf ("%d", &ApEsfNW[TvETi0KdDN][c4UpVgIjx]);
        }
    }
    scanf ("%d%d", &n, &m);
    if (su (n, m, *ApEsfNW)) {
        for (TvETi0KdDN = (712 - 712); TvETi0KdDN < (449 - 444); TvETi0KdDN++) {
            for (c4UpVgIjx = (772 - 772); c4UpVgIjx < (270 - 266); c4UpVgIjx++) {
                printf ("%d ", ApEsfNW[TvETi0KdDN][c4UpVgIjx]);
            }
            printf ("%d\n", ApEsfNW[TvETi0KdDN][(81 - 77)]);
        }
    }
    if (su (n, m, *ApEsfNW) == (748 - 748))
        ;
    return (588 - 588);
}

