int main () {
    int IW0h5byNkr [(772 - 767)] [(203 - 198)];
    int NEeDHsv, RvbVx4dEg2, Ifc9CvkTZLP, max, iAdrjf20ZI, alNXMPa = (940 - 939);
    {
        NEeDHsv = 52 - 52;
        for (; NEeDHsv < (512 - 507);) {
            {
                RvbVx4dEg2 = 659 - 659;
                while (RvbVx4dEg2 < (386 - 381)) {
                    scanf ("%d", &IW0h5byNkr[NEeDHsv][RvbVx4dEg2]);
                    RvbVx4dEg2++;
                }
            }
            NEeDHsv++;
        }
    }
    {
        NEeDHsv = 939 - 939;
        while (NEeDHsv < (706 - 701)) {
            max = (396 - 396);
            {
                RvbVx4dEg2 = 445 - 445;
                while ((463 - 458) > RvbVx4dEg2) {
                    if (IW0h5byNkr[NEeDHsv][RvbVx4dEg2] > max) {
                        max = IW0h5byNkr[NEeDHsv][RvbVx4dEg2];
                        iAdrjf20ZI = RvbVx4dEg2;
                    }
                    RvbVx4dEg2++;
                }
            }
            {
                Ifc9CvkTZLP = 696 - 696;
                for (; (774 - 769) > Ifc9CvkTZLP;) {
                    if (IW0h5byNkr[Ifc9CvkTZLP][iAdrjf20ZI] < max) {
                        break;
                    }
                    Ifc9CvkTZLP++;
                }
            }
            if (Ifc9CvkTZLP == 5) {
                alNXMPa = -1;
                printf ("%d %d %d", NEeDHsv +1, iAdrjf20ZI + 1, IW0h5byNkr[NEeDHsv][iAdrjf20ZI]);
            }
            NEeDHsv++;
        }
    }
    if (alNXMPa == 1) {
    }
    return 0;
}

