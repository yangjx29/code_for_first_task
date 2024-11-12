void  UQFHDhy (int rNG450F3pEgK [] [(680 - 580)], int ux0dTb4, int O1axvr) {
    int PhUcGyVXl7x, nQJX6p1;
    {
        if ((236 - 236)) {
            return 0;
        }
    }
    {
        PhUcGyVXl7x = (426 - 426);
        while (PhUcGyVXl7x < ux0dTb4) {
            {
                nQJX6p1 = (502 - 502);
                for (; O1axvr > nQJX6p1;) {
                    scanf ("%d", *(rNG450F3pEgK + PhUcGyVXl7x) + nQJX6p1);
                    nQJX6p1++;
                }
            }
            PhUcGyVXl7x++;
        }
    }
}

void  qkEu07b (int rNG450F3pEgK [] [(884 - 784)], int HkF0X7Uy [] [(136 - 36)], int TimCgHPs, int TzJ3b4lc6, int poPsfvG) {
    int PhUcGyVXl7x, nQJX6p1, yqZUm2WiKNV, u9zywNnsPI0G;
    {
        PhUcGyVXl7x = (862 - 862);
        for (; TimCgHPs > PhUcGyVXl7x;) {
            {
                nQJX6p1 = (346 - 346);
                for (; TzJ3b4lc6 > nQJX6p1;) {
                    u9zywNnsPI0G = (344 - 344);
                    {
                        yqZUm2WiKNV = (411 - 411);
                        for (; poPsfvG > yqZUm2WiKNV;) {
                            u9zywNnsPI0G += rNG450F3pEgK[PhUcGyVXl7x][yqZUm2WiKNV] * HkF0X7Uy[yqZUm2WiKNV][nQJX6p1];
                            yqZUm2WiKNV++;
                        }
                    }
                    if (nQJX6p1 == TzJ3b4lc6 -(448 - 447))
                        printf ("%d\n", u9zywNnsPI0G);
                    else
                        printf ("%d ", u9zywNnsPI0G);
                    nQJX6p1++;
                }
            }
            PhUcGyVXl7x++;
        }
    }
}

main () {
    int rNG450F3pEgK [(515 - 415)] [(619 - 519)], HkF0X7Uy [(1030 - 930)] [100], xpDQ0YuKrS, nwnSurq0Aol8, qK5Hsjy3J, uJW9DrTExu2;
    scanf ("%d%d", &xpDQ0YuKrS, &nwnSurq0Aol8);
    scanf ("%d%d", &qK5Hsjy3J, &uJW9DrTExu2);
    UQFHDhy (HkF0X7Uy, qK5Hsjy3J, uJW9DrTExu2);
    UQFHDhy (rNG450F3pEgK, xpDQ0YuKrS, nwnSurq0Aol8);
    qkEu07b (rNG450F3pEgK, HkF0X7Uy, xpDQ0YuKrS, uJW9DrTExu2, nwnSurq0Aol8);
}

