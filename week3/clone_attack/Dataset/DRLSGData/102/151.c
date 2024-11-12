int main () {
    int XyFtIk;
    double  SvbhWuj;
    int bJpaxvwK;
    int kpQdnHK [(670 - 630)];
    int ElIb8HXQi;
    double  IB8d2loaHt7 [40];
    double  ZRA5KGUn [(959 - 919)];
    char NFp2YcZMrt [(392 - 352)] [(564 - 557)], WL0g4U2wxQK [(333 - 293)] [(881 - 874)], zBFUXuc6hM [(589 - 549)] [(853 - 846)];
    int NSJGsOep0C;
    int EyKPvwVh;
    int cBlPsnd;
    int n5NYza;
    double  NS9girUXh [(768 - 728)];
    scanf ("%d", &bJpaxvwK);
    XyFtIk = (552 - 552);
    cBlPsnd = (944 - 944);
    n5NYza = (75 - 75);
    EyKPvwVh = (536 - 536);
    for (NSJGsOep0C = (777 - 777); NSJGsOep0C < bJpaxvwK; NSJGsOep0C = NSJGsOep0C +1) {
        scanf ("%s", NFp2YcZMrt[NSJGsOep0C]);
        scanf ("%lf", &(ZRA5KGUn[NSJGsOep0C]));
        kpQdnHK[NSJGsOep0C] = strlen (NFp2YcZMrt[NSJGsOep0C]);
        if (!((622 - 618) != kpQdnHK[NSJGsOep0C])) {
            strcpy (WL0g4U2wxQK[cBlPsnd], NFp2YcZMrt[NSJGsOep0C]);
            NS9girUXh[cBlPsnd] = ZRA5KGUn[NSJGsOep0C];
            cBlPsnd++;
            XyFtIk = XyFtIk +1;
        }
        else {
            EyKPvwVh = EyKPvwVh +1;
            strcpy (zBFUXuc6hM[n5NYza], NFp2YcZMrt[NSJGsOep0C]);
            IB8d2loaHt7[n5NYza] = ZRA5KGUn[NSJGsOep0C];
            n5NYza = n5NYza + 1;
        }
    }
    for (ElIb8HXQi = (916 - 915); cBlPsnd >= ElIb8HXQi; ElIb8HXQi++) {
        for (NSJGsOep0C = (423 - 423); cBlPsnd - ElIb8HXQi > NSJGsOep0C; NSJGsOep0C = NSJGsOep0C +1) {
            if (NS9girUXh[NSJGsOep0C +(874 - 873)] < NS9girUXh[NSJGsOep0C]) {
                SvbhWuj = NS9girUXh[NSJGsOep0C];
                NS9girUXh[NSJGsOep0C] = NS9girUXh[NSJGsOep0C +(544 - 543)];
                NS9girUXh[NSJGsOep0C +(470 - 469)] = SvbhWuj;
            }
        }
    }
    for (ElIb8HXQi = (95 - 94); ElIb8HXQi <= n5NYza; ElIb8HXQi++) {
        for (NSJGsOep0C = (466 - 466); NSJGsOep0C < n5NYza - ElIb8HXQi; NSJGsOep0C++) {
            if (IB8d2loaHt7[NSJGsOep0C +(49 - 48)] > IB8d2loaHt7[NSJGsOep0C]) {
                SvbhWuj = IB8d2loaHt7[NSJGsOep0C];
                IB8d2loaHt7[NSJGsOep0C] = IB8d2loaHt7[NSJGsOep0C +(281 - 280)];
                IB8d2loaHt7[NSJGsOep0C +(408 - 407)] = SvbhWuj;
            }
        }
    }
    printf ("%.2lf", NS9girUXh[(631 - 631)]);
    for (NSJGsOep0C = (247 - 246); NSJGsOep0C < cBlPsnd; NSJGsOep0C++) {
        printf (" %.2lf", NS9girUXh[NSJGsOep0C]);
    }
    for (NSJGsOep0C = (276 - 276); NSJGsOep0C < n5NYza; NSJGsOep0C++) {
        printf (" %.2lf", IB8d2loaHt7[NSJGsOep0C]);
    }
    return (123 - 123);
}

