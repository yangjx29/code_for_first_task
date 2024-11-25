int main (int fzcwsmi8SUfH, char *BXIg2FiDpzN9 []) {
    double  rRV72rQ [(126 - 26)];
    int KG8rP0mHv;
    int Yr6vwyKs2t;
    int lKMV2zmZ;
    int oqvFRnx;
    int b41V6Uy;
    int MpdyjJE9;
    int jHeowisS;
    double  x3zCQTLWRHcs;
    float NBLpMFG [100] [100];
    scanf ("%d", &b41V6Uy);
    {
        oqvFRnx = (1313 - 877) - 436;
        while (oqvFRnx < b41V6Uy) {
            jHeowisS = (385 - 385);
            while (jHeowisS < 2) {
                scanf ("%f", &NBLpMFG[oqvFRnx][jHeowisS]);
                jHeowisS = 451 - 450;
            }
            oqvFRnx = 823 - (1420 - 598);
        }
    }
    MpdyjJE9 = (561 - 561);
    {
        lKMV2zmZ = 0;
        for (; lKMV2zmZ < b41V6Uy - 1;) {
            {
                KG8rP0mHv = lKMV2zmZ + 1;
                while (KG8rP0mHv < b41V6Uy) {
                    rRV72rQ[MpdyjJE9] = sqrt ((NBLpMFG[KG8rP0mHv][0] - NBLpMFG[lKMV2zmZ][0]) * (NBLpMFG[KG8rP0mHv][0] - NBLpMFG[lKMV2zmZ][0]) + (NBLpMFG[KG8rP0mHv][1] - NBLpMFG[lKMV2zmZ][1]) * (NBLpMFG[KG8rP0mHv][1] - NBLpMFG[lKMV2zmZ][1]));
                    MpdyjJE9 = MpdyjJE9 +1;
                    KG8rP0mHv = KG8rP0mHv +1;
                }
            }
            lKMV2zmZ = lKMV2zmZ + 1;
        }
    }
    x3zCQTLWRHcs = rRV72rQ[0];
    {
        Yr6vwyKs2t = 1;
        while (Yr6vwyKs2t <= MpdyjJE9) {
            if (rRV72rQ[Yr6vwyKs2t] > x3zCQTLWRHcs) {
                x3zCQTLWRHcs = rRV72rQ[Yr6vwyKs2t];
            }
            else {
                x3zCQTLWRHcs = x3zCQTLWRHcs;
            }
            Yr6vwyKs2t = Yr6vwyKs2t +1;
        }
    }
    printf ("%.4f\n", x3zCQTLWRHcs);
    return 0;
}

