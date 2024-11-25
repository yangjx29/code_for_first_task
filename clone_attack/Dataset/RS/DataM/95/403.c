int main () {
    int IKzyYlms;
    IKzyYlms = 0;
    char C6aweZ [100];
    char FN4TsF5n [100];
    gets (C6aweZ);
    gets (FN4TsF5n);
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
    while (!('\0' == C6aweZ[IKzyYlms])) {
        if (97 <= C6aweZ[IKzyYlms])
            C6aweZ[IKzyYlms] = C6aweZ[IKzyYlms] - 32;
        IKzyYlms = IKzyYlms +1;
    }
    IKzyYlms = 0;
    while (!('\0' == FN4TsF5n[IKzyYlms])) {
        if (FN4TsF5n[IKzyYlms] >= 97)
            FN4TsF5n[IKzyYlms] = FN4TsF5n[IKzyYlms] - 32;
        IKzyYlms = IKzyYlms +1;
    }
    if (strcmp (C6aweZ, FN4TsF5n) > 0)
        ;
    if (strcmp (C6aweZ, FN4TsF5n) < 0)
        ;
    if (strcmp (C6aweZ, FN4TsF5n) == 0)
        ;
    return 0;
}

