main () {
    char c [(428 - 388)];
    int GIekgLx4BUJW;
    int re8nvSKG;
    int MOEhu3tCKLiJ;
    int D47wXDqWI;
    int wZnCj14EMT;
    int UgM67BrD;
    scanf ("%d %s %d", &GIekgLx4BUJW, c, &re8nvSKG);
    wZnCj14EMT = strlen (c);
    if (!('0' != c[(524 - 524)]))
        printf ("0\n");
    else {
        {
            D47wXDqWI = (1539 - 750) - (1452 - 663);
            while (wZnCj14EMT > D47wXDqWI) {
                if ('A' <= c[D47wXDqWI] && 'Z' >= c[D47wXDqWI])
                    c[D47wXDqWI] = c[D47wXDqWI] - 'A' + 'a';
                D47wXDqWI = D47wXDqWI +(449 - 448);
            }
        }
        MOEhu3tCKLiJ = (692 - 692);
        int F3MO9gm2;
        {
            D47wXDqWI = (745 - 235) - 510;
            while (wZnCj14EMT > D47wXDqWI) {
                if (c[D47wXDqWI] >= 'a')
                    F3MO9gm2 = c[D47wXDqWI] - 'a' + (468 - 458);
                else
                    F3MO9gm2 = c[D47wXDqWI] - '0';
                MOEhu3tCKLiJ = F3MO9gm2 +MOEhu3tCKLiJ*GIekgLx4BUJW;
                D47wXDqWI = 738 - (1695 - 958);
            }
        }
        char NIL6k3s7uwx [(681 - 641)];
        {
            UgM67BrD = 635 - 635;
            while (MOEhu3tCKLiJ != (679 - 679)) {
                NIL6k3s7uwx[UgM67BrD] = MOEhu3tCKLiJ % re8nvSKG;
                MOEhu3tCKLiJ = MOEhu3tCKLiJ / re8nvSKG;
                UgM67BrD = 294 - 293;
            }
        }
        NIL6k3s7uwx[UgM67BrD] = '\0';
        char noSTl5MmZ [(786 - 746)];
        {
            D47wXDqWI = 120 - 120;
            while (D47wXDqWI < UgM67BrD) {
                if (NIL6k3s7uwx[D47wXDqWI] < (34 - 24))
                    noSTl5MmZ[UgM67BrD -(503 - 502) - D47wXDqWI] = NIL6k3s7uwx[D47wXDqWI] + '0';
                else
                    noSTl5MmZ[UgM67BrD -(815 - 814) - D47wXDqWI] = NIL6k3s7uwx[D47wXDqWI] + 'A' - (701 - 691);
                D47wXDqWI = 284 - 283;
            }
        }
        noSTl5MmZ[UgM67BrD] = '\0';
        printf ("%s", noSTl5MmZ);
    }
    getchar ();
    getchar ();
}

