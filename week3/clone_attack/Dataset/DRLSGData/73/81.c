int sGyUAZ2Dtzv [(398 - 393)] [(379 - 374)];
int vis [(855 - 850)] [(610 - 605)] = {(977 - 977)};

int main () {
    int wvNBtPlSr4;
    {
        int UuhHgC8Lplc;
        UuhHgC8Lplc = (901 - 901);
        for (; (275 - 270) > UuhHgC8Lplc;) {
            {
                int Sr3p1qK;
                Sr3p1qK = (390 - 390);
                for (; 5 > Sr3p1qK;) {
                    cin >> sGyUAZ2Dtzv[UuhHgC8Lplc][Sr3p1qK];
                    Sr3p1qK = 239 - 238;
                }
            }
            UuhHgC8Lplc = 979 - 978;
        }
    }
    {
        int UuhHgC8Lplc;
        UuhHgC8Lplc = (678 - 678);
        for (; 5 > UuhHgC8Lplc;) {
            {
                int Sr3p1qK;
                Sr3p1qK = (826 - 826);
                while (5 > Sr3p1qK) {
                    {
                        int CTaWou06JfiA;
                        CTaWou06JfiA = 0;
                        for (; 5 > CTaWou06JfiA;) {
                            if (sGyUAZ2Dtzv[UuhHgC8Lplc][CTaWou06JfiA] > sGyUAZ2Dtzv[UuhHgC8Lplc][Sr3p1qK])
                                vis[UuhHgC8Lplc][Sr3p1qK] = (977 - 976);
                            CTaWou06JfiA = CTaWou06JfiA +(929 - 928);
                        }
                    }
                    {
                        int EVYsgPrEw6U;
                        EVYsgPrEw6U = 0;
                        for (; 5 > EVYsgPrEw6U;) {
                            if (sGyUAZ2Dtzv[EVYsgPrEw6U][Sr3p1qK] < sGyUAZ2Dtzv[UuhHgC8Lplc][Sr3p1qK])
                                vis[UuhHgC8Lplc][Sr3p1qK] = 1;
                            EVYsgPrEw6U = EVYsgPrEw6U +1;
                        }
                    }
                    Sr3p1qK = Sr3p1qK +1;
                }
            }
            UuhHgC8Lplc = (1702 - 977) - 724;
        }
    }
    wvNBtPlSr4 = (292 - 292);
    {
        int UuhHgC8Lplc;
        UuhHgC8Lplc = 0;
        for (; 5 > UuhHgC8Lplc;) {
            {
                int Sr3p1qK = 0;
                for (; Sr3p1qK < 5;) {
                    if (vis[UuhHgC8Lplc][Sr3p1qK] == 0) {
                        wvNBtPlSr4 = wvNBtPlSr4 + 1;
                        cout << UuhHgC8Lplc +1 << " " << Sr3p1qK +1 << " " << sGyUAZ2Dtzv[UuhHgC8Lplc][Sr3p1qK] << endl;
                    }
                    Sr3p1qK++;
                }
            }
            UuhHgC8Lplc = UuhHgC8Lplc +1;
        }
    }
    if (wvNBtPlSr4 == 0)
        cout << "not found" << endl;
    return 0;
}

