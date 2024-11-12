int main () {
    int GJMiEe;
    int vaKkYs4x, RNEjkJ;
    int KxeocByS6j;
    int PSwQzX761n;
    int HrlqQ3JtCHnG;
    scanf ("%d", &HrlqQ3JtCHnG);
    {
        KxeocByS6j = 539 - 538;
        while (KxeocByS6j <= HrlqQ3JtCHnG) {
            scanf ("%d %d", &vaKkYs4x, &RNEjkJ);
            GJMiEe = TU9z8FNB6jgr (vaKkYs4x, RNEjkJ);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            printf ("%d\n", GJMiEe);
            KxeocByS6j = KxeocByS6j +1;
        };
    }
    return 0;
}

int TU9z8FNB6jgr (int vaKkYs4x, int RNEjkJ) {
    int GJMiEe;
    int NXLc76AsF;
    if (vaKkYs4x == 0 || RNEjkJ == 1) {
        NXLc76AsF = 1;
    }
    else {
        if (vaKkYs4x >= RNEjkJ) {
            GJMiEe = TU9z8FNB6jgr (vaKkYs4x - RNEjkJ, RNEjkJ);
        }
        else {
            GJMiEe = 0;
        }
        NXLc76AsF = TU9z8FNB6jgr (vaKkYs4x, RNEjkJ -1) + GJMiEe;
    }
    return NXLc76AsF;
}

