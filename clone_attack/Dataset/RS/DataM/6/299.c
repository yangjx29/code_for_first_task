int main () {
    int QbWeTrqfUzw;
    int xeiAEI6u0ylD;
    int uqLcW7HAmS;
    int ik7mA3jsyY;
    int zRNgYO;
    int aF2bCJTqLRxP;
    int iuwMpeDvQd2;
    int p7Uonp3EC;
    int pfKHdk0WCm;
    int z5DV7YmJEX [100] [100];
    int ncDnp3dr9 [100];
    int aSxmpH0kA;
    scanf ("%d", &uqLcW7HAmS);
    for (QbWeTrqfUzw = 0; QbWeTrqfUzw < uqLcW7HAmS; QbWeTrqfUzw++) {
        scanf ("%d%d", &iuwMpeDvQd2, &pfKHdk0WCm);
        {
            zRNgYO = 0;
            while (iuwMpeDvQd2 > zRNgYO) {
                {
                    p7Uonp3EC = 0;
                    while (pfKHdk0WCm > p7Uonp3EC) {
                        scanf ("%d", &z5DV7YmJEX[zRNgYO][p7Uonp3EC]);
                        p7Uonp3EC++;
                    };
                }
                zRNgYO = zRNgYO + 1;
            };
        }
        aSxmpH0kA = 0;
        {
            aF2bCJTqLRxP = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (aF2bCJTqLRxP < pfKHdk0WCm) {
                aSxmpH0kA = aSxmpH0kA + z5DV7YmJEX[0][aF2bCJTqLRxP] + z5DV7YmJEX[iuwMpeDvQd2 - 1][aF2bCJTqLRxP];
                aF2bCJTqLRxP = aF2bCJTqLRxP + 1;
            };
        }
        {
            ik7mA3jsyY = 0;
            while (iuwMpeDvQd2 > ik7mA3jsyY) {
                aSxmpH0kA = aSxmpH0kA + z5DV7YmJEX[ik7mA3jsyY][0] + z5DV7YmJEX[ik7mA3jsyY][pfKHdk0WCm - 1];
                ik7mA3jsyY = ik7mA3jsyY + 1;
            };
        }
        aSxmpH0kA = aSxmpH0kA - z5DV7YmJEX[0][0] - z5DV7YmJEX[0][pfKHdk0WCm - 1] - z5DV7YmJEX[iuwMpeDvQd2 - 1][0] - z5DV7YmJEX[iuwMpeDvQd2 - 1][pfKHdk0WCm - 1];
        ncDnp3dr9[QbWeTrqfUzw] = aSxmpH0kA;
    }
    for (xeiAEI6u0ylD = 0; uqLcW7HAmS > xeiAEI6u0ylD; xeiAEI6u0ylD = xeiAEI6u0ylD + 1) {
        printf ("%d\n", ncDnp3dr9[xeiAEI6u0ylD]);
    }
    return 0;
}

