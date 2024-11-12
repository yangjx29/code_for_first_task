void  HAKYsi (char SeXDsowiFk [80]) {
    int T3J6G75TULA;
    for (T3J6G75TULA = 0; SeXDsowiFk[T3J6G75TULA] != '\0'; T3J6G75TULA = T3J6G75TULA +1)
        if ('A' <= SeXDsowiFk[T3J6G75TULA] && SeXDsowiFk[T3J6G75TULA] <= 'Z')
            SeXDsowiFk[T3J6G75TULA] = SeXDsowiFk[T3J6G75TULA] + 32;
}

void  main () {
    int pNBGA1, DCRx0aJz6;
    char HMcD8X05P7 [80] = {0};
    gets (HMcD8X05P7);
    char TsqcJhSGl3 [80] = {0};
    HAKYsi (HMcD8X05P7);
    gets (TsqcJhSGl3);
    HAKYsi (TsqcJhSGl3);
    DCRx0aJz6 = 0;
    {
        pNBGA1 = 0;
        for (; HMcD8X05P7[pNBGA1] != '\0' && TsqcJhSGl3[pNBGA1] != '\0';) {
            if (HMcD8X05P7[pNBGA1] == TsqcJhSGl3[pNBGA1])
                DCRx0aJz6 = DCRx0aJz6 +1;
            if (HMcD8X05P7[pNBGA1] != TsqcJhSGl3[pNBGA1])
                break;
            pNBGA1 = pNBGA1 + 1;
        };
    }
    if (TsqcJhSGl3[DCRx0aJz6] < HMcD8X05P7[DCRx0aJz6])
        ;
    if (!(TsqcJhSGl3[DCRx0aJz6] != HMcD8X05P7[DCRx0aJz6]))
        ;
    if (HMcD8X05P7[DCRx0aJz6] < TsqcJhSGl3[DCRx0aJz6])
        ;
}

