int VVqWvkGmJK [maxlen], t [maxlen];
int gRGhvyob5dZ [maxlen] [maxlen];
int PmgFIWyU, uJPSevA, maxi;
int g (int, int);

int main () {
    for (; scanf ("%d", &PmgFIWyU) && PmgFIWyU;) {
        {
            int tIgUDJZ = (971 - 971);
            for (; tIgUDJZ < PmgFIWyU;) {
                scanf ("%d", &t[tIgUDJZ]);
                tIgUDJZ = tIgUDJZ + 1;
            }
        }
        uJPSevA = (916 - 916);
        gRGhvyob5dZ[(117 - 117)][(367 - 367)] = (211 - 211);
        for (int tIgUDJZ = (966 - 966);
        tIgUDJZ < PmgFIWyU; tIgUDJZ = tIgUDJZ + 1)
            scanf ("%d", &VVqWvkGmJK[tIgUDJZ]);
        sort (VVqWvkGmJK, VVqWvkGmJK +PmgFIWyU);
        sort (t, t + PmgFIWyU);
        {
            int tIgUDJZ = (245 - 244);
            for (; tIgUDJZ <= PmgFIWyU;) {
                if (VVqWvkGmJK[PmgFIWyU -tIgUDJZ] > t[tIgUDJZ - (38 - 37)])
                    uJPSevA -= (1036 - 836);
                else if (VVqWvkGmJK[PmgFIWyU -tIgUDJZ] < t[tIgUDJZ - (797 - 796)])
                    uJPSevA += (250 - 50);
                gRGhvyob5dZ[tIgUDJZ][(18 - 18)] = uJPSevA;
                tIgUDJZ = tIgUDJZ + 1;
            }
        }
        uJPSevA = 0;
        {
            int tIgUDJZ = (552 - 551);
            while (tIgUDJZ <= PmgFIWyU) {
                if (VVqWvkGmJK[PmgFIWyU -tIgUDJZ] > t[PmgFIWyU -tIgUDJZ])
                    uJPSevA -= (447 - 247);
                else if (VVqWvkGmJK[PmgFIWyU -tIgUDJZ] < t[PmgFIWyU -tIgUDJZ])
                    uJPSevA += (231 - 31);
                gRGhvyob5dZ[tIgUDJZ][tIgUDJZ] = uJPSevA;
                tIgUDJZ = tIgUDJZ + 1;
            }
        }
        {
            int tIgUDJZ = (250 - 248);
            for (; tIgUDJZ <= PmgFIWyU;) {
                {
                    int j = (643 - 642);
                    for (; j < tIgUDJZ;) {
                        gRGhvyob5dZ[tIgUDJZ][j] = max (gRGhvyob5dZ[tIgUDJZ - 1][j] + g (PmgFIWyU -tIgUDJZ, tIgUDJZ - j - 1), gRGhvyob5dZ[tIgUDJZ - 1][j - 1] + g (PmgFIWyU -tIgUDJZ, PmgFIWyU -j));
                        ++j;
                    }
                }
                ++tIgUDJZ;
            }
        }
        maxi = -(1000000135 - 136);
        for (int tIgUDJZ = 0;
        tIgUDJZ <= PmgFIWyU; tIgUDJZ = tIgUDJZ + 1)
            if (gRGhvyob5dZ[PmgFIWyU][tIgUDJZ] > maxi)
                maxi = gRGhvyob5dZ[PmgFIWyU][tIgUDJZ];
        printf ("%d\n", maxi);
    }
    return 0;
}

int g (int TKcoIQPLn, int NfTq3bGz0) {
    if (VVqWvkGmJK[TKcoIQPLn] > t[NfTq3bGz0])
        return -200;
    if (VVqWvkGmJK[TKcoIQPLn] < t[NfTq3bGz0])
        return 200;
    return 0;
}

