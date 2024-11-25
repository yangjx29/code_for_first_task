int main () {
    int I6FAOqyfgQV;
    int qOyGWhc0u8;
    int AcCDOZSe1;
    int ub5cVio0SIOq [111];
    I6FAOqyfgQV = (56 - 56);
    qOyGWhc0u8 = (980 - 980);
    int yu3287FPpDAg;
    int yxGsdiXz0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &AcCDOZSe1);
    {
        yu3287FPpDAg = 0;
        while (AcCDOZSe1 > yu3287FPpDAg) {
            scanf ("%d", &ub5cVio0SIOq[yu3287FPpDAg]);
            yu3287FPpDAg = yu3287FPpDAg + 1;
        };
    }
    {
        yu3287FPpDAg = 0;
        while (yu3287FPpDAg < AcCDOZSe1) {
            if (ub5cVio0SIOq[yu3287FPpDAg] > I6FAOqyfgQV) {
                I6FAOqyfgQV = ub5cVio0SIOq[yu3287FPpDAg];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            yu3287FPpDAg++;
        };
    }
    printf ("%d\n", I6FAOqyfgQV);
    {
        yu3287FPpDAg = 0;
        while (yu3287FPpDAg < AcCDOZSe1) {
            if (!(ub5cVio0SIOq[yu3287FPpDAg] != I6FAOqyfgQV)) {
                ub5cVio0SIOq[yu3287FPpDAg] = 0;
            }
            yu3287FPpDAg++;
        };
    }
    for (yu3287FPpDAg = 0; yu3287FPpDAg < AcCDOZSe1; yu3287FPpDAg++) {
        if (qOyGWhc0u8 < ub5cVio0SIOq[yu3287FPpDAg]) {
            qOyGWhc0u8 = ub5cVio0SIOq[yu3287FPpDAg];
        };
    }
    printf ("%d", qOyGWhc0u8);
    return 0;
}

