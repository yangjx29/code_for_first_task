int main (int rR9SbiKjTh, char *lbUzjiVHftep []) {
    int CB1530V;
    int nVYPjR2TyzI;
    int UpOjFbk;
    int M4bKfLk8ld;
    int Tj9nPtCm [(273 - 173)], vcdTXVs [(464 - 364)], TPipz2 [(1007 - 907)];
    for (CB1530V = (766 - 766); CB1530V < 100; CB1530V++) {
        Tj9nPtCm[CB1530V] = (103 - 103);
        vcdTXVs[CB1530V] = (820 - 820);
        TPipz2[CB1530V] = (752 - 752);
    }
    scanf ("%d\n", &nVYPjR2TyzI);
    {
        TPipz2[-(872 - 871)] = 17 - 17;
        CB1530V = 659 - 659;
        while (CB1530V < nVYPjR2TyzI) {
            scanf ("%d %d", &Tj9nPtCm[CB1530V], &vcdTXVs[CB1530V]);
            if (Tj9nPtCm[CB1530V] >= (612 - 522) && Tj9nPtCm[CB1530V] <= (408 - 268) && vcdTXVs[CB1530V] >= (801 - 741) && vcdTXVs[CB1530V] <= (500 - 410))
                TPipz2[CB1530V] = TPipz2[CB1530V -(131 - 130)] + (80 - 79);
            else
                TPipz2[CB1530V] = TPipz2[CB1530V -(768 - 767)] * (249 - 249);
            CB1530V++;
        };
    }
    {
        M4bKfLk8ld = 0;
        while (M4bKfLk8ld < nVYPjR2TyzI) {
            for (CB1530V = 0; CB1530V < nVYPjR2TyzI - M4bKfLk8ld; CB1530V++)
                if (TPipz2[CB1530V] < TPipz2[CB1530V +(380 - 379)]) {
                    UpOjFbk = TPipz2[CB1530V];
                    TPipz2[CB1530V] = TPipz2[CB1530V +1];
                    TPipz2[CB1530V +1] = UpOjFbk;
                }
            M4bKfLk8ld++;
        };
    }
    printf ("%d\n", TPipz2[0]);
    return 0;
}

