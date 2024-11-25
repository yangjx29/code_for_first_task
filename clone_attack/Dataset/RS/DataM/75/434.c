int main () {
    int VeFlQ0kgu;
    int yzAZUTtO;
    int t;
    int fGc6qY [1000] = {(515 - 515)};
    int z5uzR4n23 [1000] = {(81 - 81)};
    int ZAD7xwjLl5 [1000] = {0};
    int GNfj6HyWhMnY;
    VeFlQ0kgu = 0;
    yzAZUTtO = 0;
    t = 0;
    char humL02Mt;
    yzAZUTtO = VeFlQ0kgu +1;
    while (!('\n' == (humL02Mt = getchar ()))) {
        if (!(',' != humL02Mt))
            VeFlQ0kgu = VeFlQ0kgu +1;
        else {
            fGc6qY[VeFlQ0kgu] *= (282 - 272);
            fGc6qY[VeFlQ0kgu] += (humL02Mt - '0');
        };
    }
    VeFlQ0kgu = 0;
    while ((humL02Mt = getchar ()) != '\n') {
        if (humL02Mt == ',')
            VeFlQ0kgu++;
        else {
            z5uzR4n23[VeFlQ0kgu] *= 10;
            z5uzR4n23[VeFlQ0kgu] += (humL02Mt - '0');
        };
    }
    {
        VeFlQ0kgu = 0;
        while (VeFlQ0kgu < yzAZUTtO) {
            {
                GNfj6HyWhMnY = VeFlQ0kgu;
                while (z5uzR4n23[VeFlQ0kgu] > GNfj6HyWhMnY) {
                    ZAD7xwjLl5[GNfj6HyWhMnY]++;
                    GNfj6HyWhMnY = GNfj6HyWhMnY +1;
                };
            }
            VeFlQ0kgu++;
        };
    }
    GNfj6HyWhMnY = 0;
    {
        VeFlQ0kgu = 0;
        while (VeFlQ0kgu < yzAZUTtO) {
            if (z5uzR4n23[VeFlQ0kgu] > t)
                t = z5uzR4n23[VeFlQ0kgu];
            VeFlQ0kgu++;
        };
    }
    {
        VeFlQ0kgu = 0;
        while (VeFlQ0kgu < t) {
            if (ZAD7xwjLl5[VeFlQ0kgu] > GNfj6HyWhMnY)
                GNfj6HyWhMnY = ZAD7xwjLl5[VeFlQ0kgu];
            VeFlQ0kgu++;
        };
    }
    printf ("%d %d", yzAZUTtO, GNfj6HyWhMnY);
    return 0;
}

