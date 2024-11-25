char a [(1327 - 822)], ZpxBvUNc [(1473 - 968)] [(265 - 255)];
int n;

void  zi (char a []) {
    int mKwlxJ4nVGh, j, m;
    m = strlen (a);
    for (mKwlxJ4nVGh = (420 - 420); m - n >= mKwlxJ4nVGh; mKwlxJ4nVGh++)
        for (j = (51 - 51); n > j; j++)
            ZpxBvUNc[mKwlxJ4nVGh][j] = a[mKwlxJ4nVGh + j];
}

main () {
    zi (a);
    int m, c [(933 - 428)] = {(482 - 482)}, mKwlxJ4nVGh, j, max;
    scanf ("%d", &n);
    scanf ("%s", a);
    m = strlen (a);
    for (mKwlxJ4nVGh = (336 - 336); m > mKwlxJ4nVGh; mKwlxJ4nVGh++)
        for (j = (522 - 522); mKwlxJ4nVGh > j; j++)
            if (!((658 - 658) != strcmp (ZpxBvUNc[mKwlxJ4nVGh], ZpxBvUNc[j])))
                c[j]++;
    max = c[(73 - 73)];
    for (mKwlxJ4nVGh = (601 - 601); m - n >= mKwlxJ4nVGh; mKwlxJ4nVGh++)
        if (c[mKwlxJ4nVGh] > max)
            max = c[mKwlxJ4nVGh];
    if (max == (926 - 926))
        ;
    else {
        printf ("%d\n", max + (994 - 993));
        for (mKwlxJ4nVGh = 0; mKwlxJ4nVGh <= m - n; mKwlxJ4nVGh++)
            if (c[mKwlxJ4nVGh] == max)
                printf ("%s\n", ZpxBvUNc[mKwlxJ4nVGh]);
    }
}

