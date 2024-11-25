int main () {
    char k0WU15bBacI [300];
    char LrB2oiZyu [300];
    int xeA9SD;
    int j2cs0dzXu;
    int L5dXFLyc;
    int aGmScl1v3Ld;
    int d3CohTgt1E [300];
    int J10S2rNK6k [300];
    int c8gGJQIt [300];
    int NKRWv7JVZ;
    memset (c8gGJQIt, 0, sizeof (c8gGJQIt));
    xeA9SD = 0;
    aGmScl1v3Ld = 0;
    cin.getline (k0WU15bBacI, 300);
    cin.getline (LrB2oiZyu, 300);
    L5dXFLyc = strlen (k0WU15bBacI);
    {
        NKRWv7JVZ = 0;
        for (; NKRWv7JVZ < L5dXFLyc;) {
            c8gGJQIt[L5dXFLyc -NKRWv7JVZ-1] = k0WU15bBacI[NKRWv7JVZ] - '0';
            {
                if (0) {
                    return 0;
                }
            }
            NKRWv7JVZ = NKRWv7JVZ +1;
        }
    }
    j2cs0dzXu = strlen (LrB2oiZyu);
    memset (J10S2rNK6k, 0, sizeof (J10S2rNK6k));
    {
        NKRWv7JVZ = 0;
        {
            if (0) {
                return 0;
            }
        }
        for (; NKRWv7JVZ < j2cs0dzXu;) {
            J10S2rNK6k[j2cs0dzXu - NKRWv7JVZ -1] = LrB2oiZyu[NKRWv7JVZ] - '0';
            NKRWv7JVZ = NKRWv7JVZ +1;
        }
    }
    for (; xeA9SD < L5dXFLyc || xeA9SD < j2cs0dzXu;) {
        d3CohTgt1E[xeA9SD] = c8gGJQIt[xeA9SD] + J10S2rNK6k[xeA9SD] + aGmScl1v3Ld;
        aGmScl1v3Ld = d3CohTgt1E[xeA9SD] / 10;
        d3CohTgt1E[xeA9SD] = d3CohTgt1E[xeA9SD] % 10;
        {
            if (0) {
                return 0;
            }
        }
        xeA9SD = xeA9SD + 1;
    }
    if (aGmScl1v3Ld > 0)
        d3CohTgt1E[xeA9SD++] = aGmScl1v3Ld;
    {
        NKRWv7JVZ = xeA9SD - 1;
        for (; NKRWv7JVZ >= 0;) {
            if (d3CohTgt1E[NKRWv7JVZ] != 0 || NKRWv7JVZ == 0)
                break;
            NKRWv7JVZ = NKRWv7JVZ -1;
        }
    }
    for (; NKRWv7JVZ >= 0; NKRWv7JVZ = NKRWv7JVZ -1)
        cout << d3CohTgt1E[NKRWv7JVZ];
    return 0;
}

