int main () {
    int vSWrUfqt1n;
    int UyL4mlS [200] [200];
    int gjxzuCBYh;
    int FPSmkxJeAOC;
    int cbyrG5cUd;
    int Mz6DfFw;
    int Fto7zTgY4R;
    int FRu4e3xTPn;
    int Vln30b9u2;
    int lK5GkM;
    gjxzuCBYh = 0;
    scanf ("%d", &lK5GkM);
    getchar ();
    scanf ("%d", &vSWrUfqt1n);
    {
        FPSmkxJeAOC = 0;
        while (FPSmkxJeAOC < lK5GkM) {
            {
                cbyrG5cUd = 0;
                while (vSWrUfqt1n > cbyrG5cUd) {
                    scanf ("%d", &UyL4mlS[FPSmkxJeAOC][cbyrG5cUd]);
                    cbyrG5cUd = cbyrG5cUd + 1;
                }
            }
            FPSmkxJeAOC++;
        }
    }
    {
        Vln30b9u2 = 0;
        while (lK5GkM > Vln30b9u2) {
            Mz6DfFw = UyL4mlS[Vln30b9u2][0];
            Fto7zTgY4R = 0;
            {
                cbyrG5cUd = 0;
                while (vSWrUfqt1n > cbyrG5cUd) {
                    if (UyL4mlS[Vln30b9u2][cbyrG5cUd] > Mz6DfFw) {
                        Mz6DfFw = UyL4mlS[Vln30b9u2][cbyrG5cUd];
                        Fto7zTgY4R = cbyrG5cUd;
                    }
                    cbyrG5cUd++;
                }
            }
            FRu4e3xTPn = UyL4mlS[0][Fto7zTgY4R];
            {
                FPSmkxJeAOC = 0;
                while (lK5GkM > FPSmkxJeAOC) {
                    if (UyL4mlS[FPSmkxJeAOC][Fto7zTgY4R] < FRu4e3xTPn) {
                        FRu4e3xTPn = UyL4mlS[FPSmkxJeAOC][Fto7zTgY4R];
                    }
                    FPSmkxJeAOC++;
                }
            }
            if (FRu4e3xTPn == Mz6DfFw) {
                printf ("%d+%d\n", Vln30b9u2, Fto7zTgY4R);
                gjxzuCBYh = gjxzuCBYh + 1;
            }
            Vln30b9u2++;
        }
    }
    if (gjxzuCBYh == 0) {
    }
    return 0;
}

