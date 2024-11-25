int main () {
    int krzvbP;
    int JnKUj78;
    int yDvMim;
    int hYuIOjq;
    int opodhEW;
    int O2OUZ4aAxBzT;
    int l0Jnp4;
    int F9H7BRFTxwh;
    int UsfWXV4klzUa [1000];
    int f7VZajrbEP65 [1000];
    F9H7BRFTxwh = (457 - 457);
    l0Jnp4 = (805 - 805);
    O2OUZ4aAxBzT = (980 - 980);
    scanf ("%d", &hYuIOjq);
    JnKUj78 = (879 - 879);
    krzvbP = (146 - 146);
    for (; hYuIOjq != (268 - 268);) {
        for (opodhEW = 0; hYuIOjq > opodhEW; opodhEW = opodhEW + (455 - 454))
            scanf ("%d", &UsfWXV4klzUa[opodhEW]);
        krzvbP = (516 - 516), JnKUj78 = (704 - 704), F9H7BRFTxwh = (550 - 550), l0Jnp4 = 0, O2OUZ4aAxBzT = 0;
        for (yDvMim = 0; hYuIOjq > yDvMim; yDvMim = yDvMim + (916 - 915))
            scanf ("%d", &f7VZajrbEP65[yDvMim]);
        for (opodhEW = 0; hYuIOjq - (124 - 122) >= opodhEW; opodhEW = opodhEW + (456 - 455)) {
            for (yDvMim = hYuIOjq - (880 - 879); (933 - 932) <= yDvMim; yDvMim = yDvMim - 1) {
                if (UsfWXV4klzUa[yDvMim] > UsfWXV4klzUa[yDvMim - 1]) {
                    krzvbP = UsfWXV4klzUa[yDvMim];
                    UsfWXV4klzUa[yDvMim] = UsfWXV4klzUa[yDvMim - 1];
                    UsfWXV4klzUa[yDvMim - 1] = krzvbP;
                }
            }
        }
        for (opodhEW = 0; opodhEW <= hYuIOjq - 2; opodhEW = opodhEW + 1) {
            for (yDvMim = hYuIOjq - 1; 1 <= yDvMim; yDvMim = yDvMim - 1) {
                if (f7VZajrbEP65[yDvMim - 1] < f7VZajrbEP65[yDvMim]) {
                    krzvbP = f7VZajrbEP65[yDvMim];
                    f7VZajrbEP65[yDvMim] = f7VZajrbEP65[yDvMim - 1];
                    f7VZajrbEP65[yDvMim - 1] = krzvbP;
                }
            }
        }
        for (opodhEW = 0; hYuIOjq > opodhEW; opodhEW = opodhEW + 1) {
            JnKUj78 = opodhEW;
            for (yDvMim = JnKUj78; yDvMim >= 0; yDvMim--) {
                if (UsfWXV4klzUa[yDvMim] > f7VZajrbEP65[opodhEW]) {
                    f7VZajrbEP65[opodhEW] = 0;
                    UsfWXV4klzUa[yDvMim] = 0;
                    F9H7BRFTxwh = F9H7BRFTxwh +1;
                    break;
                }
            }
        }
        for (opodhEW = 0; opodhEW < hYuIOjq; opodhEW = opodhEW + 1) {
            for (yDvMim = 0; yDvMim < hYuIOjq; yDvMim = yDvMim + 1) {
                if (UsfWXV4klzUa[opodhEW] == f7VZajrbEP65[yDvMim] && UsfWXV4klzUa[opodhEW] != 0) {
                    l0Jnp4 = l0Jnp4 + 1;
                    break;
                }
            }
        }
        O2OUZ4aAxBzT = 200 * (F9H7BRFTxwh -(hYuIOjq - F9H7BRFTxwh -l0Jnp4));
        scanf ("%d", &hYuIOjq);
        printf ("%d\n", O2OUZ4aAxBzT);
    }
    getchar ();
    getchar ();
}

