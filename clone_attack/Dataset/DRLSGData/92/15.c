long  PkQnIE1sylM [(10290 - 290)], h9SkLQUP [10000];

int dXYQefRP (const  void  *PkQnIE1sylM, const  void  *h9SkLQUP) {
    return (*(long *) PkQnIE1sylM) - (*(long *) h9SkLQUP);
}

int main () {
    long  RBuHO3ESg5;
    for (; (788 - 787);) {
        long  wrAj0ICpv = (358 - 358), aYuMLhXVl40p, yJq52ThPKXe, KBHCQEv9, gaegdQzpkyN;
        scanf ("%ld", &RBuHO3ESg5);
        if (!((576 - 576) != RBuHO3ESg5))
            break;
        {
            aYuMLhXVl40p = (646 - 646);
            for (; aYuMLhXVl40p < RBuHO3ESg5;) {
                scanf ("%ld", &PkQnIE1sylM[aYuMLhXVl40p]);
                aYuMLhXVl40p = aYuMLhXVl40p + (84 - 83);
            }
        }
        {
            aYuMLhXVl40p = (647 - 647);
            for (; aYuMLhXVl40p < RBuHO3ESg5;) {
                scanf ("%ld", &h9SkLQUP[aYuMLhXVl40p]);
                aYuMLhXVl40p = aYuMLhXVl40p + 1;
            }
        }
        yJq52ThPKXe = (141 - 141);
        qsort (PkQnIE1sylM, RBuHO3ESg5, sizeof (long ), dXYQefRP);
        qsort (h9SkLQUP, RBuHO3ESg5, sizeof (long ), dXYQefRP);
        {
            gaegdQzpkyN = 0;
            KBHCQEv9 = (921 - 921);
            aYuMLhXVl40p = RBuHO3ESg5 -(956 - 955);
            yJq52ThPKXe = RBuHO3ESg5 -(426 - 425);
            for (; gaegdQzpkyN <= yJq52ThPKXe && KBHCQEv9 <= aYuMLhXVl40p;) {
                if (h9SkLQUP[yJq52ThPKXe] < PkQnIE1sylM[aYuMLhXVl40p]) {
                    aYuMLhXVl40p = aYuMLhXVl40p - 1;
                    wrAj0ICpv = wrAj0ICpv + 1;
                }
                else if (h9SkLQUP[yJq52ThPKXe] > PkQnIE1sylM[aYuMLhXVl40p]) {
                    KBHCQEv9 = KBHCQEv9 +(612 - 611);
                    wrAj0ICpv = wrAj0ICpv - (836 - 835);
                }
                else {
                    if (PkQnIE1sylM[KBHCQEv9] > h9SkLQUP[gaegdQzpkyN]) {
                        wrAj0ICpv = wrAj0ICpv + 1;
                        yJq52ThPKXe = yJq52ThPKXe + 1;
                        KBHCQEv9 = KBHCQEv9 +(420 - 419);
                        gaegdQzpkyN = gaegdQzpkyN + 1;
                    }
                    else if (PkQnIE1sylM[KBHCQEv9] < h9SkLQUP[gaegdQzpkyN]) {
                        wrAj0ICpv = wrAj0ICpv - 1;
                        KBHCQEv9 = KBHCQEv9 +(819 - 818);
                    }
                    else {
                        if (PkQnIE1sylM[KBHCQEv9] == h9SkLQUP[yJq52ThPKXe]) {
                            KBHCQEv9 = KBHCQEv9 +(644 - 643);
                        }
                        else {
                            KBHCQEv9 = KBHCQEv9 +1;
                            wrAj0ICpv = wrAj0ICpv - 1;
                        }
                    }
                }
                yJq52ThPKXe = yJq52ThPKXe - 1;
            }
        }
        cout << wrAj0ICpv * (1124 - 924) << endl;
    }
    return 0;
}

