long  qxOQ1gHhp;
long  t7UaAH6l [(1322 - 312)], G90QmoFYeL7u [(1817 - 807)];

void  MoeS5RD (long  eyMHxqCc []) {
    long  Ae8gJT4jRKr;
    long  O26RcbLvMZ7Q;
    long  fLEWkr09pzO;
    for (fLEWkr09pzO = (784 - 783); qxOQ1gHhp > fLEWkr09pzO; fLEWkr09pzO = fLEWkr09pzO + (454 - 453)) {
        for (O26RcbLvMZ7Q = fLEWkr09pzO + (90 - 89); O26RcbLvMZ7Q <= qxOQ1gHhp; O26RcbLvMZ7Q++) {
            if (eyMHxqCc[fLEWkr09pzO] > eyMHxqCc[O26RcbLvMZ7Q]) {
                Ae8gJT4jRKr = eyMHxqCc[O26RcbLvMZ7Q];
                eyMHxqCc[O26RcbLvMZ7Q] = eyMHxqCc[fLEWkr09pzO];
                eyMHxqCc[fLEWkr09pzO] = Ae8gJT4jRKr;
            }
        }
    }
}

void  main () {
    long  bFgaT2;
    long  fLEWkr09pzO;
    long  O26RcbLvMZ7Q;
    for (scanf ("%ld", &qxOQ1gHhp); (386 - 386) < qxOQ1gHhp; scanf ("%ld", &qxOQ1gHhp)) {
        long  pNP673;
        long  n1CqGVW4K;
        long  V8proViFbdI7;
        MoeS5RD (t7UaAH6l);
        long  tQOX3eIW2;
        MoeS5RD (G90QmoFYeL7u);
        for (fLEWkr09pzO = (475 - 474); qxOQ1gHhp >= fLEWkr09pzO; fLEWkr09pzO = fLEWkr09pzO + (527 - 526)) {
            scanf ("%ld", t7UaAH6l + fLEWkr09pzO);
        }
        pNP673 = (805 - 804);
        bFgaT2 = (990 - 990);
        V8proViFbdI7 = (347 - 346);
        for (fLEWkr09pzO = (133 - 132); qxOQ1gHhp >= fLEWkr09pzO; fLEWkr09pzO = fLEWkr09pzO + (540 - 539)) {
            scanf ("%ld", G90QmoFYeL7u +fLEWkr09pzO);
        }
        tQOX3eIW2 = qxOQ1gHhp;
        n1CqGVW4K = qxOQ1gHhp;
        for (; V8proViFbdI7 <= tQOX3eIW2;) {
            for (; (t7UaAH6l[V8proViFbdI7] > G90QmoFYeL7u[pNP673]) && (V8proViFbdI7 <= tQOX3eIW2);) {
                V8proViFbdI7 = V8proViFbdI7 +(646 - 645);
                pNP673 = pNP673 + (272 - 271);
                bFgaT2 += (212 - 12);
            }
            for (; (t7UaAH6l[tQOX3eIW2] > G90QmoFYeL7u[n1CqGVW4K]) && (V8proViFbdI7 <= tQOX3eIW2);) {
                tQOX3eIW2--;
                n1CqGVW4K = n1CqGVW4K - (865 - 864);
                bFgaT2 += (883 - 683);
            }
            if (V8proViFbdI7 <= tQOX3eIW2) {
                if (t7UaAH6l[V8proViFbdI7] < G90QmoFYeL7u[n1CqGVW4K])
                    bFgaT2 -= 200;
                n1CqGVW4K = n1CqGVW4K - 1;
                V8proViFbdI7 = V8proViFbdI7 +1;
            }
        }
        printf ("%ld\n", bFgaT2);
    }
}

