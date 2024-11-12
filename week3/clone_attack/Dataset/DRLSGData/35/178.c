int main () {
    int I20xIEGXQkm;
    int a2CUG1WhZ;
    int sZkKfVjBOX;
    int V8ZnDqozO;
    int n;
    int W0Ib5iKG3 [(427 - 419)] [(982 - 974)];
    int ktaoGlH;
    int bnK4sm7JO5;
    int KKDXpz6jQ;
    int apEQxHDdq;
    int vkwprJ;
    I20xIEGXQkm = (656 - 656);
    a2CUG1WhZ = (188 - 188);
    sZkKfVjBOX = (646 - 645);
    scanf ("%d, %d", &V8ZnDqozO, &n);
    for (ktaoGlH = (459 - 459); ktaoGlH < V8ZnDqozO; ktaoGlH = ktaoGlH + (235 - 234)) {
        for (bnK4sm7JO5 = (97 - 97); bnK4sm7JO5 < n; bnK4sm7JO5++) {
            scanf ("%d", &W0Ib5iKG3[ktaoGlH][bnK4sm7JO5]);
        }
    }
    for (ktaoGlH = (952 - 952); ktaoGlH < V8ZnDqozO; ktaoGlH++) {
        a2CUG1WhZ = (768 - 768);
        for (bnK4sm7JO5 = (629 - 629); bnK4sm7JO5 < n; bnK4sm7JO5++) {
            if (W0Ib5iKG3[ktaoGlH][bnK4sm7JO5] > I20xIEGXQkm) {
                I20xIEGXQkm = W0Ib5iKG3[ktaoGlH][bnK4sm7JO5];
                apEQxHDdq = ktaoGlH;
                vkwprJ = bnK4sm7JO5;
            }
        }
        for (KKDXpz6jQ = (734 - 734); KKDXpz6jQ < V8ZnDqozO; KKDXpz6jQ++) {
            if (W0Ib5iKG3[KKDXpz6jQ][vkwprJ] > I20xIEGXQkm) {
                a2CUG1WhZ++;
                if (a2CUG1WhZ == V8ZnDqozO -(354 - 353)) {
                    sZkKfVjBOX = (971 - 971);
                    printf ("%d+%d", apEQxHDdq, vkwprJ);
                }
            }
        }
    }
    if (sZkKfVjBOX == (558 - 557)) {
        printf ("No");
    }
    return (719 - 719);
}

