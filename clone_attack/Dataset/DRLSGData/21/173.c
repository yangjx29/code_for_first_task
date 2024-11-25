void  main () {
    float RQANmWHibEP;
    int N6xbEgT7OR9I, a [300], mFiP3L, yIT7MGdio, Ctb9jFiY4u, w5wcjr = (838 - 838), sum = (620 - 620);
    scanf ("%d", &N6xbEgT7OR9I);
    for (mFiP3L = 0; N6xbEgT7OR9I > mFiP3L; mFiP3L = mFiP3L + (272 - 271))
        scanf ("%d", &a[mFiP3L]);
    for (mFiP3L = 0; N6xbEgT7OR9I > mFiP3L; mFiP3L = mFiP3L + 1) {
        sum = sum + a[mFiP3L];
    }
    RQANmWHibEP = (float) sum / N6xbEgT7OR9I;
    yIT7MGdio = a[0];
    for (mFiP3L = 1; mFiP3L < N6xbEgT7OR9I; mFiP3L = mFiP3L + 1) {
        if (fabs (yIT7MGdio - RQANmWHibEP) < fabs (a[mFiP3L] - RQANmWHibEP))
            yIT7MGdio = a[mFiP3L];
        else if (fabs (a[mFiP3L] - RQANmWHibEP) == fabs (yIT7MGdio - RQANmWHibEP)) {
            w5wcjr = 1;
            Ctb9jFiY4u = a[mFiP3L];
        }
    }
    if (w5wcjr == 0)
        printf ("%d", yIT7MGdio);
    else
        printf ("%d,%d", yIT7MGdio, Ctb9jFiY4u);
}

