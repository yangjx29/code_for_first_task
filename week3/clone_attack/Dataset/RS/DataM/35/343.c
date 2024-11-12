void  main () {
    int max;
    int dq9s0CfU;
    int SScJyCWM;
    int YNH81oYhy;
    int row;
    int SBKV3qI1NXLH;
    int xsgSY2h70Enl [10] [10];
    int c1;
    int cc5JA3;
    int UOk8FpgJX51;
    int NwPaAk0LRt2;
    max = (547 - 547);
    dq9s0CfU = (789 - 789);
    SScJyCWM = (223 - 223);
    scanf ("%d,%d", &row, &YNH81oYhy);
    {
        SBKV3qI1NXLH = 941 - 941;
        while (row > SBKV3qI1NXLH) {
            {
                NwPaAk0LRt2 = 0;
                while (YNH81oYhy > NwPaAk0LRt2) {
                    scanf ("%d", &xsgSY2h70Enl[SBKV3qI1NXLH][NwPaAk0LRt2]);
                    NwPaAk0LRt2 = NwPaAk0LRt2 +1;
                };
            }
            SBKV3qI1NXLH = SBKV3qI1NXLH +1;
        };
    }
    {
        SBKV3qI1NXLH = 0;
        while (row > SBKV3qI1NXLH) {
            max = -(856 - 855);
            {
                NwPaAk0LRt2 = 0;
                while (NwPaAk0LRt2 < YNH81oYhy) {
                    if (xsgSY2h70Enl[SBKV3qI1NXLH][NwPaAk0LRt2] > max) {
                        cc5JA3 = SBKV3qI1NXLH;
                        c1 = NwPaAk0LRt2;
                        max = xsgSY2h70Enl[SBKV3qI1NXLH][NwPaAk0LRt2];
                    }
                    NwPaAk0LRt2++;
                };
            }
            {
                UOk8FpgJX51 = 0;
                while (row > UOk8FpgJX51) {
                    if (xsgSY2h70Enl[UOk8FpgJX51][c1] < xsgSY2h70Enl[cc5JA3][c1])
                        break;
                    UOk8FpgJX51 = UOk8FpgJX51 +1;
                };
            }
            SBKV3qI1NXLH = SBKV3qI1NXLH +1;
            if (UOk8FpgJX51 == row) {
                printf ("%d+%d\n", cc5JA3, c1);
                SScJyCWM = 1;
            };
        };
    }
    if (SScJyCWM == 0)
        printf ("No\n");
}

