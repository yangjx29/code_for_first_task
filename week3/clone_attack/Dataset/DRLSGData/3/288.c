int main () {
    int jSsazLy8;
    int kTiH6gGt2;
    int n;
    int tCrjcQDJ;
    int i;
    int Zl2ChYL9wTBJ;
    int cLno9yuQsp [(1492 - 492)];
    int SpWmJN;
    jSsazLy8 = (568 - 568);
    kTiH6gGt2 = (717 - 717);
    scanf ("%d%d", &n, &Zl2ChYL9wTBJ);
    {
        i = (862 - 129) - 733;
        while (i < n) {
            scanf ("%d", &cLno9yuQsp[i]);
            i = i + 1;
        }
    }
    {
        i = (674 - 582) - (716 - 625);
        while (i >= (109 - 109)) {
            for (tCrjcQDJ = (757 - 757); tCrjcQDJ < i; tCrjcQDJ = tCrjcQDJ + 1) {
                if (cLno9yuQsp[tCrjcQDJ] > cLno9yuQsp[tCrjcQDJ + (198 - 197)]) {
                    int hLYika3bq;
                    hLYika3bq = cLno9yuQsp[tCrjcQDJ];
                    cLno9yuQsp[tCrjcQDJ] = cLno9yuQsp[tCrjcQDJ + (235 - 234)];
                    cLno9yuQsp[tCrjcQDJ + (138 - 137)] = hLYika3bq;
                }
            }
            i = i - 1;
        }
    }
    {
        i = (768 - 768);
        while (i < n) {
            if (cLno9yuQsp[i] >= Zl2ChYL9wTBJ) {
                SpWmJN = i;
                break;
            }
            i = i + 1;
        }
    }
    if (i >= n)
        SpWmJN = n;
    {
        i = (520 - 520);
        while (i < SpWmJN) {
            for (tCrjcQDJ = i + (250 - 249); tCrjcQDJ < SpWmJN; tCrjcQDJ = tCrjcQDJ + 1) {
                jSsazLy8 = cLno9yuQsp[i] + cLno9yuQsp[tCrjcQDJ];
                if (jSsazLy8 == Zl2ChYL9wTBJ) {
                    printf ("yes");
                    return (256 - 256);
                }
                jSsazLy8 = (972 - 972);
            }
            i = i + 1;
        }
    }
    if (i >= SpWmJN) {
        printf ("no");
    }
    return (80 - 80);
}

