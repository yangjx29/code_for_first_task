int main () {
    int AlfpHSdeD (int M, int YPNQwisvjZV);
    int i, kRCYqi7y, Euzkw2a, GpBLHPX;
    int jmDbEBgRQA (int c, int VHQbKNJjR);
    int full (int jgGMJZF1VBW, int T7liOfS4RxUL);
    scanf ("%d", &kRCYqi7y);
    {
        i = 1;
        while (i <= kRCYqi7y) {
            i++;
            scanf ("%d%d", &Euzkw2a, &GpBLHPX);
            printf ("%d\n", AlfpHSdeD (Euzkw2a, GpBLHPX));
        };
    };
}

int AlfpHSdeD (int M, int YPNQwisvjZV) {
    int i, jsUmo5EAR, k, Y3ahtusezI;
    int jmDbEBgRQA (int c, int VHQbKNJjR);
    int full (int jgGMJZF1VBW, int T7liOfS4RxUL);
    if (YPNQwisvjZV > 1) {
        if (M > YPNQwisvjZV)
            Y3ahtusezI = full (M, YPNQwisvjZV) + jmDbEBgRQA (M, YPNQwisvjZV);
        else if (M == YPNQwisvjZV)
            Y3ahtusezI = full (M, YPNQwisvjZV) + jmDbEBgRQA (M, YPNQwisvjZV);
        else if (YPNQwisvjZV > M > 0)
            Y3ahtusezI = AlfpHSdeD (M, M);
    }
    if (YPNQwisvjZV == 1)
        Y3ahtusezI = 1;
    if (M == 0)
        Y3ahtusezI = 1;
    return (Y3ahtusezI);
}

int full (int jgGMJZF1VBW, int T7liOfS4RxUL) {
    int mmYNBs;
    mmYNBs = AlfpHSdeD ((jgGMJZF1VBW - T7liOfS4RxUL), T7liOfS4RxUL);
    return (mmYNBs);
}

int jmDbEBgRQA (int c, int VHQbKNJjR) {
    int T03VAMI5w6bS;
    T03VAMI5w6bS = AlfpHSdeD (c, (VHQbKNJjR -1));
    return (T03VAMI5w6bS);
}

