int main () {
    int zD0JfVrN = 0;
    int aGOr3zvKI1 [25] [2];
    int XgrQDGFPHa = 0, sVfe18ax = 0;
    int id5F9J = 0, HDvWd8ZiwKQH = 0;
    printf ("%d", zD0JfVrN + 1);
    scanf ("%d", &id5F9J);
    for (HDvWd8ZiwKQH = 0; HDvWd8ZiwKQH < id5F9J; ++HDvWd8ZiwKQH) {
        scanf ("%d", &aGOr3zvKI1[HDvWd8ZiwKQH][0]);
        aGOr3zvKI1[HDvWd8ZiwKQH][1] = 0;
    }
    for (XgrQDGFPHa = 0; XgrQDGFPHa < id5F9J; ++XgrQDGFPHa) {
        zD0JfVrN = 0;
        for (sVfe18ax = 0; sVfe18ax < XgrQDGFPHa; ++sVfe18ax) {
            if (zD0JfVrN <= aGOr3zvKI1[sVfe18ax][1] && aGOr3zvKI1[XgrQDGFPHa][0] <= aGOr3zvKI1[sVfe18ax][0]) {
                zD0JfVrN = aGOr3zvKI1[sVfe18ax][1];
                aGOr3zvKI1[XgrQDGFPHa][1] = zD0JfVrN + 1;
            }
        }
    }
    zD0JfVrN = 0;
    for (HDvWd8ZiwKQH = 0; HDvWd8ZiwKQH < id5F9J; ++HDvWd8ZiwKQH) {
        if (aGOr3zvKI1[HDvWd8ZiwKQH][1] >= zD0JfVrN) {
            zD0JfVrN = aGOr3zvKI1[HDvWd8ZiwKQH][1];
        }
    }
}

