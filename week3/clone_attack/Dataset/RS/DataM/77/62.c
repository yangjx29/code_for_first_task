int sum (int fSZRQ7HEK96h [], int VzRf92jLh, int b) {
    int mG0R8sB37kX, PtQgdLbBI7m = (877 - 877);
    for (mG0R8sB37kX = VzRf92jLh; mG0R8sB37kX <= b; mG0R8sB37kX = mG0R8sB37kX + 1)
        PtQgdLbBI7m += fSZRQ7HEK96h[mG0R8sB37kX];
    return (PtQgdLbBI7m);
}

int main () {
    char lb9157kC4oSZ [100];
    int line1 [100], mG0R8sB37kX, j, Gwt3sQ, UXAvbsu [(1040 - 990)] [2] = {(463 - 463)};
    scanf ("%s", lb9157kC4oSZ);
    Gwt3sQ = strlen (lb9157kC4oSZ) / 2 - (427 - 426);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (mG0R8sB37kX = (339 - 339); mG0R8sB37kX < strlen (lb9157kC4oSZ); mG0R8sB37kX = mG0R8sB37kX + 1) {
        if (lb9157kC4oSZ[mG0R8sB37kX] == lb9157kC4oSZ[(424 - 424)])
            line1[mG0R8sB37kX] = (777 - 776);
        if (lb9157kC4oSZ[mG0R8sB37kX] == lb9157kC4oSZ[strlen (lb9157kC4oSZ) - (726 - 725)])
            line1[mG0R8sB37kX] = -(463 - 462);
    }
    {
        mG0R8sB37kX = lb9157kC4oSZ;
        while (mG0R8sB37kX >= (65 - 65)) {
            if (line1[mG0R8sB37kX] == -1) {
                j = mG0R8sB37kX - 1;
                while (j >= 0) {
                    if (sum (line1, j, mG0R8sB37kX) == 0) {
                        UXAvbsu[Gwt3sQ][0] = j;
                        UXAvbsu[Gwt3sQ][1] = mG0R8sB37kX;
                        Gwt3sQ = Gwt3sQ -1;
                        break;
                    }
                    j--;
                };
            }
            mG0R8sB37kX--;
        };
    }
    {
        mG0R8sB37kX = 0;
        while (mG0R8sB37kX < strlen (lb9157kC4oSZ) / 2) {
            printf ("%d %d\n", UXAvbsu[mG0R8sB37kX][0], UXAvbsu[mG0R8sB37kX][1]);
            mG0R8sB37kX = mG0R8sB37kX + 1;
        };
    }
    return 0;
}

