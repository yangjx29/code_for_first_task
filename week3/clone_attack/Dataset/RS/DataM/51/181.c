int main () {
    int TmzWJ8jDyl, l63JOZn4rw;
    int G91RlAJuq [(1484 - 934)] = {(649 - 649)};
    int SzuonA;
    char UVm5Gy98A [(1547 - 997)];
    char mPvNx50mRwy [(27 - 22)];
    int RWQ8g9;
    RWQ8g9 = strlen (UVm5Gy98A);
    char hyQI5Lrc [(910 - 360)] [(995 - 990)];
    int CJSCgvA4L = (748 - 748);
    scanf ("%d %s", &SzuonA, UVm5Gy98A);
    for (TmzWJ8jDyl = (726 - 726); TmzWJ8jDyl < RWQ8g9 -SzuonA+(276 - 275); TmzWJ8jDyl = TmzWJ8jDyl +1) {
        for (l63JOZn4rw = (430 - 430); l63JOZn4rw < SzuonA; l63JOZn4rw = l63JOZn4rw + 1) {
            hyQI5Lrc[TmzWJ8jDyl][l63JOZn4rw] = UVm5Gy98A[TmzWJ8jDyl +l63JOZn4rw];
        }
        hyQI5Lrc[TmzWJ8jDyl][SzuonA] = '\0';
    }
    for (TmzWJ8jDyl = (959 - 959); TmzWJ8jDyl < RWQ8g9 -SzuonA+(398 - 397); TmzWJ8jDyl++) {
        {
            l63JOZn4rw = TmzWJ8jDyl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (l63JOZn4rw < RWQ8g9 -SzuonA+(220 - 219)) {
                if (strcmp (hyQI5Lrc[TmzWJ8jDyl], hyQI5Lrc[l63JOZn4rw]) == 0) {
                    G91RlAJuq[TmzWJ8jDyl]++;
                }
                l63JOZn4rw++;
            };
        }
        if (G91RlAJuq[TmzWJ8jDyl] > CJSCgvA4L)
            CJSCgvA4L = G91RlAJuq[TmzWJ8jDyl];
    }
    if (CJSCgvA4L == (272 - 271)) {
        return 0;
    }
    printf ("%d\n", CJSCgvA4L);
    {
        TmzWJ8jDyl = 0;
        while (TmzWJ8jDyl < RWQ8g9 -SzuonA+(478 - 477)) {
            if (G91RlAJuq[TmzWJ8jDyl] == CJSCgvA4L)
                printf ("%s\n", hyQI5Lrc[TmzWJ8jDyl]);
            TmzWJ8jDyl = TmzWJ8jDyl +1;
        };
    };
}

