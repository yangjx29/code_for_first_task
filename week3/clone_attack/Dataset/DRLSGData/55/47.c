void  main () {
    int SrxvhMn4E6;
    int I6jqJEs8dlK;
    int mKBDwulj9;
    int rgUDn4BPQLC;
    char on6NV8a [100];
    char nuPSnsjTc [100];
    int oFgB8dC;
    int j1dzPlYAa8r;
    scanf ("%d", &oFgB8dC);
    rgUDn4BPQLC = 0;
    scanf ("%s", on6NV8a);
    for (I6jqJEs8dlK = 0; on6NV8a[I6jqJEs8dlK] != '\0'; I6jqJEs8dlK = I6jqJEs8dlK +1) {
        if (on6NV8a[I6jqJEs8dlK] > '9') {
            if (on6NV8a[I6jqJEs8dlK] >= 'a' && on6NV8a[I6jqJEs8dlK] <= 'z')
                SrxvhMn4E6 = on6NV8a[I6jqJEs8dlK] - 'a' + 10;
            else
                SrxvhMn4E6 = on6NV8a[I6jqJEs8dlK] - 'A' + 10;
        }
        else
            SrxvhMn4E6 = on6NV8a[I6jqJEs8dlK] - '0';
        rgUDn4BPQLC = oFgB8dC * rgUDn4BPQLC + SrxvhMn4E6;
    }
    scanf ("%d", &mKBDwulj9);
    if (rgUDn4BPQLC == 0)
        ;
    else {
        for (I6jqJEs8dlK = 0; rgUDn4BPQLC != 0; I6jqJEs8dlK = I6jqJEs8dlK +1) {
            if (rgUDn4BPQLC % mKBDwulj9 > 9)
                nuPSnsjTc[I6jqJEs8dlK] = rgUDn4BPQLC % mKBDwulj9 - 10 + 'A';
            else
                nuPSnsjTc[I6jqJEs8dlK] = rgUDn4BPQLC % mKBDwulj9 + '0';
            rgUDn4BPQLC = rgUDn4BPQLC / mKBDwulj9;
        }
        {
            if (0) {
                return 0;
            }
        }
        for (j1dzPlYAa8r = I6jqJEs8dlK -1; j1dzPlYAa8r >= 0; j1dzPlYAa8r = j1dzPlYAa8r - 1)
            printf ("%c", nuPSnsjTc[j1dzPlYAa8r]);
    }
}

