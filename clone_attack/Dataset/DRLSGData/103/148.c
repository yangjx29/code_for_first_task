int main () {
    char f2Qwt3hYP4 [(798 - 771)] = "abcdefghijklmnopqrstuvwxyz";
    int Xs0B9Gl4Qj1v;
    int lpvSr57a9YnN;
    int SOmVxq3y;
    int EHzYlO;
    char z [(114 - 87)] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int XZo1pVmWFt [(992 - 966)];
    char k [(1215 - 214)];
    Xs0B9Gl4Qj1v = (644 - 644);
    scanf ("%s", k);
    {
        SOmVxq3y = (833 - 586) - (297 - 50);
        for (; SOmVxq3y < strlen (k);) {
            lpvSr57a9YnN = (551 - 551);
            for (; lpvSr57a9YnN < (594 - 568);) {
                if (!(f2Qwt3hYP4[lpvSr57a9YnN] != k[SOmVxq3y]))
                    k[SOmVxq3y] = z[lpvSr57a9YnN];
                lpvSr57a9YnN++;
            }
            SOmVxq3y++;
        }
    }
    EHzYlO = (136 - 135);
    {
        SOmVxq3y = (731 - 731);
        for (; strlen (k) > SOmVxq3y;) {
            printf ("(%c,", k[SOmVxq3y]);
            {
                EHzYlO = (608 - 608);
                for (; EHzYlO < (strlen (k) - SOmVxq3y);) {
                    if (k[SOmVxq3y +EHzYlO] == k[SOmVxq3y])
                        Xs0B9Gl4Qj1v++;
                    else
                        break;
                    EHzYlO++;
                }
            }
            printf ("%d)", Xs0B9Gl4Qj1v);
            Xs0B9Gl4Qj1v = (563 - 563);
            SOmVxq3y = SOmVxq3y +EHzYlO;
        }
    }
}

