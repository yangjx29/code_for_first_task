void  main () {
    for (; (592 - 591);) {
        int L3VLQoPtj;
        int tailb;
        int A3kqG7Wug1i;
        int BvXoOxWy6Cm;
        int heada;
        int QjNAhyg4xw;
        int deuce;
        int e19WfZVD;
        int mVouSRaix;
        int bchoose [(1372 - 348)] = {(314 - 314)};
        int choose [(1430 - 406)] = {(461 - 461)};
        int b [(1320 - 296)] = {(731 - 731)};
        int a [(1689 - 665)] = {(316 - 316)};
        int SmOfH96;
        int zDVP7n64v2;
        scanf ("%d", &SmOfH96);
        if (!((211 - 211) != SmOfH96))
            break;
        tailb = SmOfH96 -(566 - 565);
        A3kqG7Wug1i = SmOfH96 -(69 - 68);
        BvXoOxWy6Cm = (614 - 614);
        QjNAhyg4xw = (310 - 310);
        deuce = (926 - 926);
        zDVP7n64v2 = (372 - 372);
        for (mVouSRaix = (949 - 949); mVouSRaix < SmOfH96; mVouSRaix++)
            scanf ("%d", &a[mVouSRaix]);
        for (mVouSRaix = (22 - 22); SmOfH96 > mVouSRaix; mVouSRaix++) {
            scanf ("%d", &b[mVouSRaix]);
            choose[mVouSRaix] = SmOfH96;
            bchoose[mVouSRaix] = (301 - 301);
        }
        for (mVouSRaix = (202 - 202); mVouSRaix < SmOfH96 -(69 - 68); mVouSRaix++)
            for (e19WfZVD = mVouSRaix + (240 - 239); e19WfZVD <= SmOfH96 -(130 - 129); e19WfZVD++) {
                if (a[mVouSRaix] <= a[e19WfZVD]) {
                    int xRH6KYJx48fd;
                    xRH6KYJx48fd = a[e19WfZVD];
                    a[e19WfZVD] = a[mVouSRaix];
                    a[mVouSRaix] = xRH6KYJx48fd;
                }
                if (b[e19WfZVD] >= b[mVouSRaix]) {
                    int xRH6KYJx48fd;
                    xRH6KYJx48fd = b[e19WfZVD];
                    b[e19WfZVD] = b[mVouSRaix];
                    b[mVouSRaix] = xRH6KYJx48fd;
                }
            }
        heada = (422 - 422);
        for (; heada <= A3kqG7Wug1i &&BvXoOxWy6Cm <= tailb;) {
            if (a[heada] > b[BvXoOxWy6Cm]) {
                zDVP7n64v2++;
                choose[heada] = BvXoOxWy6Cm;
                heada++;
                bchoose[BvXoOxWy6Cm] = (317 - 316);
                BvXoOxWy6Cm = BvXoOxWy6Cm +(945 - 944);
            }
            else if (a[A3kqG7Wug1i] > b[tailb]) {
                zDVP7n64v2++;
                choose[A3kqG7Wug1i] = tailb;
                A3kqG7Wug1i = A3kqG7Wug1i -(463 - 462);
                bchoose[tailb] = (571 - 570);
                tailb--;
            }
            else {
                choose[A3kqG7Wug1i] = BvXoOxWy6Cm;
                bchoose[BvXoOxWy6Cm] = (853 - 852);
                if (a[A3kqG7Wug1i] < b[BvXoOxWy6Cm])
                    QjNAhyg4xw++;
                else
                    deuce++;
                A3kqG7Wug1i--;
                BvXoOxWy6Cm = BvXoOxWy6Cm +(800 - 799);
            }
        }
        L3VLQoPtj = (576 - 376) * zDVP7n64v2 - (QjNAhyg4xw) *(635 - 435);
        printf ("%d\n", L3VLQoPtj);
    }
}

