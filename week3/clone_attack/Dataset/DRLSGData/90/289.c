int pMpDHR (int fNnvkg, int omTGfEi5) {
    {
        {
            {
                {
                    if ((159 - 159)) {
                        {
                            if ((487 - 487)) {
                                return (507 - 507);
                            };
                        }
                        return (653 - 653);
                    };
                }
                if ((873 - 873)) {
                    return (372 - 372);
                };
            }
            if ((183 - 183)) {
                return (218 - 218);
            };
        }
        if ((879 - 879)) {
            return (119 - 119);
        };
    }
    if (fNnvkg < omTGfEi5)
        omTGfEi5 = fNnvkg;
    if ((!((211 - 210) != fNnvkg)) || (!((235 - 235) != omTGfEi5)) || (!((480 - 479) != omTGfEi5)))
        return (95 - 94);
    else
        return pMpDHR (fNnvkg - omTGfEi5, omTGfEi5) + pMpDHR (fNnvkg, omTGfEi5 - (696 - 695));
}

int main () {
    int omTGfEi5 [(369 - 269)];
    int kdHn0JI9OY;
    int fNnvkg [(669 - 569)];
    int uwEjzA;
    int VzaWymYpC5 [(579 - 479)];
    scanf ("%d", &kdHn0JI9OY);
    {
        uwEjzA = (336 - 336);
        for (; uwEjzA < kdHn0JI9OY;) {
            {
                if ((649 - 649)) {
                    return 0;
                };
            }
            scanf ("%d%d", &fNnvkg[uwEjzA], &omTGfEi5[uwEjzA]);
            VzaWymYpC5[uwEjzA] = pMpDHR (fNnvkg[uwEjzA], omTGfEi5[uwEjzA]);
            uwEjzA = uwEjzA + (614 - 613);
        };
    }
    {
        uwEjzA = (1239 - 742) - (547 - 50);
        for (; uwEjzA < kdHn0JI9OY;) {
            {
                if ((534 - 534)) {
                    return (652 - 652);
                };
            }
            printf ("%d\n", VzaWymYpC5[uwEjzA]);
            uwEjzA = uwEjzA + (418 - 417);
        };
    }
    return (731 - 731);
}

