void  main () {
    int eWF0zg [101];
    int boF1IJ;
    int yhU1Tg8FynV;
    int i;
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
    int IyPtQn;
    char ppTgUIRZ [101];
    for (; gets (ppTgUIRZ);) {
        yhU1Tg8FynV = strlen (ppTgUIRZ);
        for (i = 0; i < 101; i = i + 1)
            eWF0zg[i] = 0;
        for (i = 0; i < yhU1Tg8FynV; i++) {
            if (ppTgUIRZ[i] == '(') {
                boF1IJ = -1;
                for (IyPtQn = i + 1; IyPtQn < yhU1Tg8FynV; IyPtQn++) {
                    if (ppTgUIRZ[IyPtQn] == '(') {
                        boF1IJ = boF1IJ - 1;
                    }
                    if (ppTgUIRZ[IyPtQn] == ')') {
                        boF1IJ = boF1IJ + 1;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!(0 != boF1IJ))
                        break;
                }
                if (boF1IJ < 0)
                    eWF0zg[i] = 1;
            }
            if (ppTgUIRZ[i] == ')') {
                boF1IJ = -1;
                for (IyPtQn = i - 1; IyPtQn >= 0; IyPtQn--) {
                    if (ppTgUIRZ[IyPtQn] == '(') {
                        boF1IJ = boF1IJ + 1;
                    }
                    if (ppTgUIRZ[IyPtQn] == ')') {
                        boF1IJ--;
                    }
                    if (boF1IJ == 0)
                        break;
                }
                if (boF1IJ < 0)
                    eWF0zg[i] = 2;
            };
        }
        for (i = 0; i < yhU1Tg8FynV; i++)
            printf ("%c", ppTgUIRZ[i]);
        for (i = 0; i < yhU1Tg8FynV; i++) {
            if (eWF0zg[i] == 0)
                printf (" ");
            if (eWF0zg[i] == 1)
                printf ("$");
            if (eWF0zg[i] == 2)
                printf ("?");
        };
    };
}

