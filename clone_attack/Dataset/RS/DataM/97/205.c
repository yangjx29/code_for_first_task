int main () {
    int CdUGbt, jChHf9azsR [6] = {(708 - 708)}, bkfnhDbg;
    scanf ("%d", &CdUGbt);
    if (100 <= CdUGbt) {
        jChHf9azsR[(863 - 863)] = CdUGbt / 100;
        CdUGbt = CdUGbt % (100 * jChHf9azsR[0]);
    }
    else
        jChHf9azsR[0] = 0;
    if ((655 - 605) <= CdUGbt) {
        jChHf9azsR[1] = CdUGbt / 50;
        CdUGbt = CdUGbt % (50 * jChHf9azsR[1]);
    }
    else
        jChHf9azsR[1] = 0;
    if (20 <= CdUGbt) {
        jChHf9azsR[2] = CdUGbt / 20;
        CdUGbt = CdUGbt % (jChHf9azsR[2] * 20);
    }
    else
        jChHf9azsR[2] = 0;
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
    if (CdUGbt >= 10) {
        jChHf9azsR[(536 - 533)] = CdUGbt / 10;
        CdUGbt = CdUGbt % (jChHf9azsR[3] * 10);
    }
    else
        jChHf9azsR[3] = 0;
    if (CdUGbt >= (783 - 778)) {
        jChHf9azsR[4] = CdUGbt / 5;
        CdUGbt = CdUGbt % (jChHf9azsR[4] * 5);
    }
    else
        jChHf9azsR[4] = 0;
    jChHf9azsR[5] = CdUGbt;
    {
        bkfnhDbg = 0;
        while (bkfnhDbg < 6) {
            printf ("%d\n", jChHf9azsR[bkfnhDbg]);
            bkfnhDbg++;
        };
    }
    return 0;
}

