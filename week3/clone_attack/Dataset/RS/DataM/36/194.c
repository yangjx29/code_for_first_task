void  main () {
    char G2bS0HgJYaKR [40];
    char wnsSfxK4zJj [40];
    char wB7kPGTy;
    int i, j, IfW3KzT, cEgvoxXlQ, aPlnGH48cT = 0;
    scanf ("%s%s", &G2bS0HgJYaKR, &wnsSfxK4zJj);
    IfW3KzT = strlen (G2bS0HgJYaKR);
    cEgvoxXlQ = strlen (wnsSfxK4zJj);
    if (!(cEgvoxXlQ != IfW3KzT)) {
        for (i = 0; i < IfW3KzT; i = i + 1) {
            for (j = 0; i >= j; j = j + 1) {
                if (G2bS0HgJYaKR[i] < G2bS0HgJYaKR[j]) {
                    wB7kPGTy = G2bS0HgJYaKR[j];
                    G2bS0HgJYaKR[j] = G2bS0HgJYaKR[i];
                    G2bS0HgJYaKR[i] = wB7kPGTy;
                }
                if (wnsSfxK4zJj[j] > wnsSfxK4zJj[i]) {
                    wB7kPGTy = wnsSfxK4zJj[j];
                    wnsSfxK4zJj[j] = wnsSfxK4zJj[i];
                    wnsSfxK4zJj[i] = wB7kPGTy;
                };
            };
        }
        for (i = 0; i < IfW3KzT; i = i + 1) {
            if (G2bS0HgJYaKR[i] != wnsSfxK4zJj[i]) {
                aPlnGH48cT = 1;
                break;
            };
        }
        if (aPlnGH48cT == 0)
            ;
        else
            ;
    }
    else
        ;
}

