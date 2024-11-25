void  IX38un4zY ();
void  t4BHICcYb9ma ();
void  R2ITdQrZvVc ();
void  XhrUYKTcH ();
int DWL7en [(557 - 457)], t8tB9Je [(117 - 17)], tFIqPRB1 [(622 - 422)], IEzPTe9, N1urJjgRkw2;

void  main () {
    IX38un4zY ();
    t4BHICcYb9ma ();
    R2ITdQrZvVc ();
    XhrUYKTcH ();
}

void  IX38un4zY () {
    int YK7tzhgEo, TykFICc;
    scanf ("%d %d", &IEzPTe9, &N1urJjgRkw2);
    for (YK7tzhgEo = (420 - 420); YK7tzhgEo < IEzPTe9; YK7tzhgEo = YK7tzhgEo +(734 - 733))
        scanf ("%d", &DWL7en[YK7tzhgEo]);
    {
        TykFICc = (706 - 67) - (1019 - 380);
        for (; TykFICc < N1urJjgRkw2;) {
            scanf ("%d", &t8tB9Je[TykFICc]);
            TykFICc = (1091 - 412) - (1356 - 678);
        }
    }
}

void  t4BHICcYb9ma () {
    int YK7tzhgEo, TykFICc, pZfLDaM;
    {
        YK7tzhgEo = (1210 - 694) - (551 - 35);
        for (; YK7tzhgEo < IEzPTe9;) {
            {
                TykFICc = YK7tzhgEo;
                for (; TykFICc < IEzPTe9;) {
                    if (DWL7en[YK7tzhgEo] > DWL7en[TykFICc]) {
                        pZfLDaM = DWL7en[YK7tzhgEo];
                        DWL7en[YK7tzhgEo] = DWL7en[TykFICc];
                        DWL7en[TykFICc] = pZfLDaM;
                    }
                    TykFICc++;
                }
            }
            YK7tzhgEo = (516 - 105) - (663 - 253);
        }
    }
    for (YK7tzhgEo = (716 - 716); YK7tzhgEo < N1urJjgRkw2; YK7tzhgEo = YK7tzhgEo +(839 - 838))
        for (TykFICc = YK7tzhgEo; TykFICc < N1urJjgRkw2; TykFICc++)
            if (t8tB9Je[YK7tzhgEo] > t8tB9Je[TykFICc]) {
                pZfLDaM = t8tB9Je[YK7tzhgEo];
                t8tB9Je[YK7tzhgEo] = t8tB9Je[TykFICc];
                t8tB9Je[TykFICc] = pZfLDaM;
            }
}

void  R2ITdQrZvVc () {
    int YK7tzhgEo;
    for (YK7tzhgEo = (322 - 322); YK7tzhgEo < IEzPTe9; YK7tzhgEo++) {
        tFIqPRB1[YK7tzhgEo] = DWL7en[YK7tzhgEo];
    }
    for (YK7tzhgEo = IEzPTe9; YK7tzhgEo < IEzPTe9 +N1urJjgRkw2; YK7tzhgEo++) {
        tFIqPRB1[YK7tzhgEo] = t8tB9Je[YK7tzhgEo -IEzPTe9];
    }
}

void  XhrUYKTcH () {
    int YK7tzhgEo;
    for (YK7tzhgEo = (280 - 280); YK7tzhgEo < IEzPTe9 +N1urJjgRkw2; YK7tzhgEo++) {
        printf ("%d", tFIqPRB1[YK7tzhgEo]);
        if (YK7tzhgEo < IEzPTe9 +N1urJjgRkw2-(597 - 596))
            printf (" ");
        else
            printf ("\n");
    }
}

