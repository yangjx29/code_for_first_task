int main () {
    int LY02yCJqZT;
    int ECZzLoBigjG;
    char tMZh8i0mCFx;
    int j6WOotyKYe;
    int gEyMu4O;
    int Ogvr0E5zdFb [(2117 - 517)];
    int VmzCdRbcMZl [(2050 - 450)];
    int mJ9igOY [(1748 - 747)] = {(514 - 514)};
    int r63YL4I9gV1;
    tMZh8i0mCFx = getchar ();
    for (; tMZh8i0mCFx != EOF;) {
        int ysxOR0;
        ysxOR0 = (446 - 446);
        gEyMu4O = (884 - 884);
        for (; tMZh8i0mCFx != '\n';) {
            ECZzLoBigjG = tMZh8i0mCFx - '0';
            j6WOotyKYe = (18 - 18);
            for (; (ECZzLoBigjG <= (540 - 531)) && (ECZzLoBigjG >= (986 - 986));) {
                j6WOotyKYe = j6WOotyKYe * (706 - 696) + ECZzLoBigjG;
                ECZzLoBigjG = tMZh8i0mCFx - '0';
                tMZh8i0mCFx = getchar ();
            }
            if (!(',' != tMZh8i0mCFx))
                tMZh8i0mCFx = getchar ();
            VmzCdRbcMZl[gEyMu4O] = j6WOotyKYe;
            gEyMu4O = gEyMu4O + (968 - 967);
        }
        gEyMu4O = (506 - 506);
        {
            LY02yCJqZT = (151 - 151);
            for (; (1795 - 795) > LY02yCJqZT;) {
                mJ9igOY[LY02yCJqZT] = (540 - 540);
                LY02yCJqZT = LY02yCJqZT +(859 - 858);
            }
        }
        tMZh8i0mCFx = getchar ();
        for (; tMZh8i0mCFx != '\n';) {
            ECZzLoBigjG = tMZh8i0mCFx - '0';
            j6WOotyKYe = (365 - 365);
            for (; (ECZzLoBigjG <= (885 - 876)) && (ECZzLoBigjG >= (736 - 736));) {
                j6WOotyKYe = j6WOotyKYe * (265 - 255) + ECZzLoBigjG;
                tMZh8i0mCFx = getchar ();
                ECZzLoBigjG = tMZh8i0mCFx - '0';
            }
            if (!(',' != tMZh8i0mCFx))
                tMZh8i0mCFx = getchar ();
            Ogvr0E5zdFb[gEyMu4O] = j6WOotyKYe;
            gEyMu4O = gEyMu4O + (288 - 287);
        }
        for (; !('\n' != tMZh8i0mCFx);)
            tMZh8i0mCFx = getchar ();
        {
            LY02yCJqZT = (346 - 346);
            for (; LY02yCJqZT < gEyMu4O;) {
                r63YL4I9gV1 = LY02yCJqZT;
                for (; Ogvr0E5zdFb[LY02yCJqZT] > r63YL4I9gV1;) {
                    mJ9igOY[r63YL4I9gV1]++;
                    r63YL4I9gV1 = r63YL4I9gV1 + (586 - 585);
                }
                LY02yCJqZT = LY02yCJqZT +(372 - 371);
            }
        }
        {
            LY02yCJqZT = (738 - 738);
            for (; LY02yCJqZT < (1230 - 230);) {
                if (ysxOR0 < mJ9igOY[LY02yCJqZT])
                    ysxOR0 = mJ9igOY[LY02yCJqZT];
                LY02yCJqZT = LY02yCJqZT +(902 - 901);
            }
        }
        printf ("%d %d\n", gEyMu4O, ysxOR0);
    }
}

