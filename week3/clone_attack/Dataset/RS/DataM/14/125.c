int main () {
    int SQZa2KD;
    struct   student {
        int ID;
        int YW;
        int tNgerVFT;
    };
    struct   student alMZ4I08S [100000];
    int ZF [100000];
    int V0jEq8bCXxk4;
    int b;
    int BwGRChSe;
    int bDN5tLMGxgaI;
    int bfBNdW0x2D;
    int C;
    V0jEq8bCXxk4 = 0;
    b = 0;
    BwGRChSe = 0;
    bDN5tLMGxgaI = 0;
    bfBNdW0x2D = 0;
    C = 0;
    scanf ("%d", &SQZa2KD);
    for (int hOLnhaAc = 0;
    SQZa2KD > hOLnhaAc; hOLnhaAc++) {
        scanf ("%d", &alMZ4I08S[hOLnhaAc].ID);
        scanf ("%d", &alMZ4I08S[hOLnhaAc].YW);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &alMZ4I08S[hOLnhaAc].tNgerVFT);
        ZF[hOLnhaAc] = alMZ4I08S[hOLnhaAc].YW + alMZ4I08S[hOLnhaAc].tNgerVFT;
    }
    for (int hOLnhaAc = 0;
    SQZa2KD > hOLnhaAc; hOLnhaAc++) {
        if (V0jEq8bCXxk4 < ZF[hOLnhaAc]) {
            C = bfBNdW0x2D;
            BwGRChSe = b;
            b = V0jEq8bCXxk4;
            bfBNdW0x2D = bDN5tLMGxgaI;
            V0jEq8bCXxk4 = ZF[hOLnhaAc];
            bDN5tLMGxgaI = hOLnhaAc;
        }
        else if (ZF[hOLnhaAc] > b) {
            BwGRChSe = b;
            b = ZF[hOLnhaAc];
            C = bfBNdW0x2D;
            bfBNdW0x2D = hOLnhaAc;
        }
        else if (ZF[hOLnhaAc] > BwGRChSe) {
            BwGRChSe = ZF[hOLnhaAc];
            C = hOLnhaAc;
        };
    }
    printf ("%d %d\n", alMZ4I08S[bDN5tLMGxgaI].ID, V0jEq8bCXxk4);
    printf ("%d %d\n", alMZ4I08S[bfBNdW0x2D].ID, b);
    printf ("%d %d\n", alMZ4I08S[C].ID, BwGRChSe);
    getchar ();
    getchar ();
}

