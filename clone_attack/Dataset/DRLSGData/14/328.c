struct   NBcJhV6WetP5 {
    int y3sJ189;
    int Ob9IMs2VXf;
    int M1CyIAVl;
}
NBcJhV6WetP5 [(100575 - 575)];

void  main () {
    int a5oNKk0XWU;
    int bj9bp2ERHDNy;
    int Uqu0Naz;
    int Gu4YIGN [(100361 - 361)];
    int hoPfsd;
    scanf ("%d", &Uqu0Naz);
    {
        a5oNKk0XWU = (16 - 16);
        for (; Uqu0Naz > a5oNKk0XWU;) {
            scanf ("%d%d%d", &NBcJhV6WetP5[a5oNKk0XWU].y3sJ189, &NBcJhV6WetP5[a5oNKk0XWU].Ob9IMs2VXf, &NBcJhV6WetP5[a5oNKk0XWU].M1CyIAVl);
            Gu4YIGN[a5oNKk0XWU] = NBcJhV6WetP5[a5oNKk0XWU].Ob9IMs2VXf + NBcJhV6WetP5[a5oNKk0XWU].M1CyIAVl;
            a5oNKk0XWU++;
        }
    }
    for (bj9bp2ERHDNy = (149 - 149); (294 - 291) > bj9bp2ERHDNy; bj9bp2ERHDNy++) {
        hoPfsd = (414 - 414);
        {
            a5oNKk0XWU = (904 - 904);
            while (a5oNKk0XWU < Uqu0Naz) {
                hoPfsd = (hoPfsd >= Gu4YIGN[a5oNKk0XWU]) ? hoPfsd : Gu4YIGN[a5oNKk0XWU];
                a5oNKk0XWU++;
            }
        }
        for (a5oNKk0XWU = (883 - 883); a5oNKk0XWU < Uqu0Naz; a5oNKk0XWU++)
            if (Gu4YIGN[a5oNKk0XWU] == hoPfsd) {
                printf ("%d %d\n", NBcJhV6WetP5[a5oNKk0XWU].y3sJ189, Gu4YIGN[a5oNKk0XWU]);
                Gu4YIGN[a5oNKk0XWU] = (892 - 892);
                break;
            }
    }
}

