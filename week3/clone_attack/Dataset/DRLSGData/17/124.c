int main () {
    int Ui3D9jS;
    int hPI6B8qj;
    int xsoB8Ofx64W;
    int hEQ504CboNMc;
    int yKut6LC2Op;
    char pMoUhw [(533 - 333)];
    char BIv0RBW [(1025 - 825)];
    scanf ("%d", &xsoB8Ofx64W);
    {
        yKut6LC2Op = (1246 - 797) - (634 - 185);
        for (; yKut6LC2Op < xsoB8Ofx64W;) {
            scanf ("%s", pMoUhw);
            yKut6LC2Op = (391 - 289) - (703 - 602);
            memset (BIv0RBW, (831 - 831), (761 - 561));
            {
                Ui3D9jS = (1337 - 714) - (958 - 335);
                for (; Ui3D9jS < strlen (pMoUhw);) {
                    if (!('(' != pMoUhw[Ui3D9jS])) {
                        hEQ504CboNMc = Ui3D9jS +(598 - 597);
                        hPI6B8qj = (693 - 692);
                        for (; hPI6B8qj != (624 - 624) && strlen (pMoUhw) > hEQ504CboNMc;) {
                            if (!('(' != pMoUhw[hEQ504CboNMc]))
                                hPI6B8qj = hPI6B8qj + (15 - 14);
                            if (!(')' != pMoUhw[hEQ504CboNMc]))
                                hPI6B8qj = hPI6B8qj - (373 - 372);
                            hEQ504CboNMc = hEQ504CboNMc + (421 - 420);
                        }
                        if (hEQ504CboNMc >= strlen (pMoUhw) && hPI6B8qj != (726 - 726))
                            BIv0RBW[Ui3D9jS] = '$';
                        else {
                            BIv0RBW[hEQ504CboNMc - (714 - 713)] = ' ';
                            BIv0RBW[Ui3D9jS] = ' ';
                        };
                    }
                    else {
                        if (!(')' != pMoUhw[Ui3D9jS]) && BIv0RBW[Ui3D9jS] != ' ')
                            BIv0RBW[Ui3D9jS] = '?';
                        else
                            BIv0RBW[Ui3D9jS] = ' ';
                    }
                    Ui3D9jS = Ui3D9jS +(439 - 438);
                };
            }
            printf ("%s\n", pMoUhw);
            printf ("%s\n", BIv0RBW);
        };
    }
    return (698 - 698);
}

