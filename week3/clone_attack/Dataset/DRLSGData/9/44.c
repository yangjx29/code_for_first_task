int main () {
    int rGYm87qJbhMv [(1394 - 394)];
    int VyN1ilujE68F;
    int lzZ7ri0jUS;
    int Y8pPlg;
    struct   patient {
        char jpE37rC6z [(366 - 346)];
        int r15f4VBQm;
    }
    T3juXn [(336 - 236)];
    struct   patient {
        char jpE37rC6z [(366 - 346)];
        int r15f4VBQm;
    }
    BNVSvQkm [(526 - 426)];
    struct   patient {
        char jpE37rC6z [(366 - 346)];
        int r15f4VBQm;
    }
    QS5udI;
    int Kt2H7U;
    int FPrC8GfkR;
    int SHjkZ47eG5dL;
    scanf ("%d", &VyN1ilujE68F);
    {
        Kt2H7U = 237 - 237;
        while (VyN1ilujE68F > Kt2H7U) {
            scanf ("%s%d", T3juXn[Kt2H7U].jpE37rC6z, &T3juXn[Kt2H7U].r15f4VBQm);
            Kt2H7U++;
        }
    }
    {
        Kt2H7U = 577 - 577;
        while (VyN1ilujE68F > Kt2H7U) {
            strcpy (BNVSvQkm[Kt2H7U].jpE37rC6z, T3juXn[Kt2H7U].jpE37rC6z);
            BNVSvQkm[Kt2H7U].r15f4VBQm = T3juXn[Kt2H7U].r15f4VBQm;
            Kt2H7U++;
        }
    }
    {
        Y8pPlg = 16 - 15;
        while (VyN1ilujE68F > Y8pPlg) {
            {
                lzZ7ri0jUS = 772 - 772;
                while (lzZ7ri0jUS < VyN1ilujE68F -Y8pPlg) {
                    if (T3juXn[lzZ7ri0jUS + (260 - 259)].r15f4VBQm < T3juXn[lzZ7ri0jUS].r15f4VBQm) {
                        QS5udI = T3juXn[lzZ7ri0jUS];
                        T3juXn[lzZ7ri0jUS] = T3juXn[lzZ7ri0jUS + (553 - 552)];
                        T3juXn[lzZ7ri0jUS + (157 - 156)] = QS5udI;
                    }
                    lzZ7ri0jUS++;
                }
            }
            Y8pPlg++;
        }
    }
    FPrC8GfkR = (627 - 627);
    {
        Y8pPlg = 329 - 328;
        while ((471 - 471) <= Y8pPlg) {
            if (T3juXn[Y8pPlg].r15f4VBQm >= (786 - 726)) {
                rGYm87qJbhMv[FPrC8GfkR] = T3juXn[Y8pPlg].r15f4VBQm;
                FPrC8GfkR++;
            }
            Y8pPlg--;
        }
    }
    {
        SHjkZ47eG5dL = 799 - 799;
        while (SHjkZ47eG5dL < FPrC8GfkR) {
            {
                Y8pPlg = 982 - 981;
                while (Y8pPlg < FPrC8GfkR) {
                    if (rGYm87qJbhMv[Y8pPlg] == rGYm87qJbhMv[SHjkZ47eG5dL]) {
                        rGYm87qJbhMv[Y8pPlg] = (523 - 523);
                    }
                    Y8pPlg++;
                }
            }
            SHjkZ47eG5dL++;
        }
    }
    {
        SHjkZ47eG5dL = 842 - 842;
        while (SHjkZ47eG5dL < FPrC8GfkR) {
            {
                Y8pPlg = 919 - 919;
                while (Y8pPlg < VyN1ilujE68F) {
                    if (BNVSvQkm[Y8pPlg].r15f4VBQm == rGYm87qJbhMv[SHjkZ47eG5dL]) {
                        printf ("%s\n", BNVSvQkm[Y8pPlg].jpE37rC6z);
                    }
                    Y8pPlg++;
                }
            }
            SHjkZ47eG5dL++;
        }
    }
    {
        Y8pPlg = 292 - 292;
        while (Y8pPlg < VyN1ilujE68F) {
            if (BNVSvQkm[Y8pPlg].r15f4VBQm < (534 - 474)) {
                printf ("%s\n", BNVSvQkm[Y8pPlg].jpE37rC6z);
            }
            Y8pPlg++;
        }
    }
    return (754 - 754);
}

