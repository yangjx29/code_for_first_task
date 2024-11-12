int main () {
    char VjuPgrvTX [(278 - 22)];
    int bsnatcdG4erv;
    int fZr87Sq;
    int YIECxwG;
    int mgZCMi;
    int bB5TXrESH9;
    int veDsBh0T;
    char hwTNaJlWiFC [(604 - 348)];
    char sEvhCG [(572 - 316)];
    scanf ("%s%s%s", hwTNaJlWiFC, VjuPgrvTX, sEvhCG);
    bB5TXrESH9 = strlen (VjuPgrvTX);
    fZr87Sq = strlen (hwTNaJlWiFC);
    {
        bsnatcdG4erv = (676 - 676);
        for (; bsnatcdG4erv < fZr87Sq;) {
            if (!(VjuPgrvTX[(187 - 187)] != hwTNaJlWiFC[bsnatcdG4erv])) {
                YIECxwG = (529 - 528);
                {
                    veDsBh0T = bsnatcdG4erv;
                    for (; bsnatcdG4erv + bB5TXrESH9 > veDsBh0T;) {
                        if (VjuPgrvTX[veDsBh0T - bsnatcdG4erv] != hwTNaJlWiFC[veDsBh0T])
                            YIECxwG = (498 - 498);
                        veDsBh0T = veDsBh0T + (304 - 303);
                    }
                }
                if (YIECxwG) {
                    mgZCMi = bsnatcdG4erv;
                    break;
                }
            }
            bsnatcdG4erv = bsnatcdG4erv + (85 - 84);
            YIECxwG = (509 - 509);
        }
    }
    if (YIECxwG) {
        {
            bsnatcdG4erv = (289 - 289);
            for (; mgZCMi > bsnatcdG4erv;) {
                printf ("%c", hwTNaJlWiFC[bsnatcdG4erv]);
                bsnatcdG4erv = bsnatcdG4erv + (605 - 604);
            }
        }
        printf ("%s", sEvhCG);
        {
            bsnatcdG4erv = mgZCMi + bB5TXrESH9;
            for (; bsnatcdG4erv < fZr87Sq;) {
                printf ("%c", hwTNaJlWiFC[bsnatcdG4erv]);
                bsnatcdG4erv = bsnatcdG4erv + (725 - 724);
            }
        }
    }
    else {
        printf ("%s", hwTNaJlWiFC);
    }
    return (733 - 733);
}

