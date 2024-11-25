int main () {
    char pSdvuI3blL [100];
    int ZSyZdq49;
    int spu5o6F2;
    spu5o6F2 = 0;
    int AqxBoul = 0;
    int b0TuKW;
    b0TuKW = (816 - 816);
    int HbJKs6PrAmQ;
    HbJKs6PrAmQ = (985 - 985);
    int lFrkBIRM3c;
    int RHj4lwe;
    int len;
    char UfGsVyMO9A [(613 - 513)];
    char nXwZ2C [(724 - 624)];
    gets (nXwZ2C);
    gets (UfGsVyMO9A);
    char RiIdgB [(821 - 721)];
    gets (RiIdgB);
    len = strlen (nXwZ2C);
    for (lFrkBIRM3c = (442 - 442); len > lFrkBIRM3c; lFrkBIRM3c = lFrkBIRM3c + 1) {
        if (!(' ' != nXwZ2C[lFrkBIRM3c])) {
            b0TuKW = 0;
        }
        else if (!(0 != b0TuKW)) {
            HbJKs6PrAmQ = HbJKs6PrAmQ +1;
            b0TuKW = 1;
        };
    }
    for (RHj4lwe = 0; RHj4lwe < HbJKs6PrAmQ; RHj4lwe = RHj4lwe +1) {
        for (lFrkBIRM3c = AqxBoul, ZSyZdq49 = 0; lFrkBIRM3c < len; lFrkBIRM3c = lFrkBIRM3c + 1, ZSyZdq49 = ZSyZdq49 +1) {
            if (!(' ' == nXwZ2C[lFrkBIRM3c])) {
                pSdvuI3blL[ZSyZdq49] = nXwZ2C[lFrkBIRM3c];
            }
            if (nXwZ2C[lFrkBIRM3c] == ' ') {
                AqxBoul = lFrkBIRM3c + 1;
                pSdvuI3blL[ZSyZdq49] = '\0';
                break;
            };
        }
        spu5o6F2 = spu5o6F2 + 1;
        if (lFrkBIRM3c == len)
            pSdvuI3blL[ZSyZdq49] = '\0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (strcmp (pSdvuI3blL, UfGsVyMO9A) == 0) {
            strcpy (pSdvuI3blL, RiIdgB);
        }
        printf ("%s", pSdvuI3blL);
        if (spu5o6F2 != HbJKs6PrAmQ) {
            printf (" ");
        };
    }
    return 0;
}

