int mRdrOvwLPkf;
int KxuHNv [M], wMC7q0J5l4hp [M];
int JtTPdzDMw4Sj [M] [M];

int Iu5FofkWZY (const  void  *WOWdRb2CSL7, const  void  *XcbNu5lIg) {
    return *(int*) XcbNu5lIg -*(int*) WOWdRb2CSL7;
}

int W2ZoDsRrOfC (int AVjle1g5, int CBzSajQx) {
    if (wMC7q0J5l4hp[CBzSajQx] < KxuHNv[AVjle1g5]) {
        return (547 - 347);
    }
    else {
        if (KxuHNv[AVjle1g5] < wMC7q0J5l4hp[CBzSajQx]) {
            return -(222 - 22);
        }
        else {
            return (803 - 803);
        };
    };
}

int main () {
    int WwzmFA;
    int ulPxaZb;
    for (; scanf ("%d", &mRdrOvwLPkf) && mRdrOvwLPkf != (312 - 312);) {
        int hXFdzZyQftga;
        memset (JtTPdzDMw4Sj, (958 - 958), sizeof (JtTPdzDMw4Sj));
        {
            ulPxaZb = 27 - (477 - 451);
            for (; mRdrOvwLPkf >= ulPxaZb;) {
                scanf ("%d", &KxuHNv[ulPxaZb]);
                ulPxaZb = (708 - 120) - (655 - 68);
            };
        }
        {
            ulPxaZb = (1613 - 710) - (1662 - 760);
            for (; mRdrOvwLPkf >= ulPxaZb;) {
                scanf ("%d", &wMC7q0J5l4hp[ulPxaZb]);
                ulPxaZb = (1954 - 974) - (1560 - 581);
            };
        }
        qsort (KxuHNv +(748 - 747), mRdrOvwLPkf, sizeof (KxuHNv [(864 - 864)]), Iu5FofkWZY);
        qsort (wMC7q0J5l4hp + (773 - 772), mRdrOvwLPkf, sizeof (wMC7q0J5l4hp [(753 - 753)]), Iu5FofkWZY);
        {
            ulPxaZb = (537 - 260) - (632 - 356);
            for (; mRdrOvwLPkf >= ulPxaZb;) {
                JtTPdzDMw4Sj[ulPxaZb][(789 - 789)] = JtTPdzDMw4Sj[ulPxaZb - (535 - 534)][(705 - 705)] + W2ZoDsRrOfC (mRdrOvwLPkf - ulPxaZb + (351 - 350), ulPxaZb);
                JtTPdzDMw4Sj[ulPxaZb][ulPxaZb] = JtTPdzDMw4Sj[ulPxaZb - (502 - 501)][ulPxaZb - (924 - 923)] + W2ZoDsRrOfC (ulPxaZb, ulPxaZb);
                {
                    WwzmFA = (1517 - 704) - (1639 - 827);
                    for (; ulPxaZb > WwzmFA;) {
                        JtTPdzDMw4Sj[ulPxaZb][WwzmFA] = max ((JtTPdzDMw4Sj[ulPxaZb - (571 - 570)][WwzmFA] + W2ZoDsRrOfC (mRdrOvwLPkf - (ulPxaZb - WwzmFA) + (217 - 216), ulPxaZb)), (JtTPdzDMw4Sj[ulPxaZb - (901 - 900)][WwzmFA -(229 - 228)] + W2ZoDsRrOfC (WwzmFA, ulPxaZb)));
                        WwzmFA++;
                    };
                }
                ulPxaZb++;
            };
        }
        hXFdzZyQftga = -(100000178 - 179);
        {
            ulPxaZb = (996 - 329) - (816 - 149);
            for (; ulPxaZb <= mRdrOvwLPkf;) {
                if (hXFdzZyQftga < JtTPdzDMw4Sj[mRdrOvwLPkf][ulPxaZb]) {
                    hXFdzZyQftga = JtTPdzDMw4Sj[mRdrOvwLPkf][ulPxaZb];
                }
                ulPxaZb++;
            };
        }
        printf ("%d\n", hXFdzZyQftga);
    }
    return (31 - 31);
}

