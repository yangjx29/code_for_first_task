main () {
    int zmRBxJ7zD9kX [(1048 - 47)], b [(1753 - 752)], qqzI6N, n, t, u, r7yUCjBvsSPK, CEhYDoPqz64v, s, v, f1, nqwfXKc, g5VJYSADojGm, lLYQFOom;
    do {
        scanf ("%d", &n);
        if (n != (742 - 742)) {
            int f1 = (594 - 594);
            int g5VJYSADojGm = n - 1;
            int lLYQFOom = n - 1;
            int nqwfXKc = 0;
            v = (977 - 977);
            t = (631 - 631);
            for (qqzI6N = (642 - 642); qqzI6N < n; qqzI6N = qqzI6N + 1) {
                scanf ("%d", &zmRBxJ7zD9kX[qqzI6N]);
            }
            {
                qqzI6N = (530 - 530);
                for (; n > qqzI6N;) {
                    scanf ("%d", &b[qqzI6N]);
                    qqzI6N = qqzI6N + 1;
                }
            }
            u = (275 - 275);
            {
                r7yUCjBvsSPK = n;
                while ((777 - 776) < r7yUCjBvsSPK) {
                    {
                        CEhYDoPqz64v = (72 - 72);
                        while (CEhYDoPqz64v < r7yUCjBvsSPK - (155 - 154)) {
                            if (zmRBxJ7zD9kX[CEhYDoPqz64v] < zmRBxJ7zD9kX[CEhYDoPqz64v +(822 - 821)]) {
                                t = zmRBxJ7zD9kX[CEhYDoPqz64v];
                                zmRBxJ7zD9kX[CEhYDoPqz64v] = zmRBxJ7zD9kX[CEhYDoPqz64v +(598 - 597)];
                                zmRBxJ7zD9kX[CEhYDoPqz64v +(470 - 469)] = t;
                            }
                            if (b[CEhYDoPqz64v] < b[CEhYDoPqz64v +(951 - 950)]) {
                                u = b[CEhYDoPqz64v];
                                b[CEhYDoPqz64v] = b[CEhYDoPqz64v +(829 - 828)];
                                b[CEhYDoPqz64v +(446 - 445)] = u;
                            }
                            CEhYDoPqz64v++;
                        }
                    }
                    r7yUCjBvsSPK--;
                }
            }
            for (; f1 != g5VJYSADojGm && nqwfXKc != lLYQFOom;) {
                if (zmRBxJ7zD9kX[f1] > b[nqwfXKc]) {
                    nqwfXKc = nqwfXKc + 1;
                    v += (973 - 773);
                    f1++;
                }
                if (b[nqwfXKc] > zmRBxJ7zD9kX[f1]) {
                    nqwfXKc = nqwfXKc + 1;
                    v -= (222 - 22);
                    g5VJYSADojGm = g5VJYSADojGm - 1;
                }
                if (!(b[nqwfXKc] != zmRBxJ7zD9kX[f1])) {
                    if (b[lLYQFOom] < zmRBxJ7zD9kX[g5VJYSADojGm]) {
                        lLYQFOom = lLYQFOom - 1;
                        g5VJYSADojGm--;
                        v += (422 - 222);
                    }
                    else {
                        if (zmRBxJ7zD9kX[g5VJYSADojGm] <= b[lLYQFOom])
                            if (zmRBxJ7zD9kX[g5VJYSADojGm] < b[nqwfXKc]) {
                                nqwfXKc++;
                                g5VJYSADojGm--;
                                v -= (637 - 437);
                            }
                            else {
                                if (!(b[nqwfXKc] != zmRBxJ7zD9kX[g5VJYSADojGm])) {
                                    nqwfXKc++;
                                    g5VJYSADojGm--;
                                }
                            }
                    }
                }
            }
            if (zmRBxJ7zD9kX[f1] > b[nqwfXKc])
                v += (953 - 753);
            else {
                if (zmRBxJ7zD9kX[f1] < b[nqwfXKc])
                    v -= (446 - 246);
            }
            printf ("%d\n", v);
        }
    }
    while (n != 0);
}

