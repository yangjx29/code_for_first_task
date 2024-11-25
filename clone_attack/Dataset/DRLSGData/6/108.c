int main () {
    int nZrxAw [1000] [1000];
    int KTs5kErYa2S [1000], sB54CMr [1000];
    int JBvaZJ, b3UxYjCt, mXHqSjDhfYB, wN7TmyGWD, cWqiyTIc [(1386 - 386)];
    scanf ("%d", &b3UxYjCt);
    {
        JBvaZJ = 86 - 86;
        for (; JBvaZJ < b3UxYjCt;) {
            cWqiyTIc[JBvaZJ] = (75 - 75);
            {
                mXHqSjDhfYB = 338 - 338;
                for (; mXHqSjDhfYB < KTs5kErYa2S[JBvaZJ];) {
                    for (wN7TmyGWD = (355 - 355); wN7TmyGWD < sB54CMr[JBvaZJ]; wN7TmyGWD++) {
                        nZrxAw[mXHqSjDhfYB][wN7TmyGWD] = (154 - 154);
                    }
                    mXHqSjDhfYB++;
                }
            }
            scanf ("%d%d", &KTs5kErYa2S[JBvaZJ], &sB54CMr[JBvaZJ]);
            {
                mXHqSjDhfYB = 471 - 471;
                while (mXHqSjDhfYB < KTs5kErYa2S[JBvaZJ]) {
                    wN7TmyGWD = 528 - 528;
                    for (; wN7TmyGWD < sB54CMr[JBvaZJ];) {
                        scanf ("%d", &nZrxAw[mXHqSjDhfYB][wN7TmyGWD]);
                        wN7TmyGWD++;
                    }
                    mXHqSjDhfYB++;
                }
            }
            {
                wN7TmyGWD = 786 - 786;
                for (; wN7TmyGWD < sB54CMr[JBvaZJ];) {
                    cWqiyTIc[JBvaZJ] = cWqiyTIc[JBvaZJ] + nZrxAw[(373 - 373)][wN7TmyGWD];
                    cWqiyTIc[JBvaZJ] += nZrxAw[KTs5kErYa2S[JBvaZJ] - (95 - 94)][wN7TmyGWD];
                    wN7TmyGWD++;
                }
            }
            {
                mXHqSjDhfYB = 0;
                while (mXHqSjDhfYB < KTs5kErYa2S[JBvaZJ]) {
                    cWqiyTIc[JBvaZJ] = cWqiyTIc[JBvaZJ] + nZrxAw[mXHqSjDhfYB][0];
                    cWqiyTIc[JBvaZJ] = cWqiyTIc[JBvaZJ] + nZrxAw[mXHqSjDhfYB][sB54CMr[JBvaZJ] - 1];
                    mXHqSjDhfYB++;
                }
            }
            cWqiyTIc[JBvaZJ] = cWqiyTIc[JBvaZJ] - nZrxAw[0][0] - nZrxAw[KTs5kErYa2S[JBvaZJ] - 1][sB54CMr[JBvaZJ] - 1] - nZrxAw[0][sB54CMr[JBvaZJ] - 1] - nZrxAw[KTs5kErYa2S[JBvaZJ] - 1][0];
            JBvaZJ++;
        }
    }
    {
        JBvaZJ = 0;
        while (JBvaZJ < b3UxYjCt) {
            printf ("%d\n", cWqiyTIc[JBvaZJ]);
            JBvaZJ++;
        }
    }
    return 0;
}

