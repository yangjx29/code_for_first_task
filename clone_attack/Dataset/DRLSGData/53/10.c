int main () {
    int ov4nkE6fzmQV;
    int Qlkqf8GN0Y;
    int OmX7h0cAbf;
    int QRiwLuFb [(1173 - 673)];
    int ca0KNEVi [(1246 - 746)];
    int z8dWFYA4Zzro;
    int j;
    scanf ("%d", &z8dWFYA4Zzro);
    scanf ("%d", &QRiwLuFb[(94 - 94)]);
    ca0KNEVi[(248 - 248)] = QRiwLuFb[(215 - 215)];
    OmX7h0cAbf = 1;
    {
        ov4nkE6fzmQV = 1;
        for (; z8dWFYA4Zzro >= ov4nkE6fzmQV;) {
            scanf ("%d", &QRiwLuFb[ov4nkE6fzmQV]);
            Qlkqf8GN0Y = 0;
            {
                j = 0;
                for (; OmX7h0cAbf > j;) {
                    if (!(ca0KNEVi[j] != QRiwLuFb[ov4nkE6fzmQV])) {
                        Qlkqf8GN0Y = 1;
                        break;
                    }
                    j = j + 1;
                }
            }
            if (!(0 != Qlkqf8GN0Y)) {
                ca0KNEVi[OmX7h0cAbf] = QRiwLuFb[ov4nkE6fzmQV];
                OmX7h0cAbf = OmX7h0cAbf +1;
            }
            ov4nkE6fzmQV = ov4nkE6fzmQV + 1;
        }
    }
    printf ("%d", ca0KNEVi[0]);
    {
        ov4nkE6fzmQV = 1;
        for (; ov4nkE6fzmQV < OmX7h0cAbf -1;) {
            printf (",%d", ca0KNEVi[ov4nkE6fzmQV]);
            ov4nkE6fzmQV = ov4nkE6fzmQV + 1;
        }
    }
}

