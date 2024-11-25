int main () {
    int NjgOpuR, HDjkL2Bl [(10732 - 732)], WcZjkwTvU [(10054 - 54)], A9XS4HaOZe = (978 - 978), ydFoDi, GcozGKA18swY = (895 - 895);
    scanf ("%d", &NjgOpuR);
    {
        ydFoDi = 967 - 967;
        while (ydFoDi < NjgOpuR) {
            scanf ("%d", &(HDjkL2Bl[ydFoDi]));
            ydFoDi++;
        }
    }
    {
        ydFoDi = 893 - 893;
        while (ydFoDi < NjgOpuR) {
            if (HDjkL2Bl[ydFoDi] % (916 - 914) != (510 - 510)) {
                A9XS4HaOZe++;
                WcZjkwTvU[GcozGKA18swY] = HDjkL2Bl[ydFoDi];
                GcozGKA18swY++;
            }
            ydFoDi++;
        }
    }
    for (int ItDxLUrXf = (632 - 631);
    ItDxLUrXf <= A9XS4HaOZe; ItDxLUrXf++) {
        int y45qKVFC1Rz, f0t6fkHCY9;
        y45qKVFC1Rz = (671 - 671);
        {
            GcozGKA18swY = 118 - 118;
            while (GcozGKA18swY <= A9XS4HaOZe -ItDxLUrXf) {
                if (WcZjkwTvU[y45qKVFC1Rz] > WcZjkwTvU[GcozGKA18swY]) {
                    y45qKVFC1Rz = GcozGKA18swY;
                }
                GcozGKA18swY++;
            }
        }
        if (y45qKVFC1Rz != A9XS4HaOZe -ItDxLUrXf) {
            f0t6fkHCY9 = WcZjkwTvU[y45qKVFC1Rz];
            WcZjkwTvU[y45qKVFC1Rz] = WcZjkwTvU[A9XS4HaOZe -ItDxLUrXf];
            WcZjkwTvU[A9XS4HaOZe -ItDxLUrXf] = f0t6fkHCY9;
        }
        if (ItDxLUrXf != A9XS4HaOZe) {
            printf ("%d,", WcZjkwTvU[A9XS4HaOZe -ItDxLUrXf]);
        }
        if (ItDxLUrXf == A9XS4HaOZe) {
            printf ("%d", WcZjkwTvU[A9XS4HaOZe -ItDxLUrXf]);
        }
    }
    return 0;
}

