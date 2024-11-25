int sushu (int x) {
    int KkZyvD2;
    int Vn2Ujexvo6NY;
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
    KkZyvD2 = 1;
    {
        Vn2Ujexvo6NY = 2;
        while (x > Vn2Ujexvo6NY) {
            if (!(0 != x % Vn2Ujexvo6NY)) {
                KkZyvD2 = 0;
            }
            Vn2Ujexvo6NY = Vn2Ujexvo6NY +1;
        };
    }
    return KkZyvD2;
}

int main () {
    int Vn2Ujexvo6NY, j5ylfc, RjcDon, PEPLnbu, KkZyvD2 = 0;
    scanf ("%d", &j5ylfc);
    for (Vn2Ujexvo6NY = 4; Vn2Ujexvo6NY <= j5ylfc; Vn2Ujexvo6NY = Vn2Ujexvo6NY +1) {
        PEPLnbu = Vn2Ujexvo6NY;
        RjcDon = Vn2Ujexvo6NY -2;
        if (sushu (RjcDon) && sushu (PEPLnbu)) {
            printf ("%d %d\n", RjcDon, PEPLnbu);
            KkZyvD2 = 1;
        };
    }
    if (KkZyvD2 == 0) {
        printf ("empty");
    }
    return 0;
}

