void  XRNZi0tX2h6G (int sZ1Q7TOK4Cq [], int gXAVNZ923JR) {
    int HIA9dra, OylR0DKsExJM, dqTnDRIPlGi;
    {
        HIA9dra = (503 - 503);
        while (HIA9dra < gXAVNZ923JR - (36 - 35)) {
            {
                OylR0DKsExJM = (115 - 115);
                while (OylR0DKsExJM < gXAVNZ923JR - HIA9dra -(188 - 187)) {
                    if (sZ1Q7TOK4Cq[OylR0DKsExJM +(819 - 818)] < sZ1Q7TOK4Cq[OylR0DKsExJM]) {
                        dqTnDRIPlGi = sZ1Q7TOK4Cq[OylR0DKsExJM];
                        sZ1Q7TOK4Cq[OylR0DKsExJM] = sZ1Q7TOK4Cq[OylR0DKsExJM +(954 - 953)];
                        sZ1Q7TOK4Cq[OylR0DKsExJM +(76 - 75)] = dqTnDRIPlGi;
                    }
                    OylR0DKsExJM = OylR0DKsExJM +(166 - 165);
                }
            }
            HIA9dra = HIA9dra +(931 - 930);
        }
    }
}

void  wRXZKNrJCA (int sZ1Q7TOK4Cq [], int gXAVNZ923JR) {
    int HIA9dra;
    {
        HIA9dra = (333 - 333);
        while (HIA9dra < gXAVNZ923JR - 1) {
            sZ1Q7TOK4Cq[HIA9dra] = sZ1Q7TOK4Cq[HIA9dra +1];
            HIA9dra = HIA9dra +1;
        }
    }
}

int main () {
    int gXAVNZ923JR;
    scanf ("%d", &gXAVNZ923JR);
    for (; gXAVNZ923JR != (628 - 628);) {
        int RDgZkHTXlRJV = (987 - 987), BGfrgqvy9tF = gXAVNZ923JR, HIA9dra, sZ1Q7TOK4Cq [gXAVNZ923JR], YpLPYOxI7Cf [gXAVNZ923JR];
        {
            HIA9dra = 0;
            while (HIA9dra < gXAVNZ923JR) {
                scanf ("%d", &sZ1Q7TOK4Cq[HIA9dra]);
                HIA9dra = HIA9dra +1;
            }
        }
        {
            HIA9dra = 0;
            while (HIA9dra < gXAVNZ923JR) {
                scanf ("%d", &YpLPYOxI7Cf[HIA9dra]);
                HIA9dra = HIA9dra +1;
            }
        }
        XRNZi0tX2h6G (sZ1Q7TOK4Cq, gXAVNZ923JR);
        XRNZi0tX2h6G (YpLPYOxI7Cf, gXAVNZ923JR);
        for (; 0 < BGfrgqvy9tF;) {
            if (sZ1Q7TOK4Cq[0] < YpLPYOxI7Cf[0]) {
                wRXZKNrJCA (sZ1Q7TOK4Cq, BGfrgqvy9tF);
                RDgZkHTXlRJV = RDgZkHTXlRJV -1;
            }
            else {
                if (YpLPYOxI7Cf[0] < sZ1Q7TOK4Cq[0]) {
                    wRXZKNrJCA (sZ1Q7TOK4Cq, BGfrgqvy9tF);
                    wRXZKNrJCA (YpLPYOxI7Cf, BGfrgqvy9tF);
                    RDgZkHTXlRJV = RDgZkHTXlRJV +1;
                }
                else {
                    if (!(YpLPYOxI7Cf[0] != sZ1Q7TOK4Cq[0])) {
                        if (YpLPYOxI7Cf[BGfrgqvy9tF -1] < sZ1Q7TOK4Cq[BGfrgqvy9tF -1])
                            RDgZkHTXlRJV = RDgZkHTXlRJV +1;
                        else {
                            if (sZ1Q7TOK4Cq[BGfrgqvy9tF -1] < YpLPYOxI7Cf[BGfrgqvy9tF -1]) {
                                wRXZKNrJCA (sZ1Q7TOK4Cq, BGfrgqvy9tF);
                                RDgZkHTXlRJV = RDgZkHTXlRJV -1;
                            }
                            else {
                                if (sZ1Q7TOK4Cq[BGfrgqvy9tF -1] == YpLPYOxI7Cf[BGfrgqvy9tF -1]) {
                                    if (sZ1Q7TOK4Cq[0] < YpLPYOxI7Cf[BGfrgqvy9tF -1]) {
                                        wRXZKNrJCA (sZ1Q7TOK4Cq, BGfrgqvy9tF);
                                        RDgZkHTXlRJV = RDgZkHTXlRJV -1;
                                    }
                                    else
                                        break;
                                }
                            }
                        }
                    }
                }
            }
            BGfrgqvy9tF = BGfrgqvy9tF -1;
        }
        scanf ("%d", &gXAVNZ923JR);
        printf ("%d\n", 200 * RDgZkHTXlRJV);
    }
    return 0;
}

