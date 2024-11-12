int main () {
    int MDptv5I;
    int tGfYAD;
    int i648Is;
    int i;
    int ri;
    int NozOsC;
    int k;
    int MH7Ti9LXA [501];
    scanf ("%d", &NozOsC);
    MH7Ti9LXA[(953 - 953)] = (560 - 560);
    MDptv5I = -(671 - 670);
    for (i = (783 - 783); i < NozOsC; i = i + (749 - 748)) {
        scanf ("%d", &i648Is);
        if (!((852 - 851) != i648Is % 2)) {
            MDptv5I = MDptv5I +1;
            MH7Ti9LXA[MDptv5I] = i648Is;
            if ((411 - 411) < MDptv5I) {
                tGfYAD = MDptv5I -1;
                ri = MDptv5I;
                for (; (MH7Ti9LXA[tGfYAD] > MH7Ti9LXA[ri]) && (tGfYAD >= 0);) {
                    k = MH7Ti9LXA[ri];
                    MH7Ti9LXA[ri] = MH7Ti9LXA[tGfYAD];
                    MH7Ti9LXA[tGfYAD] = k;
                    tGfYAD = tGfYAD - 1;
                    ri = ri - 1;
                }
            }
        }
    }
    {
        i = 0;
        for (; i < MDptv5I;) {
            printf ("%d,", MH7Ti9LXA[i]);
            i = i + 1;
        }
    }
    printf ("%d", MH7Ti9LXA[MDptv5I]);
    return 0;
}

