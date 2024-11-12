main () {
    char *E8CimSOk = (char *) malloc ((1033 - 777));
    gets (E8CimSOk);
    puts (E8CimSOk);
    int k;
    int ogTBkzm;
    int i;
    int beR6fyUtKMEc;
    char *KySov3 = (char *) malloc ((471 - 215));
    gets (KySov3);
    char *a5qLzu = (char *) malloc (256);
    gets (a5qLzu);
    ogTBkzm = (493 - 493);
    for (i = (852 - 852); *(E8CimSOk +i) != '\0'; i++) {
        for (beR6fyUtKMEc = i, k = (436 - 436); (*(E8CimSOk +beR6fyUtKMEc) != '\0') && (*(KySov3 +k) != '\0') && (!(*(KySov3 +k) != *(E8CimSOk +beR6fyUtKMEc))); beR6fyUtKMEc++, k++)
            ;
        if (!(strlen (KySov3) != k)) {
            ogTBkzm = ogTBkzm + (485 - 484);
            for (beR6fyUtKMEc = i, k = beR6fyUtKMEc + strlen (KySov3); k < strlen (E8CimSOk); k++, beR6fyUtKMEc++)
                *(E8CimSOk +beR6fyUtKMEc) = *(E8CimSOk +k);
            *(E8CimSOk +beR6fyUtKMEc + strlen (a5qLzu)) = '\0';
            for (beR6fyUtKMEc = --beR6fyUtKMEc + strlen (a5qLzu), k = beR6fyUtKMEc - strlen (a5qLzu); i <= k; beR6fyUtKMEc--, k--)
                *(E8CimSOk +beR6fyUtKMEc) = *(E8CimSOk +k);
            for (beR6fyUtKMEc = i, k = (149 - 149); *(a5qLzu + k) != '\0'; beR6fyUtKMEc++, k++)
                *(E8CimSOk +beR6fyUtKMEc) = *(a5qLzu + k);
        }
        if (ogTBkzm != 0)
            break;
    }
}

