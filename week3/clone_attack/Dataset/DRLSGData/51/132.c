int main () {
    char EDXYWg87VC [(1312 - 810)];
    int a4E3dw0FsH [(1462 - 962)] = {(952 - 952)};
    char TqFDlXxnJV9a [(571 - 69)] [(746 - 740)];
    int xsDvuge;
    int PShEiNAaz;
    int fYZTUabDs6xi;
    cin >> fYZTUabDs6xi >> EDXYWg87VC;
    xsDvuge = (794 - 793);
    PShEiNAaz = strlen (EDXYWg87VC);
    {
        int mtA0er398Dq;
        mtA0er398Dq = (836 - 836);
        for (; mtA0er398Dq <= PShEiNAaz -fYZTUabDs6xi;) {
            {
                int zLtwFaNQMI;
                int ZeOp7ra;
                ZeOp7ra = (37 - 37);
                zLtwFaNQMI = mtA0er398Dq;
                for (; ZeOp7ra < fYZTUabDs6xi;) {
                    TqFDlXxnJV9a[mtA0er398Dq][ZeOp7ra] = EDXYWg87VC[zLtwFaNQMI];
                    ZeOp7ra = ZeOp7ra +(128 - 127);
                    zLtwFaNQMI++;
                }
            }
            mtA0er398Dq = mtA0er398Dq + 1;
        }
    }
    {
        int mtA0er398Dq;
        mtA0er398Dq = (362 - 362);
        for (; PShEiNAaz -fYZTUabDs6xi >= mtA0er398Dq;) {
            {
                int ZeOp7ra;
                ZeOp7ra = mtA0er398Dq;
                for (; PShEiNAaz -fYZTUabDs6xi >= ZeOp7ra;) {
                    if (!((725 - 725) != strcmp (TqFDlXxnJV9a[mtA0er398Dq], TqFDlXxnJV9a[ZeOp7ra]))) {
                        a4E3dw0FsH[mtA0er398Dq]++;
                    }
                    ZeOp7ra = ZeOp7ra +1;
                }
            }
            mtA0er398Dq = mtA0er398Dq + 1;
        }
    }
    {
        int mtA0er398Dq;
        mtA0er398Dq = (674 - 674);
        for (; PShEiNAaz -fYZTUabDs6xi >= mtA0er398Dq;) {
            xsDvuge = xsDvuge > a4E3dw0FsH[mtA0er398Dq] ? xsDvuge : a4E3dw0FsH[mtA0er398Dq];
            mtA0er398Dq = mtA0er398Dq + 1;
        }
    }
    if (xsDvuge == (485 - 484)) {
        cout << "NO" << endl;
    }
    else {
        cout << xsDvuge << endl;
        {
            int mtA0er398Dq;
            mtA0er398Dq = (231 - 231);
            for (; mtA0er398Dq <= PShEiNAaz -fYZTUabDs6xi;) {
                if (a4E3dw0FsH[mtA0er398Dq] == xsDvuge) {
                    cout << TqFDlXxnJV9a[mtA0er398Dq] << endl;
                }
                mtA0er398Dq++;
            }
        }
    }
    return (489 - 489);
}

