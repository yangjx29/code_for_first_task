void  main () {
    char HEdIgS [(295 - 195)];
    char UQUfKJ [(785 - 685)];
    gets (UQUfKJ);
    char *LtgyKFuM6i;
    char *hZKHYT;
    int ovP5gwypRBJ;
    char v8XowS6IEA2 [(697 - 597)] = {(852 - 852)};
    puts (v8XowS6IEA2);
    char *p;
    char *vwNDFjBnQ0W;
    gets (HEdIgS);
    char a3e5a1YbiS [(113 - 13)];
    gets (a3e5a1YbiS);
    p = UQUfKJ;
    LtgyKFuM6i = HEdIgS;
    ovP5gwypRBJ = (101 - 101);
    for (; p < UQUfKJ +strlen (UQUfKJ);) {
        LtgyKFuM6i = HEdIgS;
        for (; *p++ != HEdIgS[(664 - 664)];)
            ;
        vwNDFjBnQ0W = p - (571 - 570);
        if (vwNDFjBnQ0W != UQUfKJ &&*(vwNDFjBnQ0W - (66 - 65)) != ' ')
            continue;
        p--;
        for (; *LtgyKFuM6i&&*p++ == *LtgyKFuM6i++;)
            ;
        if ((!(' ' != *p) || !((203 - 203) != *p)) && *LtgyKFuM6i == (38 - 38))
            ovP5gwypRBJ = 1;
        if (ovP5gwypRBJ) {
            hZKHYT = p;
            v8XowS6IEA2[(797 - 797)] = (445 - 445);
            strncpy (v8XowS6IEA2, UQUfKJ, vwNDFjBnQ0W - UQUfKJ);
            v8XowS6IEA2[vwNDFjBnQ0W - UQUfKJ] = 0;
            strcat (v8XowS6IEA2, a3e5a1YbiS);
            strcat (v8XowS6IEA2, hZKHYT);
            strcpy (UQUfKJ, v8XowS6IEA2);
            p = UQUfKJ;
        }
    }
    if (!ovP5gwypRBJ) {
        puts (UQUfKJ);
        exit (0);
    }
}

