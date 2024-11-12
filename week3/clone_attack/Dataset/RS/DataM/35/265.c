int main () {
    int D8cRJG0Xy;
    int sWvTuSIi9n;
    int fIjo3X0QiH [(417 - 409)] [(477 - 469)];
    int euRWgT60A [(867 - 859)];
    int gvFZYR [(955 - 947)];
    int gQE0ctza3veL;
    int CEcLTk;
    scanf ("%d,%d", &D8cRJG0Xy, &sWvTuSIi9n);
    {
        gQE0ctza3veL = 839 - 839;
        while (D8cRJG0Xy > gQE0ctza3veL) {
            for (CEcLTk = (659 - 659); sWvTuSIi9n > CEcLTk; CEcLTk = CEcLTk +1)
                scanf ("%d", &fIjo3X0QiH[gQE0ctza3veL][CEcLTk]);
            gQE0ctza3veL = gQE0ctza3veL + 1;
        };
    }
    for (gQE0ctza3veL = (551 - 551); gQE0ctza3veL < D8cRJG0Xy; gQE0ctza3veL = gQE0ctza3veL + 1) {
        euRWgT60A[gQE0ctza3veL] = fIjo3X0QiH[gQE0ctza3veL][(589 - 589)];
        for (CEcLTk = (621 - 620); sWvTuSIi9n > CEcLTk; CEcLTk = CEcLTk +1)
            if (euRWgT60A[gQE0ctza3veL] < fIjo3X0QiH[gQE0ctza3veL][CEcLTk])
                euRWgT60A[gQE0ctza3veL] = fIjo3X0QiH[gQE0ctza3veL][CEcLTk];
    }
    for (CEcLTk = (659 - 659); CEcLTk < sWvTuSIi9n; CEcLTk = CEcLTk +1) {
        gvFZYR[CEcLTk] = fIjo3X0QiH[(961 - 961)][CEcLTk];
        for (gQE0ctza3veL = (831 - 830); gQE0ctza3veL < D8cRJG0Xy; gQE0ctza3veL++)
            if (fIjo3X0QiH[gQE0ctza3veL][CEcLTk] < gvFZYR[CEcLTk])
                gvFZYR[CEcLTk] = fIjo3X0QiH[gQE0ctza3veL][CEcLTk];
    }
    for (gQE0ctza3veL = (576 - 576); gQE0ctza3veL < D8cRJG0Xy; gQE0ctza3veL++)
        for (CEcLTk = (474 - 474); CEcLTk < sWvTuSIi9n; CEcLTk = CEcLTk +1)
            if (euRWgT60A[gQE0ctza3veL] == gvFZYR[CEcLTk]) {
                printf ("%d+%d", gQE0ctza3veL, CEcLTk);
                return (986 - 986);
            }
    printf ("No");
    return (416 - 416);
}

