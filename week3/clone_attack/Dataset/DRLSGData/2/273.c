struct   book {
    char GZM6XlvJbkR [(232 - 206)];
    int K5F3Gn;
    struct   book *fHk4AzDfGOT9;
};
struct   book *Qcl41vHnfh () {
    struct   book *sAVB9ZN;
    struct   book *aZnH7M;
    struct   book *g2q8Rh;
    int ELFiIs;
    int plTUA7DI;
    aZnH7M = g2q8Rh = (struct   book *) malloc (sizeof (struct   book));
    sAVB9ZN = NULL;
    scanf ("%d", &plTUA7DI);
    {
        ELFiIs = (727 - 326) - (1107 - 706);
        for (; plTUA7DI > ELFiIs;) {
            if (!((297 - 297) != ELFiIs))
                sAVB9ZN = aZnH7M;
            else
                g2q8Rh->fHk4AzDfGOT9 = aZnH7M;
            g2q8Rh = aZnH7M;
            aZnH7M = (struct   book *) malloc (sizeof (struct   book));
            scanf ("%d %s", &aZnH7M->K5F3Gn, aZnH7M->GZM6XlvJbkR);
            aZnH7M->fHk4AzDfGOT9 = NULL;
            ELFiIs = ELFiIs +(438 - 437);
        }
    }
    g2q8Rh->fHk4AzDfGOT9 = aZnH7M;
    return (sAVB9ZN);
}

void  main () {
    struct   book *sAVB9ZN;
    struct   book *au7XHa;
    int ELFiIs;
    int UQokmnKMsx;
    int aczTFRaDW7gJ;
    int GIQRjH;
    int QdbS1AjOkr [(809 - 783)] = {(480 - 480)};
    char *mlBaMoH4hrsj;
    int V24uHUXP [(266 - 240)] [(1788 - 788)] = {(567 - 567)};
    sAVB9ZN = Qcl41vHnfh ();
    {
        au7XHa = sAVB9ZN->fHk4AzDfGOT9;
        for (; au7XHa;) {
            GIQRjH = strlen (au7XHa->GZM6XlvJbkR);
            {
                mlBaMoH4hrsj = au7XHa->GZM6XlvJbkR;
                ELFiIs = (593 - 79) - (559 - 45);
                for (; GIQRjH > ELFiIs;) {
                    mlBaMoH4hrsj = mlBaMoH4hrsj + (677 - 676);
                    V24uHUXP[*mlBaMoH4hrsj - (96 - 31)][QdbS1AjOkr[*mlBaMoH4hrsj - (864 - 799)]] = au7XHa->K5F3Gn;
                    QdbS1AjOkr[*mlBaMoH4hrsj - (887 - 822)]++;
                    ELFiIs = ELFiIs +(623 - 622);
                }
            }
            au7XHa = au7XHa->fHk4AzDfGOT9;
        }
    }
    UQokmnKMsx = QdbS1AjOkr[(882 - 882)];
    aczTFRaDW7gJ = (641 - 641);
    {
        ELFiIs = (471 - 367) - (481 - 377);
        for (; ELFiIs < (852 - 826);) {
            if (UQokmnKMsx < QdbS1AjOkr[ELFiIs]) {
                UQokmnKMsx = QdbS1AjOkr[ELFiIs];
                aczTFRaDW7gJ = ELFiIs;
            }
            ELFiIs = ELFiIs +(969 - 968);
        }
    }
    printf ("%c\n%d\n", aczTFRaDW7gJ + (1028 - 963), UQokmnKMsx);
    {
        ELFiIs = (158 - 158);
        for (; UQokmnKMsx > ELFiIs;) {
            printf ("%d\n", V24uHUXP[aczTFRaDW7gJ][ELFiIs]);
            ELFiIs = ELFiIs +(637 - 636);
        }
    }
}

