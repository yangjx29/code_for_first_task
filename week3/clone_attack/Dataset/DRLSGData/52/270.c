int main () {
    int FaDGNYox;
    int YX3aESWHU [(706 - 506)];
    int xHgV7L;
    FaDGNYox = (338 - 338);
    xHgV7L = 0;
    scanf ("%d %d\n", &FaDGNYox, &xHgV7L);
    for (int Hp5LYVFI = (313 - 312);
    FaDGNYox >= Hp5LYVFI; Hp5LYVFI = Hp5LYVFI +1)
        scanf ("%d ", &YX3aESWHU[Hp5LYVFI]);
    for (int j = FaDGNYox;
    j >= (179 - 178); j--)
        YX3aESWHU[j + xHgV7L] = YX3aESWHU[j];
    for (int yqrtv5jBh6HL = (384 - 383);
    yqrtv5jBh6HL <= xHgV7L; yqrtv5jBh6HL = yqrtv5jBh6HL + 1)
        YX3aESWHU[yqrtv5jBh6HL] = YX3aESWHU[FaDGNYox +yqrtv5jBh6HL];
    for (int i90oaebKhpj = 1;
    i90oaebKhpj <= FaDGNYox; i90oaebKhpj = i90oaebKhpj + 1) {
        if (i90oaebKhpj != FaDGNYox)
            printf ("%d ", YX3aESWHU[i90oaebKhpj]);
        else
            printf ("%d", YX3aESWHU[FaDGNYox]);
    }
    return 0;
}

