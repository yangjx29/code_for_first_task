void  main () {
    char x = ',';
    int a [(2508 - 508)], b [2000], max, YudPHqh, mxsWvbBAk = (477 - 477), j, n, k = (546 - 546), xx5HLkQiFw3f = 0;
    for (; !('\n' == x);) {
        x = getchar ();
        scanf ("%d", &a[mxsWvbBAk]);
        mxsWvbBAk = mxsWvbBAk + 1;
    }
    n = mxsWvbBAk;
    for (mxsWvbBAk = 0; n > mxsWvbBAk; mxsWvbBAk = mxsWvbBAk + 1)
        scanf ("%d%c", &b[mxsWvbBAk], &x);
    YudPHqh = a[0];
    max = b[0];
    for (mxsWvbBAk = 0; n > mxsWvbBAk; mxsWvbBAk = mxsWvbBAk + 1) {
        if (a[mxsWvbBAk] < YudPHqh)
            YudPHqh = a[mxsWvbBAk];
        if (max < b[mxsWvbBAk])
            max = b[mxsWvbBAk];
    }
    for (mxsWvbBAk = YudPHqh; max >= mxsWvbBAk; mxsWvbBAk = mxsWvbBAk + 1) {
        {
            j = 0;
            while (n > j) {
                if (mxsWvbBAk >= a[j] && mxsWvbBAk < b[j])
                    k = k + 1;
                j = j + 1;
            };
        }
        if (k > xx5HLkQiFw3f)
            xx5HLkQiFw3f = k;
        k = 0;
    }
    printf ("%d %d", n, xx5HLkQiFw3f);
}

