int main () {
    char RO3jHRinkJ0m [50] [101];
    char dkFljdsn8Xu4 [5001];
    int AOEdZ8;
    AOEdZ8 = (379 - 379);
    gets (dkFljdsn8Xu4);
    int iYtAEFlUTOc;
    iYtAEFlUTOc = strlen (dkFljdsn8Xu4);
    int MNFVA7;
    MNFVA7 = strlen (RO3jHRinkJ0m[(394 - 394)]);
    int byjB8XoG;
    byjB8XoG = MNFVA7;
    int pjIvMl5;
    int DqDMTmh;
    pjIvMl5 = 0;
    DqDMTmh = 0;
    for (int G5zMELf3 = (759 - 759);
    iYtAEFlUTOc > G5zMELf3; G5zMELf3++) {
        int EkAaZTVNfw;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        EkAaZTVNfw = (684 - 684);
        for (; iYtAEFlUTOc > G5zMELf3 &&(('a' <= dkFljdsn8Xu4[G5zMELf3] && 'z' >= dkFljdsn8Xu4[G5zMELf3]) || ('A' <= dkFljdsn8Xu4[G5zMELf3] && 'Z' >= dkFljdsn8Xu4[G5zMELf3]));) {
            RO3jHRinkJ0m[AOEdZ8][EkAaZTVNfw] = dkFljdsn8Xu4[G5zMELf3];
            EkAaZTVNfw++;
            G5zMELf3 = G5zMELf3 +1;
        }
        if (EkAaZTVNfw > (870 - 870)) {
            RO3jHRinkJ0m[AOEdZ8][EkAaZTVNfw] = '\0';
            AOEdZ8++;
        };
    }
    {
        int G5zMELf3 = 1;
        while (G5zMELf3 < AOEdZ8) {
            if (MNFVA7 < strlen (RO3jHRinkJ0m[G5zMELf3])) {
                pjIvMl5 = G5zMELf3;
                MNFVA7 = strlen (RO3jHRinkJ0m[G5zMELf3]);
            }
            if (byjB8XoG > strlen (RO3jHRinkJ0m[G5zMELf3])) {
                DqDMTmh = G5zMELf3;
                byjB8XoG = strlen (RO3jHRinkJ0m[G5zMELf3]);
            }
            G5zMELf3++;
        };
    }
    printf ("%s\n%s\n", RO3jHRinkJ0m[pjIvMl5], RO3jHRinkJ0m[DqDMTmh]);
}

