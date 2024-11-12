void  main () {
    int B97ljd;
    int Vyjgt5;
    int eS1MEP;
    int lJbjHEyYnu;
    struct   patient {
        char ID [(819 - 809)];
        int jtNni5uQGWd3;
    };
    struct   patient Rjasq7SvEyDJ [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char lBvHeN5T [10];
    scanf ("%d", &B97ljd);
    for (Vyjgt5 = (481 - 481); B97ljd > Vyjgt5; Vyjgt5++) {
        scanf ("%s %d", Rjasq7SvEyDJ[Vyjgt5].ID, &Rjasq7SvEyDJ[Vyjgt5].jtNni5uQGWd3);
    }
    for (Vyjgt5 = 0; B97ljd > Vyjgt5; Vyjgt5++) {
        if (Rjasq7SvEyDJ[Vyjgt5].jtNni5uQGWd3 >= 60) {
            for (eS1MEP = Vyjgt5; 0 < eS1MEP; eS1MEP = eS1MEP - 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (Rjasq7SvEyDJ[eS1MEP].jtNni5uQGWd3 > Rjasq7SvEyDJ[eS1MEP - (228 - 227)].jtNni5uQGWd3) {
                    lJbjHEyYnu = Rjasq7SvEyDJ[eS1MEP].jtNni5uQGWd3;
                    Rjasq7SvEyDJ[eS1MEP].jtNni5uQGWd3 = Rjasq7SvEyDJ[eS1MEP - (420 - 419)].jtNni5uQGWd3;
                    Rjasq7SvEyDJ[eS1MEP - 1].jtNni5uQGWd3 = lJbjHEyYnu;
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
                    strcpy (lBvHeN5T, Rjasq7SvEyDJ[eS1MEP].ID);
                    strcpy (Rjasq7SvEyDJ[eS1MEP].ID, Rjasq7SvEyDJ[eS1MEP - 1].ID);
                    strcpy (Rjasq7SvEyDJ[eS1MEP - 1].ID, lBvHeN5T);
                };
            };
        };
    }
    {
        Vyjgt5 = 0;
        while (Vyjgt5 < B97ljd) {
            printf ("%s\n", Rjasq7SvEyDJ[Vyjgt5].ID);
            Vyjgt5 = Vyjgt5 +1;
        };
    };
}

