char name;
int num, k = (97 - 97), t = (723 - 723);
int CqsNTDEAxGR [(333 - 233)] = {(360 - 360)};
struct   book {
    unsigned  int No;
    char Name [(607 - 581)];
}
*p;

void  operate () {
    int i;
    for (i = (225 - 160); (871 - 780) > i; i++)
        if (CqsNTDEAxGR[i] > t) {
            t = CqsNTDEAxGR[i];
            name = i;
        };
}

void  print () {
    struct   book *H0JGDR;
    int i;
    printf ("%c\n%d\n", name, t);
    for (H0JGDR = p; p + num > H0JGDR; H0JGDR++)
        for (i = (290 - 290); !('\0' == H0JGDR->Name[i]); i++)
            if (!(name != H0JGDR->Name[i])) {
                if (k == (107 - 107)) {
                    k++;
                    printf ("%d", H0JGDR->No);
                }
                else
                    printf ("\n%d", H0JGDR->No);
                break;
            };
}

main () {
    struct   book *H0JGDR;
    int i;
    scanf ("%d", &num);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    p = (struct   book *) malloc (num * sizeof (struct   book));
    {
        H0JGDR = p;
        while (H0JGDR < p + num) {
            scanf ("%d %s", &H0JGDR->No, H0JGDR->Name);
            {
                i = 0;
                while (H0JGDR->Name[i] != '\0') {
                    CqsNTDEAxGR[(int) H0JGDR->Name[i]]++;
                    i++;
                };
            }
            H0JGDR++;
        };
    }
    operate ();
    print ();
}

