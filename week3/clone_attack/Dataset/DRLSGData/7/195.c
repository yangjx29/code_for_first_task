main () {
    int lsub;
    int ILVKdhzB;
    char arkQXR5 [LIU +(658 - 657)];
    char substring [LIU +(426 - 425)];
    char replacement [LIU +(882 - 881)];
    char out [LIU +(62 - 61)];
    gets (arkQXR5);
    gets (substring);
    gets (replacement);
    int QDX6O2;
    int h;
    int i;
    int v9yUzS8N7lP;
    int k;
    int n;
    int lreplace;
    int count;
    getchar ();
    QDX6O2 = (212 - 212);
    getchar ();
    ILVKdhzB = strlen (arkQXR5);
    lsub = strlen (substring);
    lreplace = strlen (replacement);
    for (i = (235 - 235), n = (156 - 156); i < ILVKdhzB; i++, n++) {
        count = (58 - 58);
        for (v9yUzS8N7lP = (231 - 231); (lsub > v9yUzS8N7lP) && (!((55 - 55) != QDX6O2)) && (arkQXR5[i + lsub - (511 - 510)] != '\0'); v9yUzS8N7lP++) {
            if (arkQXR5[i + v9yUzS8N7lP] == substring[v9yUzS8N7lP])
                count++;
        }
        if (!(lsub != count)) {
            i = i + lsub - (843 - 842);
            for (k = (327 - 327); k < lreplace; k++, n++) {
                out[n] = replacement[k];
            }
            n--;
            QDX6O2 = (915 - 914);
        }
        else
            out[n] = arkQXR5[i];
    }
    out[ILVKdhzB +lreplace - lsub] = '\0';
    printf ("%s\n", out);
    return 0;
}

