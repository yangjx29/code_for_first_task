main () {
    int PHRmbnJhy9U, jblgADic, y3TqYCO7gA, Wg9kHS3Q;
    scanf ("%d %d", &PHRmbnJhy9U, &jblgADic);
    int YEFh9vXMN [100] [100];
    {
        int N19pTFKrsgM3 = 0;
        for (; PHRmbnJhy9U -1 >= N19pTFKrsgM3;) {
            int N4PEIr = 0;
            for (; N4PEIr <= jblgADic - 1;) {
                scanf ("%d", &YEFh9vXMN[N19pTFKrsgM3][N4PEIr]);
                N4PEIr++;
            }
            N19pTFKrsgM3++;
        }
    }
    int CZ7x0h64 [100] [100];
    scanf ("%d %d", &y3TqYCO7gA, &Wg9kHS3Q);
    int dGSo4j [100] [100] = {0};
    {
        int kPHdXkUmgqD = 0;
        for (; y3TqYCO7gA - 1 >= kPHdXkUmgqD;) {
            {
                int IcWaqG1wpzv8 = 0;
                for (; IcWaqG1wpzv8 <= Wg9kHS3Q -1;) {
                    scanf ("%d", &CZ7x0h64[kPHdXkUmgqD][IcWaqG1wpzv8]);
                    IcWaqG1wpzv8++;
                }
            }
            kPHdXkUmgqD = kPHdXkUmgqD + 1;
        }
    }
    {
        int v9BOeT4rG = 0;
        for (; PHRmbnJhy9U -1 >= v9BOeT4rG;) {
            {
                int Z64tFgyf = 0;
                for (; Z64tFgyf <= Wg9kHS3Q -1;) {
                    {
                        int OLUAOwYlQN = 0;
                        for (; OLUAOwYlQN <= jblgADic - 1;) {
                            dGSo4j[v9BOeT4rG][Z64tFgyf] = dGSo4j[v9BOeT4rG][Z64tFgyf] + YEFh9vXMN[v9BOeT4rG][OLUAOwYlQN] * CZ7x0h64[OLUAOwYlQN][Z64tFgyf];
                            OLUAOwYlQN = OLUAOwYlQN +1;
                        }
                    }
                    Z64tFgyf++;
                }
            }
            v9BOeT4rG = v9BOeT4rG + 1;
        }
    }
    {
        int ICpV861 = 0;
        for (; ICpV861 <= PHRmbnJhy9U -1;) {
            {
                int XnsNr1oTdUyC = 0;
                for (; XnsNr1oTdUyC <= Wg9kHS3Q -1;) {
                    if (XnsNr1oTdUyC == 0)
                        printf ("%d", dGSo4j[ICpV861][XnsNr1oTdUyC]);
                    else
                        printf (" %d", dGSo4j[ICpV861][XnsNr1oTdUyC]);
                    XnsNr1oTdUyC = XnsNr1oTdUyC +1;
                }
            }
            ICpV861++;
        }
    }
}

