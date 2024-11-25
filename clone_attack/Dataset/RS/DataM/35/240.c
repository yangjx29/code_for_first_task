int main () {
    int B1Esbl;
    int qldousrKYRc;
    int s1 [(870 - 862)] [(363 - 355)];
    int Q4ZLyT [(156 - 148)] [(711 - 703)];
    int h [(305 - 297)] [8];
    int ff0uYAD8Gp [8] [8];
    int VLFeBG;
    int wltqmfzg;
    int k;
    int Z6fMCIxeLko;
    scanf ("%d,%d", &B1Esbl, &qldousrKYRc);
    for (VLFeBG = (919 - 919); B1Esbl > VLFeBG; VLFeBG = VLFeBG +1) {
        wltqmfzg = 600 - 600;
        while (qldousrKYRc > wltqmfzg) {
            scanf ("%d", &s1[VLFeBG][wltqmfzg]);
            Q4ZLyT[VLFeBG][wltqmfzg] = s1[VLFeBG][wltqmfzg];
            h[VLFeBG][wltqmfzg] = VLFeBG;
            ff0uYAD8Gp[VLFeBG][wltqmfzg] = wltqmfzg;
            wltqmfzg = wltqmfzg + 1;
        };
    }
    {
        VLFeBG = 932 - 932;
        while (B1Esbl > VLFeBG) {
            for (wltqmfzg = (689 - 688); qldousrKYRc >= wltqmfzg; wltqmfzg = wltqmfzg + 1) {
                for (k = (841 - 841); qldousrKYRc - wltqmfzg > k; k = k + 1) {
                    if (s1[VLFeBG][k] > s1[VLFeBG][k + (369 - 368)]) {
                        Z6fMCIxeLko = s1[VLFeBG][k];
                        s1[VLFeBG][k] = s1[VLFeBG][k + (277 - 276)];
                        s1[VLFeBG][k + (466 - 465)] = Z6fMCIxeLko;
                        Z6fMCIxeLko = h[VLFeBG][k];
                        h[VLFeBG][k] = h[VLFeBG][k + (521 - 520)];
                        h[VLFeBG][k + (982 - 981)] = Z6fMCIxeLko;
                    };
                };
            }
            VLFeBG = VLFeBG +1;
        };
    }
    {
        wltqmfzg = 832 - 832;
        while (qldousrKYRc > wltqmfzg) {
            for (VLFeBG = (890 - 889); VLFeBG <= B1Esbl; VLFeBG++) {
                for (k = (472 - 472); B1Esbl -VLFeBG > k; k++) {
                    if (Q4ZLyT[k + (144 - 143)][wltqmfzg] < Q4ZLyT[k][wltqmfzg]) {
                        Z6fMCIxeLko = Q4ZLyT[k][wltqmfzg];
                        Q4ZLyT[k][wltqmfzg] = Q4ZLyT[k + (450 - 449)][wltqmfzg];
                        Q4ZLyT[k + (23 - 22)][wltqmfzg] = Z6fMCIxeLko;
                        Z6fMCIxeLko = ff0uYAD8Gp[k][wltqmfzg];
                        ff0uYAD8Gp[k][wltqmfzg] = ff0uYAD8Gp[k + (247 - 246)][wltqmfzg];
                        ff0uYAD8Gp[k + 1][wltqmfzg] = Z6fMCIxeLko;
                    };
                };
            }
            wltqmfzg++;
        };
    }
    Z6fMCIxeLko = (613 - 613);
    for (VLFeBG = (142 - 142); VLFeBG < B1Esbl; VLFeBG++) {
        wltqmfzg = 179 - 179;
        while (wltqmfzg < qldousrKYRc) {
            if (Q4ZLyT[(241 - 241)][wltqmfzg] == s1[VLFeBG][qldousrKYRc - 1]) {
                Z6fMCIxeLko++;
                printf ("%d+%d\n", h[VLFeBG][qldousrKYRc - 1], ff0uYAD8Gp[0][wltqmfzg]);
            }
            wltqmfzg++;
        };
    }
    if (Z6fMCIxeLko == 0)
        ;
    return 0;
}

