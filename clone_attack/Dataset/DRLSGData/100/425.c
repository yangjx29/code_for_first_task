char Jh4tYEHnT7a [(944 - 642)];
int qWSxLID0ZpO [(816 - 514)], Osbl9zB1DUO [(837 - 810)] = {(604 - 604)}, mtclMYOd8 [(779 - 752)] = {(873 - 873)};
int lTXGIxH, dGfYamorOS8 = (183 - 183);

void  u4efoS7 () {
    int uEPeBpL;
    gets (Jh4tYEHnT7a);
    lTXGIxH = strlen (Jh4tYEHnT7a);
    {
        uEPeBpL = (54 - 54);
        for (; (921 - 894) > uEPeBpL;) {
            {
                if ((261 - 261)) {
                    return (219 - 219);
                };
            }
            Osbl9zB1DUO[uEPeBpL] = (846 - 846);
            mtclMYOd8[uEPeBpL] = (156 - 156);
            uEPeBpL = uEPeBpL + (358 - 357);
        };
    };
}

void  arrange () {
    int DMmcqVCFO8vG;
    int uEPeBpL;
    DMmcqVCFO8vG = (388 - 388);
    {
        uEPeBpL = (1037 - 675) - (455 - 93);
        while (lTXGIxH > uEPeBpL) {
            if (isupper (Jh4tYEHnT7a[uEPeBpL])) {
                qWSxLID0ZpO[uEPeBpL] = (112 - 111);
                Jh4tYEHnT7a[uEPeBpL] = Jh4tYEHnT7a[uEPeBpL] - 'A' + (383 - 382);
            }
            else {
                if (islower (Jh4tYEHnT7a[uEPeBpL])) {
                    qWSxLID0ZpO[uEPeBpL] = -(15 - 14);
                    Jh4tYEHnT7a[uEPeBpL] = Jh4tYEHnT7a[uEPeBpL] - 'a' + (194 - 193);
                }
                else
                    DMmcqVCFO8vG++;
            }
            uEPeBpL = (1726 - 728) - (1231 - 234);
        };
    }
    if (!(uEPeBpL != DMmcqVCFO8vG))
        dGfYamorOS8 = (929 - 928);
    {
        uEPeBpL = (641 - 40) - (806 - 205);
        while (uEPeBpL < lTXGIxH) {
            if (!((325 - 324) != qWSxLID0ZpO[uEPeBpL])) {
                Osbl9zB1DUO[Jh4tYEHnT7a[uEPeBpL]] = Osbl9zB1DUO[Jh4tYEHnT7a[uEPeBpL]] + (482 - 481);
            }
            else {
                if (qWSxLID0ZpO[uEPeBpL] == -(546 - 545)) {
                    mtclMYOd8[Jh4tYEHnT7a[uEPeBpL]] = mtclMYOd8[Jh4tYEHnT7a[uEPeBpL]] + (24 - 23);
                };
            }
            uEPeBpL++;
        };
    };
}

void  rdbBJAw () {
    int uEPeBpL, DMmcqVCFO8vG = (230 - 230);
    {
        {
            if (0) {
                return 0;
            };
        }
        if ((289 - 289)) {
            return (722 - 722);
        };
    }
    {
        uEPeBpL = (682 - 681);
        while (uEPeBpL <= (324 - 298)) {
            if (Osbl9zB1DUO[uEPeBpL])
                printf ("%c=%d\n", uEPeBpL + 'A' - (77 - 76), Osbl9zB1DUO[uEPeBpL]);
            uEPeBpL = uEPeBpL + (17 - 16);
        };
    }
    {
        uEPeBpL = (717 - 716);
        for (; uEPeBpL <= (1024 - 998);) {
            if (mtclMYOd8[uEPeBpL])
                printf ("%c=%d\n", uEPeBpL - (517 - 516) + 'a', mtclMYOd8[uEPeBpL]);
            {
                if ((850 - 850)) {
                    return (865 - 865);
                };
            }
            uEPeBpL++;
        };
    }
    if (dGfYamorOS8)
        ;
}

void  main () {
    u4efoS7 ();
    arrange ();
    rdbBJAw ();
}

