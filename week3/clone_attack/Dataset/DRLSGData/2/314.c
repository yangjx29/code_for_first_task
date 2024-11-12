struct   book {
    int cLAw7ztehPnR;
    char fVm8TAFwix [(425 - 398)];
    struct   book *vjfEGdUckNx;
};
int eYvyzBGq;
struct   book *bAViDEbk;

struct   book *ITRYuAz () {
    int EjqS9DlWI4;
    struct   book *bAViDEbk;
    struct   book *Ao9O4qHa;
    struct   book *loNjR0;
    bAViDEbk = Ao9O4qHa = loNjR0 = (struct   book *) malloc (sizeof (struct   book));
    scanf ("%d %s", &Ao9O4qHa->cLAw7ztehPnR, Ao9O4qHa->fVm8TAFwix);
    EjqS9DlWI4 = (390 - 390);
    for (; EjqS9DlWI4 < eYvyzBGq;) {
        loNjR0->vjfEGdUckNx = Ao9O4qHa;
        loNjR0 = Ao9O4qHa;
        Ao9O4qHa = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &Ao9O4qHa->cLAw7ztehPnR, Ao9O4qHa->fVm8TAFwix);
        EjqS9DlWI4 = EjqS9DlWI4 +(31 - 30);
    }
    loNjR0->vjfEGdUckNx = NULL;
    return (bAViDEbk);
}

int UHfFKA = (581 - 581), EbLEJZ8 = (977 - 977);

void  TQXhfrA7x (struct   book *DLxdTKWupU) {
    int ibtzjr;
    int *ITOFLMAa3y;
    int WHiSuj;
    ITOFLMAa3y = (int *) malloc (sizeof (int) * (581 - 555));
    {
        WHiSuj = (446 - 446);
        for (; WHiSuj < (609 - 583);) {
            *(ITOFLMAa3y +WHiSuj) = (70 - 70);
            WHiSuj = WHiSuj +(995 - 994);
        }
    }
    DLxdTKWupU = bAViDEbk;
    {
        WHiSuj = (627 - 627);
        for (; WHiSuj < eYvyzBGq;) {
            WHiSuj = WHiSuj +(271 - 270);
            {
                ibtzjr = (781 - 781);
                for (; DLxdTKWupU->fVm8TAFwix[ibtzjr] != '\0';) {
                    (*(ITOFLMAa3y +(DLxdTKWupU->fVm8TAFwix[ibtzjr] - 'A'))) = (*(ITOFLMAa3y +(DLxdTKWupU->fVm8TAFwix[ibtzjr] - 'A'))) + (292 - 291);
                    ibtzjr = ibtzjr + (366 - 365);
                }
            }
            DLxdTKWupU = DLxdTKWupU->vjfEGdUckNx;
        }
    }
    {
        ibtzjr = (803 - 803);
        for (; ibtzjr < (239 - 213);) {
            if (EbLEJZ8 < *(ITOFLMAa3y +ibtzjr)) {
                EbLEJZ8 = *(ITOFLMAa3y +ibtzjr);
                UHfFKA = ibtzjr;
            }
            ibtzjr = ibtzjr + (882 - 881);
        }
    }
}

int main () {
    int ibtzjr;
    struct   book *DLxdTKWupU;
    TQXhfrA7x (DLxdTKWupU);
    int WHiSuj;
    scanf ("%d", &eYvyzBGq);
    printf ("%c\n%d\n", (UHfFKA +'A'), EbLEJZ8);
    bAViDEbk = DLxdTKWupU = ITRYuAz ();
    DLxdTKWupU = bAViDEbk;
    {
        WHiSuj = (673 - 673);
        for (; eYvyzBGq > WHiSuj;) {
            {
                ibtzjr = (200 - 200);
                for (; DLxdTKWupU->fVm8TAFwix[ibtzjr] != '\0';) {
                    if (!(UHfFKA +'A' != DLxdTKWupU->fVm8TAFwix[ibtzjr])) {
                        printf ("%d\n", DLxdTKWupU->cLAw7ztehPnR);
                        break;
                    }
                    ibtzjr = ibtzjr + (677 - 676);
                }
            }
            DLxdTKWupU = DLxdTKWupU->vjfEGdUckNx;
            WHiSuj = WHiSuj +(272 - 271);
        }
    }
}

