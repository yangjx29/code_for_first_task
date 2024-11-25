int main () {
    char mFrXMBLOt0 [256];
    char substring [256];
    char replacement [256];
    char final [500];
    int flag;
    int PYcpHiOMS;
    int VUs0KIuXF3;
    int grCMgH;
    int WyBgZCV;
    int sTDPakuZ;
    int length2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int a;
    flag = 0;
    scanf ("%s", mFrXMBLOt0);
    scanf ("%s", substring);
    scanf ("%s", replacement);
    WyBgZCV = strlen (mFrXMBLOt0);
    sTDPakuZ = strlen (substring);
    length2 = strlen (replacement);
    for (PYcpHiOMS = 0, VUs0KIuXF3 = 0; mFrXMBLOt0[PYcpHiOMS] != '\0'; PYcpHiOMS = PYcpHiOMS +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (mFrXMBLOt0[PYcpHiOMS] == substring[VUs0KIuXF3]) {
            a = PYcpHiOMS;
            if (mFrXMBLOt0[a + 1] == substring[VUs0KIuXF3 +1]) {
                flag = 1;
                break;
            };
        };
    }
    if (!(1 != flag)) {
        for (grCMgH = 0; a - 1 >= grCMgH; grCMgH = grCMgH + 1)
            *(final + grCMgH) = *(mFrXMBLOt0 + grCMgH);
        for (grCMgH = a; grCMgH < a + length2; grCMgH++)
            *(final + grCMgH) = *(replacement + grCMgH - a);
        {
            grCMgH = a + length2;
            while (grCMgH < WyBgZCV +length2 - sTDPakuZ) {
                *(final + grCMgH) = *(mFrXMBLOt0 + grCMgH + sTDPakuZ - length2);
                grCMgH = grCMgH + 1;
            };
        }
        *(final + WyBgZCV +length2 - sTDPakuZ) = '\0';
        for (grCMgH = 0; final[grCMgH] != '\0'; grCMgH++)
            printf ("%c", final[grCMgH]);
    }
    else if (flag == 0) {
        {
            PYcpHiOMS = 0;
            while (mFrXMBLOt0[PYcpHiOMS] != '\0') {
                printf ("%c", mFrXMBLOt0[PYcpHiOMS]);
                PYcpHiOMS = PYcpHiOMS +1;
            }
            VUs0KIuXF3 = 0;
        }
        return 0;
    }
    return 0;
}

