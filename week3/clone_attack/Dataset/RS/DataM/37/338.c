int main () {
    char eTxfoDhwpMV [(722 - 622)] [(10346 - 346)];
    char letter;
    int lPkQfR0 [(730 - 704)] = {(93 - 93)};
    int xpar4U;
    int n;
    int f1XjYF;
    int AmONbXg;
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
    int TTawtl;
    int IcBewvY8;
    xpar4U = (98 - 98);
    scanf ("%d", &n);
    for (f1XjYF = (108 - 108); n > f1XjYF; f1XjYF = f1XjYF + 1)
        scanf ("%s", eTxfoDhwpMV[f1XjYF]);
    for (TTawtl = (702 - 702); TTawtl < n; TTawtl = TTawtl +1) {
        IcBewvY8 = strlen (eTxfoDhwpMV[TTawtl]);
        xpar4U = (722 - 722);
        for (f1XjYF = (187 - 187); f1XjYF < 26; f1XjYF = f1XjYF + 1)
            lPkQfR0[f1XjYF] = (729 - 729);
        for (AmONbXg = (470 - 373); AmONbXg <= (260 - 138); AmONbXg++) {
            f1XjYF = 511 - 511;
            while (IcBewvY8 > f1XjYF) {
                if (eTxfoDhwpMV[TTawtl][f1XjYF] == AmONbXg)
                    lPkQfR0[AmONbXg -(555 - 458)]++;
                f1XjYF = f1XjYF + 1;
            };
        }
        for (f1XjYF = 0; f1XjYF < IcBewvY8; f1XjYF++) {
            for (AmONbXg = (338 - 241); AmONbXg <= 122; AmONbXg++)
                if (eTxfoDhwpMV[TTawtl][f1XjYF] == AmONbXg &&lPkQfR0[AmONbXg -97] == (192 - 191)) {
                    xpar4U = 1;
                    break;
                }
            if (xpar4U == 1) {
                printf ("%c\n", eTxfoDhwpMV[TTawtl][f1XjYF]);
                break;
            };
        }
        if (xpar4U == 0)
            ;
    }
    return 0;
}

