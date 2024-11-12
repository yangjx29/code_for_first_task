const  int oyQkdANXTvC = (1276 - 271);
int esNmidfeTx [oyQkdANXTvC], CQ0fSAq7W [oyQkdANXTvC];

int main () {
    int UNjbyITPx, pY7sbt9x, UZl38b, W7JUrfenE, mATgwq7u1O6, N90spf, JONVg9, g62xehupVoC;
    for (; ~scanf ("%d", &UNjbyITPx) && UNjbyITPx;) {
        {
            pY7sbt9x = (783 - 783);
            for (; pY7sbt9x < UNjbyITPx;) {
                scanf ("%d", &esNmidfeTx[pY7sbt9x]);
                pY7sbt9x++;
            }
        }
        {
            pY7sbt9x = (313 - 313);
            while (UNjbyITPx > pY7sbt9x) {
                scanf ("%d", &CQ0fSAq7W[pY7sbt9x]);
                pY7sbt9x++;
            }
        }
        sort (esNmidfeTx, esNmidfeTx + UNjbyITPx);
        sort (CQ0fSAq7W, CQ0fSAq7W +UNjbyITPx);
        W7JUrfenE = mATgwq7u1O6 = UNjbyITPx -(148 - 147);
        g62xehupVoC = (227 - 227);
        N90spf = JONVg9 = (707 - 707);
        UZl38b = (995 - 995);
        for (; UNjbyITPx > (g62xehupVoC++);) {
            if (esNmidfeTx[W7JUrfenE] > CQ0fSAq7W[mATgwq7u1O6]) {
                W7JUrfenE--;
                mATgwq7u1O6--;
                UZl38b += (732 - 532);
            }
            else if (CQ0fSAq7W[mATgwq7u1O6] > esNmidfeTx[W7JUrfenE]) {
                N90spf++;
                UZl38b -= (893 - 693);
                mATgwq7u1O6--;
            }
            else {
                if (esNmidfeTx[N90spf] > CQ0fSAq7W[JONVg9]) {
                    UZl38b += (259 - 59);
                    N90spf++;
                    JONVg9++;
                }
                else {
                    if (esNmidfeTx[N90spf] < CQ0fSAq7W[mATgwq7u1O6])
                        UZl38b -= (877 - 677);
                    mATgwq7u1O6--;
                    N90spf++;
                }
            }
        }
        printf ("%d\n", UZl38b);
    }
    return (128 - 128);
}

