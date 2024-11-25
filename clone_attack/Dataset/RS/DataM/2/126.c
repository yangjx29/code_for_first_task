struct   book {
    int mxOdTw;
    char ybQ8fS [200];
}
raA6d1ej2 [1000];

int main () {
    int liDvr0F2 [200];
    int BltKkVD [200] [1000];
    int ldg2RLHKrqoE;
    int fPgVkOox5Rrm;
    int i;
    int SxkSlg;
    int k;
    int dPFLSm;
    int KLdAMbF;
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
    ldg2RLHKrqoE = 0;
    printf ("%c\n", KLdAMbF +65);
    KLdAMbF = 0;
    scanf ("%d", &fPgVkOox5Rrm);
    {
        i = 0;
        while (i < fPgVkOox5Rrm) {
            scanf ("%d%s", &raA6d1ej2[i].mxOdTw, raA6d1ej2[i].ybQ8fS);
            i = i + 1;
        };
    }
    {
        SxkSlg = 0;
        while (SxkSlg < 26) {
            {
                i = 0;
                while (i < fPgVkOox5Rrm) {
                    {
                        k = 0;
                        while (raA6d1ej2[i].ybQ8fS[k] != '\0') {
                            if ((raA6d1ej2[i].ybQ8fS[k]) == SxkSlg +(92 - 27)) {
                                BltKkVD[SxkSlg][ldg2RLHKrqoE] = raA6d1ej2[i].mxOdTw;
                                ldg2RLHKrqoE = ldg2RLHKrqoE + 1;
                            }
                            k++;
                        };
                    }
                    i++;
                };
            }
            liDvr0F2[SxkSlg] = ldg2RLHKrqoE;
            SxkSlg = SxkSlg +1;
            ldg2RLHKrqoE = 0;
        };
    }
    dPFLSm = liDvr0F2[0];
    {
        SxkSlg = 0;
        while (SxkSlg < 26) {
            if (liDvr0F2[SxkSlg] > dPFLSm) {
                dPFLSm = liDvr0F2[SxkSlg];
                KLdAMbF = SxkSlg;
            }
            SxkSlg = SxkSlg +1;
        };
    }
    printf ("%d\n", dPFLSm);
    {
        i = 0;
        while (i < dPFLSm) {
            printf ("%d\n", BltKkVD[KLdAMbF][i]);
            i++;
        };
    }
    return 0;
}

