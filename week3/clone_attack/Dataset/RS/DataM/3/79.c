int main () {
    int NVzPsTtCG1N;
    int tAE2Wl6;
    int xb2hEv;
    int PW6gQud2P;
    int LQOX75;
    int fNJpscTzXqyw [1000];
    int VH04MCS [1000];
    NVzPsTtCG1N = 0;
    scanf ("%d %d", &tAE2Wl6, &xb2hEv);
    for (PW6gQud2P = 0; PW6gQud2P < tAE2Wl6; PW6gQud2P++) {
        scanf ("%d", &fNJpscTzXqyw[PW6gQud2P]);
        VH04MCS[PW6gQud2P] = fNJpscTzXqyw[PW6gQud2P];
    }
    {
        PW6gQud2P = 0;
        while (PW6gQud2P < (tAE2Wl6 - 1)) {
            for (LQOX75 = (PW6gQud2P +1); LQOX75 < tAE2Wl6; LQOX75++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (fNJpscTzXqyw[PW6gQud2P] + VH04MCS[LQOX75] == xb2hEv) {
                    NVzPsTtCG1N++;
                };
            }
            PW6gQud2P++;
        };
    }
    if (NVzPsTtCG1N > 0)
        ;
    else
        printf ("no");
    return 0;
}

