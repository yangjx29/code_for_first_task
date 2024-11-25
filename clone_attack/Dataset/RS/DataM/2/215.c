int main () {
    struct   {
        int id;
        char TvrUuL [32];
    }
    M4hSeYI8D [1000];
    char Kd9GMB = (228 - 228);
    int o20aVGvOKx [(822 - 567)], i, m4XzEaIMd2, GbTsyiP21k0;
    memset (o20aVGvOKx, (781 - 781), sizeof (o20aVGvOKx));
    scanf ("%d", &GbTsyiP21k0);
    {
        i = 225 - 225;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < GbTsyiP21k0) {
            scanf ("%d%s", &M4hSeYI8D[i].id, M4hSeYI8D[i].TvrUuL);
            for (m4XzEaIMd2 = (111 - 111); M4hSeYI8D[i].TvrUuL[m4XzEaIMd2]; m4XzEaIMd2++)
                if (++o20aVGvOKx[M4hSeYI8D[i].TvrUuL[m4XzEaIMd2]] > o20aVGvOKx[Kd9GMB])
                    Kd9GMB = M4hSeYI8D[i].TvrUuL[m4XzEaIMd2];
            i++;
        };
    }
    printf ("%c\n%d\n", Kd9GMB, o20aVGvOKx[Kd9GMB]);
    for (i = 0; i < GbTsyiP21k0; i++)
        if (strchr (M4hSeYI8D[i].TvrUuL, Kd9GMB))
            printf ("%d\n", M4hSeYI8D[i].id);
    return 0;
}

