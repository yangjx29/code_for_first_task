int main () {
    int qz2mVOY;
    int cDtUxybpSwh;
    int NYNEiAvWd;
    int wpc2bDOu;
    int G5af09lNdt;
    qz2mVOY = (92 - 92);
    char U2LnYl4BJ [11] [101] = {{'\0'}};
    char s0 [101];
    while (qz2mVOY <= (286 - 276)) {
        scanf ("%s", U2LnYl4BJ[qz2mVOY]);
        strcpy (s0, U2LnYl4BJ[qz2mVOY]);
        wpc2bDOu = strlen (U2LnYl4BJ[qz2mVOY]);
        {
            cDtUxybpSwh = 180 - 179;
            while (cDtUxybpSwh >= 0) {
                G5af09lNdt = 0;
                if (!('(' != U2LnYl4BJ[qz2mVOY][cDtUxybpSwh])) {
                    {
                        NYNEiAvWd = cDtUxybpSwh;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        while (NYNEiAvWd <= wpc2bDOu - 1) {
                            if (U2LnYl4BJ[qz2mVOY][NYNEiAvWd] == ')') {
                                G5af09lNdt = 1;
                                U2LnYl4BJ[qz2mVOY][NYNEiAvWd] = ' ';
                                U2LnYl4BJ[qz2mVOY][cDtUxybpSwh] = ' ';
                                break;
                            }
                            NYNEiAvWd = NYNEiAvWd +1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (G5af09lNdt == 0)
                        U2LnYl4BJ[qz2mVOY][cDtUxybpSwh] = '$';
                }
                else {
                    if (U2LnYl4BJ[qz2mVOY][cDtUxybpSwh] != ')')
                        U2LnYl4BJ[qz2mVOY][cDtUxybpSwh] = ' ';
                }
                cDtUxybpSwh--;
            };
        }
        {
            cDtUxybpSwh = 0;
            while (cDtUxybpSwh <= wpc2bDOu - 1) {
                if (U2LnYl4BJ[qz2mVOY][cDtUxybpSwh] == ')')
                    U2LnYl4BJ[qz2mVOY][cDtUxybpSwh] = '?';
                cDtUxybpSwh = cDtUxybpSwh + 1;
            };
        }
        {
            cDtUxybpSwh = 0;
            while (cDtUxybpSwh <= wpc2bDOu - 1) {
                printf ("%c", s0[cDtUxybpSwh]);
                cDtUxybpSwh++;
            };
        }
        {
            cDtUxybpSwh = 0;
            while (cDtUxybpSwh <= wpc2bDOu - 1) {
                printf ("%c", U2LnYl4BJ[qz2mVOY][cDtUxybpSwh]);
                cDtUxybpSwh++;
            };
        }
        qz2mVOY = qz2mVOY + 1;
    };
}

