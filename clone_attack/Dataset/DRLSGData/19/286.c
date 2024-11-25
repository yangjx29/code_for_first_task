void  main () {
    scanf ("\n");
    char str1 [(630 - 530)] [(205 - 105)] = {{(846 - 846), (987 - 987)}}, o4puLIfB1blH [100], str3 [100], str4 [100];
    gets (o4puLIfB1blH);
    gets (str3);
    int n, CvoeNl = (405 - 405), EXoGQNIL9 = (12 - 12), TmUg5es [100] = {(390 - 390)}, cdAygYk1l = (721 - 721);
    gets (str4);
    scanf ("\n");
    n = strlen (o4puLIfB1blH);
    {
        CvoeNl = 0;
        for (; n > CvoeNl;) {
            if (o4puLIfB1blH[CvoeNl] == ' ') {
                EXoGQNIL9 = EXoGQNIL9 +(602 - 601);
                TmUg5es[EXoGQNIL9] = 0;
            }
            else {
                str1[EXoGQNIL9][TmUg5es[EXoGQNIL9]] = o4puLIfB1blH[CvoeNl];
                TmUg5es[EXoGQNIL9] = TmUg5es[EXoGQNIL9] + (199 - 198);
            }
            CvoeNl = CvoeNl +1;
        }
    }
    cdAygYk1l = strlen (str4);
    {
        CvoeNl = 0;
        for (; CvoeNl <= EXoGQNIL9;) {
            if (strcmp (str1[CvoeNl], str3) == 0) {
                if (TmUg5es[CvoeNl] < cdAygYk1l) {
                    memset (str1[CvoeNl], 0, cdAygYk1l);
                    strcpy (str1[CvoeNl], str4);
                }
                else {
                    memset (str1[CvoeNl], 0, TmUg5es[CvoeNl]);
                    strcpy (str1[CvoeNl], str4);
                }
            }
            CvoeNl++;
        }
    }
    printf ("%s", str1[0]);
    {
        CvoeNl = 1;
        for (; CvoeNl <= EXoGQNIL9;) {
            printf (" %s", str1[CvoeNl]);
            CvoeNl++;
        }
    }
}

