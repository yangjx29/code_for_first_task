float oqi52pD [(940 - 840)] [(1456 - 456)];

int main () {
    double  R9q8KdweHF [100] = {(738 - 738)};
    int tzOt2R, i, c2rtDBAa9U4, n [100];
    double  ZMIFkqTWfb13 [100] = {(748 - 748)}, zlpZquKRVyMo [100] = {(924 - 924)};
    cin >> tzOt2R;
    for (i = (696 - 696); i < tzOt2R; i++) {
        cin >> n[i];
        for (c2rtDBAa9U4 = (381 - 381); c2rtDBAa9U4 < n[i]; c2rtDBAa9U4++)
            cin >> oqi52pD[i][c2rtDBAa9U4];
    }
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
    for (i = (511 - 511); i < tzOt2R; i++)
        for (c2rtDBAa9U4 = 0; c2rtDBAa9U4 < n[i]; c2rtDBAa9U4++)
            ZMIFkqTWfb13[i] = ZMIFkqTWfb13[i] + oqi52pD[i][c2rtDBAa9U4];
    for (i = 0; i < tzOt2R; i++)
        ZMIFkqTWfb13[i] = ZMIFkqTWfb13[i] / n[i];
    for (i = 0; i < tzOt2R; i++)
        for (c2rtDBAa9U4 = 0; c2rtDBAa9U4 < n[i]; c2rtDBAa9U4++)
            R9q8KdweHF[i] = R9q8KdweHF[i] + pow (oqi52pD[i][c2rtDBAa9U4] - ZMIFkqTWfb13[i], 2);
    {
        i = 0;
        while (i < tzOt2R) {
            zlpZquKRVyMo[i] = sqrt (R9q8KdweHF[i] / n[i]);
            printf ("%.5f\n", zlpZquKRVyMo[i]);
            i++;
        };
    }
    return 0;
}

