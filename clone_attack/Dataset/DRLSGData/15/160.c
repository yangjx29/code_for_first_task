int main () {
    int u6wZ1yOzB;
    int yFpKe3QmAsH;
    int pOftdK4nEm;
    int s;
    int u3TYfZbog;
    int RsSVkphFwyPG;
    int jTXOxeinWF;
    int OaRBSezGu;
    int jKx84hUgEF;
    OaRBSezGu = 0;
    u6wZ1yOzB = 0;
    jTXOxeinWF = 0;
    scanf ("%d", &pOftdK4nEm);
    yFpKe3QmAsH = 0;
    for (jKx84hUgEF = 1; (pOftdK4nEm + 1) > jKx84hUgEF; jKx84hUgEF = jKx84hUgEF + 1) {
        RsSVkphFwyPG = 1;
        while (RsSVkphFwyPG < (pOftdK4nEm + 1)) {
            scanf ("%d", &u3TYfZbog);
            if ((!(0 != u3TYfZbog)) && (jTXOxeinWF == 0)) {
                jTXOxeinWF = jKx84hUgEF;
                yFpKe3QmAsH = RsSVkphFwyPG;
            }
            if (u3TYfZbog == 0) {
                u6wZ1yOzB = RsSVkphFwyPG;
                OaRBSezGu = jKx84hUgEF;
            }
            RsSVkphFwyPG = RsSVkphFwyPG +1;
        }
    }
    s = (OaRBSezGu -jTXOxeinWF - 1) * (u6wZ1yOzB - yFpKe3QmAsH - 1);
    printf ("%d\n", s);
    return 0;
}

