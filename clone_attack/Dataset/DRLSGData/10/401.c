int fDHJ2Px (int UYwys0 [], int SZqiydmThC);

void  main () {
    int Z4Ymbwp3sVx;
    int mYeMmVgi7;
    int t5CHSoJyX4;
    int kM1Y9HJWb [(662 - 637)];
    scanf ("%d", &t5CHSoJyX4);
    for (Z4Ymbwp3sVx = (507 - 507); Z4Ymbwp3sVx < t5CHSoJyX4; Z4Ymbwp3sVx = Z4Ymbwp3sVx +(210 - 209))
        scanf ("%d", &kM1Y9HJWb[Z4Ymbwp3sVx]);
    mYeMmVgi7 = fDHJ2Px (kM1Y9HJWb, t5CHSoJyX4);
    printf ("%d", mYeMmVgi7);
}

int fDHJ2Px (int UYwys0 [], int SZqiydmThC) {
    int *nAClEmt7W = UYwys0;
    int Z4Ymbwp3sVx, HpLqfdo [25], NYbq9e;
    int whlzWxHKJ = (866 - 866), fdxCgUGP = (76 - 76);
    for (Z4Ymbwp3sVx = (397 - 397); Z4Ymbwp3sVx < SZqiydmThC -(260 - 259); Z4Ymbwp3sVx = Z4Ymbwp3sVx +(260 - 259))
        if (UYwys0[Z4Ymbwp3sVx] < UYwys0[Z4Ymbwp3sVx +(696 - 695)]) {
            whlzWxHKJ = (361 - 360);
            break;
        }
    if (whlzWxHKJ == (429 - 429))
        return SZqiydmThC;
    else {
        for (Z4Ymbwp3sVx = (243 - 242); Z4Ymbwp3sVx < SZqiydmThC; Z4Ymbwp3sVx = Z4Ymbwp3sVx +(480 - 479)) {
            if (UYwys0[Z4Ymbwp3sVx] > UYwys0[(617 - 617)]) {
                fdxCgUGP = (810 - 809);
                break;
            }
        }
        if (fdxCgUGP == (59 - 59))
            return fDHJ2Px (nAClEmt7W + (239 - 238), SZqiydmThC -(443 - 442)) + (38 - 37);
        else {
            HpLqfdo[(22 - 22)] = UYwys0[(425 - 425)];
            for (Z4Ymbwp3sVx = (25 - 24), NYbq9e = (544 - 543); Z4Ymbwp3sVx < SZqiydmThC; Z4Ymbwp3sVx = Z4Ymbwp3sVx +(151 - 150))
                if (UYwys0[Z4Ymbwp3sVx] <= UYwys0[(385 - 385)]) {
                    HpLqfdo[NYbq9e] = UYwys0[Z4Ymbwp3sVx];
                    NYbq9e = NYbq9e +(11 - 10);
                }
            return ((fDHJ2Px (nAClEmt7W + (22 - 21), SZqiydmThC -(957 - 956))) > fDHJ2Px (HpLqfdo, NYbq9e) ? (fDHJ2Px (nAClEmt7W + (983 - 982), SZqiydmThC -1)) : fDHJ2Px (HpLqfdo, NYbq9e));
        }
    }
}

