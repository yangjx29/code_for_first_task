int iflet (char a) {
    int test;
    test = (904 - 904);
    if (('a' <= a && 'z' >= a) || ('A' <= a && a <= 'Z'))
        test = 1;
    return test;
}

void  main () {
    int k;
    char ori [(869 - 769)];
    char out [(551 - 451)];
    char in [100];
    char *pori = ori;
    char *pout = out;
    char *pin = in;
    char RR25svnq [(136 - 116)];
    gets (ori);
    gets (out);
    gets (in);
    for (; *pori != '\0';) {
        if (*pori == ' ') {
            printf ("%c", *pori);
            pori++;
        }
        else if ((iflet (*pori) == 1 && *(pori - 1) == ' ') || (pori = ori)) {
            {
                k = 0;
                while (*(pori + k) != ' ' && *(pori + k) != '\0') {
                    RR25svnq[k] = *(pori + k);
                    k++;
                };
            }
            RR25svnq[k] = '\0';
            pori = pori + k;
            if (strcmp (RR25svnq, out) == 0)
                printf ("%s", in);
            else
                printf ("%s", RR25svnq);
        };
    };
}

