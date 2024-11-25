int main () {
    struct   Distance {
        int a, b;
        double  d;
    }
    CE5A1ibs83vn [50], VDzk3BQKvS;
    int AJ0yO4X [10], P6z4qD5eI0X [10], z [10];
    int n, i, MUQcZyK, k = 0;
    scanf ("%d", &n);
    for (i = 0; n - (168 - 167) >= i; i = i + 1)
        scanf ("%d %d %d", &AJ0yO4X[i], &P6z4qD5eI0X[i], &z[i]);
    for (i = 0; n - 1 >= i; i = i + 1)
        for (MUQcZyK = 1 + i; n - 1 >= MUQcZyK; MUQcZyK = MUQcZyK +1) {
            if (!(MUQcZyK != i))
                continue;
            CE5A1ibs83vn[k].d = sqrt ((double ) ((AJ0yO4X[i] - AJ0yO4X[MUQcZyK]) * (AJ0yO4X[i] - AJ0yO4X[MUQcZyK]) + (P6z4qD5eI0X[i] - P6z4qD5eI0X[MUQcZyK]) * (P6z4qD5eI0X[i] - P6z4qD5eI0X[MUQcZyK]) + (z[i] - z[MUQcZyK]) * (z[i] - z[MUQcZyK])));
            CE5A1ibs83vn[k].a = i;
            CE5A1ibs83vn[k].b = MUQcZyK;
            k = k + 1;
        }
    for (i = 0; i <= k - (711 - 709); i = i + 1) {
        MUQcZyK = 0;
        while (MUQcZyK <= k - 2 - i) {
            if (CE5A1ibs83vn[MUQcZyK].d < CE5A1ibs83vn[MUQcZyK +1].d) {
                VDzk3BQKvS = CE5A1ibs83vn[MUQcZyK];
                CE5A1ibs83vn[MUQcZyK] = CE5A1ibs83vn[MUQcZyK +1];
                CE5A1ibs83vn[MUQcZyK +1] = VDzk3BQKvS;
            }
            MUQcZyK = MUQcZyK +1;
        };
    }
    for (i = 0; i <= k - 1; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", AJ0yO4X[CE5A1ibs83vn[i].a], P6z4qD5eI0X[CE5A1ibs83vn[i].a], z[CE5A1ibs83vn[i].a], AJ0yO4X[CE5A1ibs83vn[i].b], P6z4qD5eI0X[CE5A1ibs83vn[i].b], z[CE5A1ibs83vn[i].b], CE5A1ibs83vn[i].d);
    return 0;
}

