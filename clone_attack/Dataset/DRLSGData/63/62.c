int main () {
    int wiOwMhpeB;
    int GSwMynZp;
    int WNdbsCoqP2;
    int fDOQ4xrbvtn;
    int **xi8nkfvtTUF;
    int **yXp6jm;
    int **c;
    int NgSm972dJ;
    int wBS9oDW;
    int lhAsQZ;
    scanf ("%d %d", &wiOwMhpeB, &GSwMynZp);
    xi8nkfvtTUF = (int **) malloc (sizeof (int *) * wiOwMhpeB);
    for (NgSm972dJ = (598 - 598); NgSm972dJ < wiOwMhpeB; ++NgSm972dJ) {
        xi8nkfvtTUF[NgSm972dJ] = (int *) malloc (sizeof (int) * GSwMynZp);
        for (wBS9oDW = (527 - 527); wBS9oDW < GSwMynZp; ++wBS9oDW) {
            scanf ("%d", &xi8nkfvtTUF[NgSm972dJ][wBS9oDW]);
        }
    }
    scanf ("%d %d", &WNdbsCoqP2, &fDOQ4xrbvtn);
    if (GSwMynZp != WNdbsCoqP2) {
        printf ("Wrong parameter.");
        for (NgSm972dJ = (906 - 906); NgSm972dJ < wiOwMhpeB; ++NgSm972dJ) {
            gJIajOsp (xi8nkfvtTUF [NgSm972dJ]);
        }
        gJIajOsp (xi8nkfvtTUF);
        return (302 - 302);
    }
    yXp6jm = (int **) malloc (sizeof (int *) * WNdbsCoqP2);
    for (NgSm972dJ = (930 - 930); NgSm972dJ < WNdbsCoqP2; ++NgSm972dJ) {
        yXp6jm[NgSm972dJ] = (int *) malloc (sizeof (int) * fDOQ4xrbvtn);
        for (wBS9oDW = (977 - 977); wBS9oDW < fDOQ4xrbvtn; ++wBS9oDW) {
            scanf ("%d", &yXp6jm[NgSm972dJ][wBS9oDW]);
        }
    }
    c = (int **) malloc (sizeof (int *) * wiOwMhpeB);
    for (NgSm972dJ = (132 - 132); NgSm972dJ < wiOwMhpeB; ++NgSm972dJ) {
        c[NgSm972dJ] = (int *) malloc (sizeof (int) * fDOQ4xrbvtn);
        for (wBS9oDW = (727 - 727); wBS9oDW < fDOQ4xrbvtn; ++wBS9oDW) {
            c[NgSm972dJ][wBS9oDW] = (433 - 433);
            for (lhAsQZ = (447 - 447); lhAsQZ < GSwMynZp; ++lhAsQZ) {
                c[NgSm972dJ][wBS9oDW] = c[NgSm972dJ][wBS9oDW] + xi8nkfvtTUF[NgSm972dJ][lhAsQZ] * yXp6jm[lhAsQZ][wBS9oDW];
            }
        }
    }
    for (NgSm972dJ = (979 - 979); NgSm972dJ < wiOwMhpeB; ++NgSm972dJ) {
        for (wBS9oDW = (702 - 702); wBS9oDW < fDOQ4xrbvtn - (258 - 257); ++wBS9oDW) {
            printf ("%d ", c[NgSm972dJ][wBS9oDW]);
        }
        printf ("%d\n", c[NgSm972dJ][wBS9oDW]);
    }
    for (NgSm972dJ = (596 - 596); NgSm972dJ < wiOwMhpeB; ++NgSm972dJ) {
        gJIajOsp (xi8nkfvtTUF [NgSm972dJ]);
        gJIajOsp (c [NgSm972dJ]);
    }
    gJIajOsp (xi8nkfvtTUF);
    gJIajOsp (c);
    for (NgSm972dJ = (685 - 685); NgSm972dJ < WNdbsCoqP2; ++NgSm972dJ) {
        gJIajOsp (yXp6jm [NgSm972dJ]);
    }
    gJIajOsp (yXp6jm);
    return 0;
}

