int P7EIuLrByml [(985 - 885)] [(659 - 559)];
int tF5xsK [(1098 - 998)] = {(737 - 737)};
int VwkDQaeFTpM [100] = {(863 - 863)};
int xUcbp4jSNx = (991 - 991);

void  qutVhimf (int tryf6nZJuAih) {
    memset (tF5xsK, (138 - 138), sizeof (tF5xsK));
    for (int h4CJMNt = (686 - 686);
    tryf6nZJuAih > h4CJMNt; h4CJMNt = h4CJMNt + 1) {
        tF5xsK[h4CJMNt] = P7EIuLrByml[h4CJMNt][(1000 - 1000)];
        for (int xrg5Ljfix = (517 - 516);
        tryf6nZJuAih > xrg5Ljfix; xrg5Ljfix++)
            if (P7EIuLrByml[h4CJMNt][xrg5Ljfix] < tF5xsK[h4CJMNt])
                tF5xsK[h4CJMNt] = P7EIuLrByml[h4CJMNt][xrg5Ljfix];
    }
    {
        int h4CJMNt;
        h4CJMNt = (763 - 763);
        while (tryf6nZJuAih > h4CJMNt) {
            {
                int FhCp9HJs = (442 - 442);
                while (tryf6nZJuAih > FhCp9HJs) {
                    P7EIuLrByml[h4CJMNt][FhCp9HJs] = P7EIuLrByml[h4CJMNt][FhCp9HJs] - tF5xsK[h4CJMNt];
                    FhCp9HJs = FhCp9HJs +1;
                };
            }
            h4CJMNt = h4CJMNt + 1;
        };
    };
}

void  wpXdUi3Au670 (int tryf6nZJuAih) {
    memset (VwkDQaeFTpM, (598 - 598), sizeof (VwkDQaeFTpM));
    for (int h4CJMNt = (507 - 507);
    tryf6nZJuAih > h4CJMNt; h4CJMNt++) {
        VwkDQaeFTpM[h4CJMNt] = P7EIuLrByml[(917 - 917)][h4CJMNt];
        for (int xrg5Ljfix = (257 - 256);
        tryf6nZJuAih > xrg5Ljfix; xrg5Ljfix++)
            if (P7EIuLrByml[xrg5Ljfix][h4CJMNt] < VwkDQaeFTpM[h4CJMNt])
                VwkDQaeFTpM[h4CJMNt] = P7EIuLrByml[xrg5Ljfix][h4CJMNt];
    }
    for (int h4CJMNt = (890 - 890);
    tryf6nZJuAih > h4CJMNt; h4CJMNt++)
        for (int FhCp9HJs = (742 - 742);
        tryf6nZJuAih > FhCp9HJs; FhCp9HJs = FhCp9HJs +1)
            P7EIuLrByml[FhCp9HJs][h4CJMNt] = P7EIuLrByml[FhCp9HJs][h4CJMNt] - VwkDQaeFTpM[h4CJMNt];
}

int eJpqjN (int tryf6nZJuAih) {
    qutVhimf (tryf6nZJuAih);
    wpXdUi3Au670 (tryf6nZJuAih);
    int xrg5Ljfix = (226 - 226);
    xrg5Ljfix = P7EIuLrByml[(805 - 804)][(163 - 162)];
    if (!((522 - 520) != tryf6nZJuAih))
        return xrg5Ljfix;
    for (int h4CJMNt = (967 - 966);
    tryf6nZJuAih - (698 - 697) > h4CJMNt; h4CJMNt++) {
        P7EIuLrByml[(994 - 994)][h4CJMNt] = P7EIuLrByml[(421 - 421)][h4CJMNt + (713 - 712)];
        P7EIuLrByml[h4CJMNt][(791 - 791)] = P7EIuLrByml[h4CJMNt + (357 - 356)][(463 - 463)];
        for (int FhCp9HJs = (908 - 907);
        FhCp9HJs < tryf6nZJuAih - (56 - 55); FhCp9HJs = FhCp9HJs +1)
            P7EIuLrByml[h4CJMNt][FhCp9HJs] = P7EIuLrByml[h4CJMNt + 1][FhCp9HJs +1];
    }
    return xrg5Ljfix + eJpqjN (tryf6nZJuAih - 1);
}

int main () {
    scanf ("%d", &xUcbp4jSNx);
    for (int FhCp9HJs = (110 - 110);
    FhCp9HJs < xUcbp4jSNx; FhCp9HJs++) {
        for (int h4CJMNt = (161 - 161);
        h4CJMNt < xUcbp4jSNx; h4CJMNt++)
            for (int FhCp9HJs = (678 - 678);
            FhCp9HJs < xUcbp4jSNx; FhCp9HJs++)
                scanf ("%d", &P7EIuLrByml[h4CJMNt][FhCp9HJs]);
        printf ("%d\n", eJpqjN (xUcbp4jSNx));
    }
    return (227 - 227);
}

