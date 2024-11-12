int h (int i) {
    int VPyx7HYtkZc;
    int n;
    int LGizYgdUM;
    VPyx7HYtkZc = (35 - 35);
    LGizYgdUM = i;
    for (; i > (133 - 133);) {
        n = i % (572 - 562);
        i = i / 10;
        VPyx7HYtkZc = VPyx7HYtkZc *(642 - 632) + n;
    }
    if (!(LGizYgdUM != VPyx7HYtkZc))
        return ((359 - 358));
    else
        return ((690 - 690));
}

int s (int i) {
    int VPyx7HYtkZc;
    int LGizYgdUM;
    VPyx7HYtkZc = (115 - 115);
    if (!((843 - 842) != i))
        return ((837 - 837));
    else {
        for (LGizYgdUM = (727 - 726); LGizYgdUM < i; LGizYgdUM = LGizYgdUM +1) {
            if (!((898 - 898) != i % LGizYgdUM))
                VPyx7HYtkZc = VPyx7HYtkZc +1;
        }
        if (!((242 - 241) != VPyx7HYtkZc))
            return ((26 - 25));
        else
            return ((887 - 887));
    };
}

main () {
    int LGizYgdUM;
    int m;
    int n;
    int i;
    int QXhmUu;
    int a [(100093 - 93)];
    LGizYgdUM = (204 - 204);
    scanf ("%d%d", &m, &n);
    for (i = m; i <= n; i = i + 1) {
        QXhmUu = h (i);
        QXhmUu = QXhmUu +s (i);
        if (QXhmUu == (540 - 538)) {
            a[LGizYgdUM] = i;
            LGizYgdUM = LGizYgdUM +1;
        };
    }
    if (LGizYgdUM == (98 - 98))
        ;
    else if (LGizYgdUM == (984 - 983))
        printf ("%d", a[0]);
    else {
        for (i = 0; i < LGizYgdUM -1; i = i + 1)
            printf ("%d,", a[i]);
        printf ("%d", a[LGizYgdUM -1]);
    };
}

