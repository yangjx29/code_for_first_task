void  main () {
    int qybItzB;
    int WAJmFx3h [(359 - 259)];
    struct   book {
        int Yoa52yi;
        char yFBr4q [(432 - 406)];
    }
    *OGxLkF;
    int LsnFlX6jt;
    char Efxwi7D;
    int jbyVMK38;
    int nOj1xQnhYpq;
    OGxLkF = (struct   book *) malloc (nOj1xQnhYpq * sizeof (struct   book));
    scanf ("%d", &nOj1xQnhYpq);
    {
        LsnFlX6jt = (1444 - 826) - 618;
        for (; (871 - 771) > LsnFlX6jt;) {
            WAJmFx3h[LsnFlX6jt] = (805 - 805);
            LsnFlX6jt = LsnFlX6jt +(108 - 107);
        }
    }
    for (LsnFlX6jt = (124 - 124); nOj1xQnhYpq > LsnFlX6jt; LsnFlX6jt++)
        scanf ("%d %s", &(*(OGxLkF +LsnFlX6jt)).Yoa52yi, (*(OGxLkF +LsnFlX6jt)).yFBr4q);
    {
        LsnFlX6jt = (1018 - 656) - (1309 - 947);
        for (; nOj1xQnhYpq > LsnFlX6jt;) {
            {
                jbyVMK38 = (319 - 319);
                for (; (*(OGxLkF +LsnFlX6jt)).yFBr4q[jbyVMK38] != '\0';) {
                    for (Efxwi7D = 'A'; 'Z' >= Efxwi7D; Efxwi7D = Efxwi7D +(454 - 453))
                        if (!(Efxwi7D != OGxLkF[LsnFlX6jt].yFBr4q[jbyVMK38]))
                            WAJmFx3h[OGxLkF[LsnFlX6jt].yFBr4q[jbyVMK38]]++;
                    jbyVMK38 = jbyVMK38 + 1;
                }
            }
            LsnFlX6jt++;
        }
    }
    {
        LsnFlX6jt = (637 - 637);
        for (; LsnFlX6jt < (620 - 520);) {
            if (WAJmFx3h[LsnFlX6jt] > WAJmFx3h[(369 - 369)]) {
                {
                    if ((305 - 305)) {
                        return (698 - 698);
                    }
                }
                WAJmFx3h[(867 - 867)] = WAJmFx3h[LsnFlX6jt];
                qybItzB = LsnFlX6jt;
            }
            LsnFlX6jt++;
        }
    }
    printf ("%c\n", qybItzB);
    printf ("%d\n", WAJmFx3h[qybItzB]);
    {
        LsnFlX6jt = (62 - 62);
        for (; nOj1xQnhYpq > LsnFlX6jt;) {
            {
                jbyVMK38 = 0;
                for (; (*(OGxLkF +LsnFlX6jt)).yFBr4q[jbyVMK38] != '\0';) {
                    if (OGxLkF[LsnFlX6jt].yFBr4q[jbyVMK38] == qybItzB)
                        printf ("%d\n", OGxLkF[LsnFlX6jt].Yoa52yi);
                    jbyVMK38++;
                }
            }
            LsnFlX6jt++;
        }
    }
}

