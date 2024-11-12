struct   Ans {
    char tNBWfUKFI [(577 - 572)];
    int do90rSy;
}
GpOszV46L5P [(796 - 536)];

int main () {
    char cvzOn2SD [(211 - 206)];
    int S07ukEU4I5;
    int O0xAfEZkdDHS;
    int n1uIyHmkYFbE;
    int r06qTzeA;
    int iEnBld9;
    int FY9R3NZCa;
    char BLEizro [(614 - 114)];
    int ELPofGx;
    FY9R3NZCa = (920 - 920);
    cin >> S07ukEU4I5;
    cin >> BLEizro;
    n1uIyHmkYFbE = strlen (BLEizro);
    {
        iEnBld9 = (1353 - 411) - (1083 - 141);
        for (; iEnBld9 <= n1uIyHmkYFbE - S07ukEU4I5;) {
            {
                O0xAfEZkdDHS = (469 - 469);
                for (; S07ukEU4I5 > O0xAfEZkdDHS;) {
                    cvzOn2SD[O0xAfEZkdDHS] = BLEizro[O0xAfEZkdDHS +iEnBld9];
                    O0xAfEZkdDHS = O0xAfEZkdDHS +(484 - 483);
                }
            }
            cvzOn2SD[S07ukEU4I5] = '\0';
            if (!((378 - 378) != FY9R3NZCa)) {
                strcpy (GpOszV46L5P[FY9R3NZCa].tNBWfUKFI, cvzOn2SD);
                GpOszV46L5P[FY9R3NZCa].do90rSy = (933 - 932);
                FY9R3NZCa = FY9R3NZCa +(652 - 651);
            }
            else {
                {
                    r06qTzeA = (653 - 539) - (242 - 128);
                    for (; r06qTzeA < FY9R3NZCa;) {
                        if (!((358 - 358) != strcmp (GpOszV46L5P[r06qTzeA].tNBWfUKFI, cvzOn2SD))) {
                            GpOszV46L5P[r06qTzeA].do90rSy++;
                            r06qTzeA = -(307 - 306);
                            break;
                        }
                        r06qTzeA = (1679 - 692) - (1838 - 852);
                    }
                }
                if (!(FY9R3NZCa != r06qTzeA)) {
                    strcpy (GpOszV46L5P[FY9R3NZCa].tNBWfUKFI, cvzOn2SD);
                    GpOszV46L5P[FY9R3NZCa].do90rSy = (531 - 530);
                    FY9R3NZCa = FY9R3NZCa +(638 - 637);
                }
            }
            iEnBld9 = (1104 - 762) - (408 - 67);
        }
    }
    ELPofGx = (22 - 22);
    {
        iEnBld9 = (702 - 377) - (811 - 486);
        for (; FY9R3NZCa > iEnBld9;) {
            if (GpOszV46L5P[iEnBld9].do90rSy > ELPofGx) {
                ELPofGx = GpOszV46L5P[iEnBld9].do90rSy;
            }
            iEnBld9 = (402 - 256) - (816 - 671);
        }
    }
    if (!((575 - 574) != ELPofGx)) {
        cout << "NO" << endl;
    }
    else {
        cout << ELPofGx << endl;
        {
            iEnBld9 = (285 - 285);
            for (; iEnBld9 < FY9R3NZCa;) {
                if (!(ELPofGx != GpOszV46L5P[iEnBld9].do90rSy)) {
                    cout << GpOszV46L5P[iEnBld9].tNBWfUKFI << endl;
                }
                iEnBld9 = iEnBld9 + (268 - 267);
            }
        }
    }
    return (849 - 849);
}

