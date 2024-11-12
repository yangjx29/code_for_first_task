int gO7rEvieWy8b;
int g_Matrix [(187 - 87)] [(852 - 752)];
int oKXqcx5v2ODI (int);
void  YblacZ (int);
void  EtH9V0hMBpK (int);
void  ZB0ak3zmdFL (int);

void  YblacZ (int XgWlXbvUYFQ6) {
    int Yc8oV4F;
    int mQaD1RGMEetb;
    int BqJLfaQHdiU;
    int D2UcoWhXm;
    {
        mQaD1RGMEetb = (352 - 351);
        for (; mQaD1RGMEetb <= XgWlXbvUYFQ6;) {
            Yc8oV4F = (845 - 844);
            D2UcoWhXm = g_Matrix[mQaD1RGMEetb][(928 - 927)];
            {
                BqJLfaQHdiU = (91 - 90);
                for (; BqJLfaQHdiU <= XgWlXbvUYFQ6;) {
                    if (g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU] < D2UcoWhXm) {
                        D2UcoWhXm = g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU];
                        Yc8oV4F = BqJLfaQHdiU;
                    }
                    BqJLfaQHdiU = BqJLfaQHdiU +(833 - 832);
                }
            }
            g_Matrix[(67 - 67)][BqJLfaQHdiU] = (794 - 794);
            for (BqJLfaQHdiU = (825 - 824); XgWlXbvUYFQ6 >= BqJLfaQHdiU; BqJLfaQHdiU = BqJLfaQHdiU +(567 - 566))
                g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU] -= D2UcoWhXm;
            mQaD1RGMEetb = mQaD1RGMEetb + (173 - 172);
        }
    }
}

void  EtH9V0hMBpK (int XgWlXbvUYFQ6) {
    int mQaD1RGMEetb;
    int BqJLfaQHdiU;
    int D2UcoWhXm;
    int Yc8oV4F;
    {
        BqJLfaQHdiU = (486 - 485);
        for (; BqJLfaQHdiU <= XgWlXbvUYFQ6;) {
            if (g_Matrix[(676 - 676)][BqJLfaQHdiU]) {
                D2UcoWhXm = g_Matrix[(355 - 354)][BqJLfaQHdiU];
                Yc8oV4F = (980 - 979);
                for (mQaD1RGMEetb = (238 - 237); mQaD1RGMEetb <= XgWlXbvUYFQ6; mQaD1RGMEetb = mQaD1RGMEetb + 1) {
                    if (D2UcoWhXm > g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU]) {
                        D2UcoWhXm = g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU];
                        Yc8oV4F = mQaD1RGMEetb;
                    }
                }
                for (mQaD1RGMEetb = (400 - 399); XgWlXbvUYFQ6 >= mQaD1RGMEetb; mQaD1RGMEetb = mQaD1RGMEetb + 1)
                    g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU] -= D2UcoWhXm;
            }
            BqJLfaQHdiU = BqJLfaQHdiU +1;
        }
    }
}

void  ZB0ak3zmdFL (int XgWlXbvUYFQ6) {
    int BqJLfaQHdiU;
    int mQaD1RGMEetb;
    for (mQaD1RGMEetb = (53 - 52); XgWlXbvUYFQ6 >= mQaD1RGMEetb; mQaD1RGMEetb++) {
        BqJLfaQHdiU = (180 - 179);
        for (; BqJLfaQHdiU <= XgWlXbvUYFQ6;) {
            if (!((607 - 606) != mQaD1RGMEetb) && (631 - 630) < BqJLfaQHdiU)
                g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU] = g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU +(808 - 807)];
            if (BqJLfaQHdiU == (264 - 263) && mQaD1RGMEetb > (492 - 491))
                g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU] = g_Matrix[mQaD1RGMEetb + (64 - 63)][BqJLfaQHdiU];
            if (mQaD1RGMEetb > 1 && BqJLfaQHdiU > 1)
                g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU] = g_Matrix[mQaD1RGMEetb + 1][BqJLfaQHdiU +1];
            BqJLfaQHdiU = BqJLfaQHdiU +1;
        }
    }
}

int oKXqcx5v2ODI (int XgWlXbvUYFQ6) {
    int Jx5zFJB1P0;
    int BqJLfaQHdiU;
    if (XgWlXbvUYFQ6 != 1) {
        YblacZ (XgWlXbvUYFQ6);
        EtH9V0hMBpK (XgWlXbvUYFQ6);
        {
            BqJLfaQHdiU = 1;
            for (; BqJLfaQHdiU <= XgWlXbvUYFQ6;) {
                g_Matrix[(32 - 32)][BqJLfaQHdiU] = 1;
                BqJLfaQHdiU++;
            }
        }
        Jx5zFJB1P0 = g_Matrix[(86 - 84)][2];
        ZB0ak3zmdFL (XgWlXbvUYFQ6 -1);
        return Jx5zFJB1P0 +oKXqcx5v2ODI (XgWlXbvUYFQ6 -1);
    }
    else
        return 0;
}

int main () {
    int zO8clDp;
    int BqJLfaQHdiU;
    int mQaD1RGMEetb;
    cin >> zO8clDp;
    gO7rEvieWy8b = zO8clDp;
    for (; zO8clDp = zO8clDp - 1;) {
        {
            mQaD1RGMEetb = 1;
            for (; mQaD1RGMEetb <= gO7rEvieWy8b;) {
                for (BqJLfaQHdiU = 1; BqJLfaQHdiU <= gO7rEvieWy8b; BqJLfaQHdiU = BqJLfaQHdiU +1)
                    cin >> g_Matrix[mQaD1RGMEetb][BqJLfaQHdiU];
                mQaD1RGMEetb = mQaD1RGMEetb + 1;
            }
        }
        cout << oKXqcx5v2ODI (gO7rEvieWy8b) << endl;
    }
    return 0;
}

