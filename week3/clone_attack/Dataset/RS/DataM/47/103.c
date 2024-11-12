void  main () {
    int *a;
    int i;
    int vn63Px1s70eJ;
    int lBiCLuM;
    int Pzt9435;
    int iHxikEs0l;
    int *OHXmDhL9dsg;
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
    scanf ("%d", &iHxikEs0l);
    a = (int *) malloc (iHxikEs0l * sizeof (int));
    OHXmDhL9dsg = (int *) malloc (iHxikEs0l * sizeof (int));
    printf ("%d", *OHXmDhL9dsg);
    for (i = (462 - 462); iHxikEs0l > i; i = i + 1)
        scanf ("%d", (a + i));
    for (i = iHxikEs0l - 1, vn63Px1s70eJ = 0; -1 < i, vn63Px1s70eJ < iHxikEs0l; i = i - 1, vn63Px1s70eJ = vn63Px1s70eJ + 1)
        *(OHXmDhL9dsg +vn63Px1s70eJ) = *(a + i);
    for (vn63Px1s70eJ = 1; vn63Px1s70eJ < iHxikEs0l; vn63Px1s70eJ++)
        printf (" %d", *(OHXmDhL9dsg +vn63Px1s70eJ));
}

