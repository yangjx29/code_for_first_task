int main () {
    int WBOKIsS, n, oMgqx31, j, ugtRfSXke, q, LgznUS, rew6f5dsMr, HDp3eFG7 [(395 - 387)] [(349 - 341)], t;
    scanf ("%d,%d", &WBOKIsS, &n);
    {
        oMgqx31 = 286 - 286;
        while (WBOKIsS > oMgqx31) {
            {
                j = 375 - 375;
                while (n > j) {
                    scanf ("%d", &t);
                    HDp3eFG7[oMgqx31][j] = t;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            oMgqx31 = oMgqx31 + 1;
        };
    }
    {
        oMgqx31 = 868 - 868;
        while (oMgqx31 < WBOKIsS) {
            ugtRfSXke = oMgqx31;
            q = (73 - 73);
            {
                j = 896 - 895;
                while (n > j) {
                    if (HDp3eFG7[oMgqx31][j] > HDp3eFG7[ugtRfSXke][q])
                        q = j;
                    j = j + 1;
                };
            }
            LgznUS = (899 - 899);
            {
                rew6f5dsMr = 0;
                while (WBOKIsS > rew6f5dsMr) {
                    if (HDp3eFG7[rew6f5dsMr][q] >= HDp3eFG7[ugtRfSXke][q])
                        LgznUS = LgznUS +1;
                    rew6f5dsMr = rew6f5dsMr + 1;
                };
            }
            if (LgznUS == WBOKIsS)
                break;
            oMgqx31 = oMgqx31 + 1;
        };
    }
    if (LgznUS == WBOKIsS)
        printf ("%d+%d", ugtRfSXke, q);
    else
        printf ("No");
    return 0;
}

