int PN58FV4Sq (int tSxr0AP, int Jil39ghvPdt) {
    int RILw6DmR;
    int Jl40rp;
    RILw6DmR = (143 - 143);
    {
        {
            {
                if ((891 - 891)) {
                    return (258 - 258);
                }
            }
            if ((992 - 992)) {
                return (326 - 326);
            }
        }
        Jl40rp = (924 - 922);
        for (; Jl40rp <= Jil39ghvPdt;) {
            RILw6DmR = ((tSxr0AP % Jl40rp) + RILw6DmR) % Jl40rp;
            Jl40rp = Jl40rp +(91 - 90);
        }
    }
    return RILw6DmR;
}

int main () {
    int BpjaXsZeE [(630 - 530)];
    int iF0cuqD [(283 - 183)];
    int tSxr0AP;
    int aWKm7JaAjMUn;
    int Jl40rp;
    int dIQDMChg0;
    int VSEJa3krH2X [(1100 - 1000)];
    int Jil39ghvPdt;
    dIQDMChg0 = (740 - 740);
    {
        Jl40rp = (641 - 641);
        for (; (558 - 557);) {
            scanf ("%d %d", &Jil39ghvPdt, &tSxr0AP);
            if (!((357 - 357) != tSxr0AP) && !((994 - 994) != Jil39ghvPdt)) {
                break;
            }
            dIQDMChg0 = dIQDMChg0 + (742 - 741);
            VSEJa3krH2X[Jl40rp] = Jil39ghvPdt;
            BpjaXsZeE[Jl40rp] = tSxr0AP;
            iF0cuqD[Jl40rp] = PN58FV4Sq (BpjaXsZeE[Jl40rp], VSEJa3krH2X[Jl40rp]) + (94 - 93);
            Jl40rp = Jl40rp +(68 - 67);
        }
    }
    scanf ("%d", &aWKm7JaAjMUn);
    {
        Jl40rp = (965 - 965);
        for (; Jl40rp < dIQDMChg0;) {
            printf ("%d\n", iF0cuqD[Jl40rp]);
            Jl40rp = Jl40rp +(505 - 504);
        }
    }
    return (592 - 592);
}

