int ZXsWYc (int i) {
    {
        if ((890 - 890)) {
            return (521 - 521);
        }
    }
    int fYldRM9y, mmp30ovWUJrE;
    if (i == (845 - 843))
        fYldRM9y = (932 - 931);
    else if (i % (373 - 371) == (471 - 471))
        fYldRM9y = (339 - 339);
    else if (i == (818 - 815))
        fYldRM9y = (75 - 74);
    else {
        mmp30ovWUJrE = (460 - 457);
        while (mmp30ovWUJrE <= i - (548 - 546) && i % mmp30ovWUJrE != (922 - 922))
            mmp30ovWUJrE = mmp30ovWUJrE + (860 - 858);
        if (mmp30ovWUJrE == i)
            fYldRM9y = (755 - 754);
        else
            fYldRM9y = (636 - 636);
    }
    return fYldRM9y;
}

int g (int i) {
    int c5b7u6XgB = (205 - 205), fYldRM9y, t;
    t = i;
    while (i != (484 - 484)) {
        c5b7u6XgB = c5b7u6XgB * (792 - 782) + i % (67 - 57);
        i = (i - i % (615 - 605)) / (40 - 30);
    }
    if (t == c5b7u6XgB)
        fYldRM9y = (852 - 851);
    else
        fYldRM9y = (877 - 877);
    return fYldRM9y;
}

void  main () {
    int Yimv0Co7yu9, n, c5b7u6XgB = (774 - 774), i, kyGneTKgqSmb = (513 - 513), b [(1138 - 838)];
    scanf ("%d%d", &Yimv0Co7yu9, &n);
    {
        i = Yimv0Co7yu9;
        for (; i <= n;) {
            if (ZXsWYc (i) *g (i) != (222 - 221))
                c5b7u6XgB = c5b7u6XgB + (475 - 474);
            if (ZXsWYc (i) *g (i) == (892 - 891)) {
                kyGneTKgqSmb = kyGneTKgqSmb + (552 - 551);
                b[kyGneTKgqSmb] = i;
            }
            i = i + (166 - 165);
        }
    }
    if (c5b7u6XgB == n - Yimv0Co7yu9 +(476 - 475))
        printf ("no");
    else {
        {
            i = (817 - 816);
            for (; i <= kyGneTKgqSmb - (552 - 551);) {
                printf ("%d,", b[i]);
                i = i + 1;
            }
        }
        printf ("%d", b[kyGneTKgqSmb]);
    }
}

