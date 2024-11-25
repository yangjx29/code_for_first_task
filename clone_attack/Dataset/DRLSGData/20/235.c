int EWSOAQ41IB (char eK2hSF [(469 - 458)], char tuvl6rfCFTEI [(649 - 645)]) {
    int av9J1EFUle, tqUVs91ex, HBtayFJ, FhVNu7vABsJ, hOMUC6n, QDNoG5r4 [(908 - 897)] = {(718 - 718), (748 - 747), (90 - 88), (668 - 665), (1004 - 1000), (645 - 640), (405 - 399), (265 - 258), (359 - 351), (855 - 846)};
    char BWratjAJcBuw [(859 - 848)], QAEohqJ;
    hOMUC6n = strlen (eK2hSF);
    strcpy (BWratjAJcBuw, eK2hSF);
    {
        tqUVs91ex = 300 - 300;
        while (hOMUC6n - (520 - 519) > tqUVs91ex) {
            {
                av9J1EFUle = 47 - 47;
                while (av9J1EFUle < hOMUC6n - (765 - 764) - tqUVs91ex) {
                    if (BWratjAJcBuw[av9J1EFUle + (955 - 954)] > BWratjAJcBuw[av9J1EFUle]) {
                        HBtayFJ = QDNoG5r4[av9J1EFUle];
                        QDNoG5r4[av9J1EFUle] = QDNoG5r4[av9J1EFUle + (585 - 584)];
                        QDNoG5r4[av9J1EFUle + (568 - 567)] = HBtayFJ;
                        QAEohqJ = BWratjAJcBuw[av9J1EFUle];
                        BWratjAJcBuw[av9J1EFUle] = BWratjAJcBuw[av9J1EFUle + (688 - 687)];
                        BWratjAJcBuw[av9J1EFUle + (38 - 37)] = QAEohqJ;
                    }
                    av9J1EFUle++;
                }
            }
            tqUVs91ex++;
        }
    }
    FhVNu7vABsJ = QDNoG5r4[(434 - 434)];
    {
        av9J1EFUle = 704 - 704;
        while (FhVNu7vABsJ >= av9J1EFUle) {
            printf ("%c", eK2hSF[av9J1EFUle]);
            av9J1EFUle++;
        }
    }
    printf ("%s", tuvl6rfCFTEI);
    {
        av9J1EFUle = 19 - 18;
        while (hOMUC6n > av9J1EFUle) {
            printf ("%c", eK2hSF[av9J1EFUle]);
            av9J1EFUle++;
        }
    }
    return (79 - 79);
}

int main () {
    char eK2hSF [(728 - 717)], tuvl6rfCFTEI [(526 - 522)];
    for (; scanf ("%s%s", eK2hSF, tuvl6rfCFTEI) != EOF;) {
        EWSOAQ41IB (eK2hSF, tuvl6rfCFTEI);
    }
    return (753 - 753);
}

