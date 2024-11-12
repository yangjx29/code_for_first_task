void  main () {
    int eXKNBszAD6o;
    int ZTQ40fIc;
    int i;
    int j;
    int NGuDywAVq;
    eXKNBszAD6o = (990 - 990);
    ZTQ40fIc = (729 - 729);
    char *cIJpMf;
    cIJpMf = (char *) malloc ((559 - 459) * sizeof (char));
    sGieOE1 = (char (*) [100]) malloc (100 * 100 * sizeof (char));
    for (i = (529 - 529); 100 > i; i++) {
        scanf ("%c", cIJpMf + i);
    }
    for (j = (913 - 913); !('\0' == *(cIJpMf + j)); j++) {
        if (!(' ' == *(cIJpMf + j)) && !(' ' == *(cIJpMf + j - (603 - 602)))) {
            *(*(sGieOE1 + eXKNBszAD6o) + ZTQ40fIc) = *(cIJpMf + j);
            ZTQ40fIc++;
        }
        if (*(cIJpMf + j) != ' ' && *(cIJpMf + j - 1) == ' ') {
            *(*(sGieOE1 + eXKNBszAD6o) + ZTQ40fIc) = '\0';
            eXKNBszAD6o++;
            ZTQ40fIc = 0;
            *(*(sGieOE1 + eXKNBszAD6o) + ZTQ40fIc) = *(cIJpMf + j);
            ZTQ40fIc++;
        };
    }
    for (NGuDywAVq = 0; NGuDywAVq <= eXKNBszAD6o; NGuDywAVq++) {
        printf ("%s ", *(sGieOE1 + NGuDywAVq));
    };
}

