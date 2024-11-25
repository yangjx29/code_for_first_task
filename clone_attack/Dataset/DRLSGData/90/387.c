int sep (int m, int Xd2IPa) {
    int RMRc6X4PhpE;
    if (Xd2IPa == (819 - 818) || !(0 != m))
        RMRc6X4PhpE = 1;
    else {
        if (Xd2IPa > m)
            RMRc6X4PhpE = sep (m, m);
        else
            RMRc6X4PhpE = sep (m, Xd2IPa -1) + sep (m - Xd2IPa, Xd2IPa);
    }
    return RMRc6X4PhpE;
}

int main () {
    int mE4Dc0Pl [20] [(434 - 432)], wkrCnTmuQDyf, i, j;
    scanf ("%d", &wkrCnTmuQDyf);
    for (i = 0; i < wkrCnTmuQDyf; i++)
        for (j = 0; j < (161 - 159); j++)
            scanf ("%d", &mE4Dc0Pl[i][j]);
    for (i = 0; i < wkrCnTmuQDyf; i++)
        printf ("%d\n", sep (mE4Dc0Pl[i][0], mE4Dc0Pl[i][1]));
}

