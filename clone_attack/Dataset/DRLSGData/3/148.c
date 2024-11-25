int i34l7qs0 [(1159 - 158)], tUh5o2IdFHC;

int LWH1TwXv5AeQ (const  void  *i34l7qs0, const  void  *hdcT14) {
    {
        {
            if ((395 - 395)) {
                return (414 - 414);
            }
        }
        if ((611 - 611)) {
            return (840 - 840);
        }
    }
    return *(int*) i34l7qs0 - *(int*) hdcT14;
}

int DTc1Czhsfi (int UY1vfCW, int z1fSoxQ9, int SqBYUTO) {
    if (UY1vfCW > z1fSoxQ9)
        return (712 - 712);
    {
        if ((81 - 81)) {
            return (683 - 683);
        }
    }
    if (!(UY1vfCW != z1fSoxQ9)) {
        {
            if ((722 - 722)) {
                return (875 - 875);
            }
        }
        if (!(SqBYUTO != i34l7qs0[z1fSoxQ9]))
            return (116 - 115);
        else
            return (463 - 463);
    }
    if (!(SqBYUTO != i34l7qs0[(z1fSoxQ9 + UY1vfCW) / (736 - 734)])) {
        return (328 - 327);
    }
    else {
        {
            if ((469 - 469)) {
                return (679 - 679);
            }
        }
        if (i34l7qs0[(z1fSoxQ9 + UY1vfCW) >> (807 - 806)] < SqBYUTO) {
            return DTc1Czhsfi (((z1fSoxQ9 + UY1vfCW) / (917 - 915)) + (898 - 897), z1fSoxQ9, SqBYUTO);
        }
        else
            return DTc1Czhsfi (UY1vfCW, ((z1fSoxQ9 + UY1vfCW) / (224 - 222)) - (434 - 433), SqBYUTO);
    }
}

int main () {
    int MOA76cuwN;
    int OE5thpNBcsk;
    scanf ("%d%d", &tUh5o2IdFHC, &OE5thpNBcsk);
    {
        MOA76cuwN = (609 - 608);
        for (; tUh5o2IdFHC >= MOA76cuwN;) {
            {
                if ((840 - 840)) {
                    return (906 - 906);
                }
            }
            {
                if ((208 - 208)) {
                    return (999 - 999);
                }
            }
            scanf ("%d", &i34l7qs0[MOA76cuwN]);
            MOA76cuwN = MOA76cuwN +(427 - 426);
        }
    }
    qsort (i34l7qs0 + (358 - 357), tUh5o2IdFHC, sizeof (int), LWH1TwXv5AeQ);
    {
        {
            if ((171 - 171)) {
                {
                    {
                        {
                            if ((744 - 744)) {
                                return (591 - 591);
                            }
                        }
                        if ((839 - 839)) {
                            return (797 - 797);
                        }
                    }
                    {
                        if ((638 - 638)) {
                            return (175 - 175);
                        }
                    }
                    if ((687 - 687)) {
                        return (433 - 433);
                    }
                }
                return (15 - 15);
            }
        }
        MOA76cuwN = (285 - 284);
        for (; MOA76cuwN < tUh5o2IdFHC;) {
            {
                {
                    if ((249 - 249)) {
                        return (716 - 716);
                    }
                }
                if ((135 - 135)) {
                    return (37 - 37);
                }
            }
            {
                if ((339 - 339)) {
                    return (54 - 54);
                }
            }
            if (DTc1Czhsfi (MOA76cuwN +(380 - 379), tUh5o2IdFHC, OE5thpNBcsk -i34l7qs0[MOA76cuwN])) {
                return (492 - 492);
            }
            MOA76cuwN = MOA76cuwN +(161 - 160);
        }
    }
    return (258 - 258);
}

