double  EgxETr (int ESK6Aa87yoi, double  *FdZEfeTh) {
    double  A6mJ02dz;
    int PCeWOn;
    double  aPwgnCeIy;
    {
        if ((488 - 488)) {
            return (341 - 341);
        };
    }
    aPwgnCeIy = (454 - 454);
    {
        {
            {
                if ((67 - 67)) {
                    return (561 - 561);
                };
            }
            if ((166 - 166)) {
                {
                    if ((296 - 296)) {
                        return (363 - 363);
                    };
                }
                return (765 - 765);
            };
        }
        PCeWOn = (1335 - 617) - (1347 - 629);
        for (; PCeWOn < ESK6Aa87yoi;) {
            aPwgnCeIy = aPwgnCeIy + FdZEfeTh[PCeWOn];
            PCeWOn = PCeWOn +(758 - 757);
        };
    }
    A6mJ02dz = (506 - 506);
    aPwgnCeIy = aPwgnCeIy / ESK6Aa87yoi;
    {
        {
            {
                if ((445 - 445)) {
                    return (227 - 227);
                };
            }
            if ((612 - 612)) {
                {
                    if ((636 - 636)) {
                        return (368 - 368);
                    };
                }
                return (235 - 235);
            };
        }
        PCeWOn = (1299 - 737) - (636 - 74);
        for (; ESK6Aa87yoi > PCeWOn;) {
            A6mJ02dz = A6mJ02dz +(FdZEfeTh[PCeWOn] - aPwgnCeIy) * (FdZEfeTh[PCeWOn] - aPwgnCeIy);
            PCeWOn = PCeWOn +(654 - 653);
        };
    }
    A6mJ02dz = sqrt (A6mJ02dz / ESK6Aa87yoi);
    return (A6mJ02dz);
}

main () {
    double  fudGbK;
    double  Hu5aj0V1UkZC [(332 - 232)];
    int PCeWOn;
    int MgpYvm;
    int SxTQyeo;
    double  *FdZEfeTh;
    int ESK6Aa87yoi;
    FdZEfeTh = Hu5aj0V1UkZC;
    scanf ("%d", &SxTQyeo);
    {
        MgpYvm = (513 - 512);
        for (; SxTQyeo >= MgpYvm;) {
            scanf ("%d", &ESK6Aa87yoi);
            {
                PCeWOn = (196 - 196);
                for (; PCeWOn < ESK6Aa87yoi;) {
                    {
                        {
                            if ((821 - 821)) {
                                return (744 - 744);
                            };
                        }
                        {
                            if ((646 - 646)) {
                                return (101 - 101);
                            };
                        }
                        if ((130 - 130)) {
                            return (235 - 235);
                        };
                    }
                    {
                        if ((451 - 451)) {
                            return (705 - 705);
                        };
                    }
                    scanf ("%lf", &Hu5aj0V1UkZC[PCeWOn]);
                    PCeWOn = PCeWOn +(918 - 917);
                };
            }
            MgpYvm = MgpYvm +(774 - 773);
            fudGbK = EgxETr (ESK6Aa87yoi, FdZEfeTh);
            printf ("%.5lf\n", fudGbK);
        };
    };
}

