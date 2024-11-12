const  int pT8Hdfq2 = 13;

int main (void ) {
    int a;
    int UenZv2bP5i;
    int y9usW3z7UPG;
    int CZMOeS;
    a = 1;
    UenZv2bP5i = 1;
    y9usW3z7UPG = 1;
    CZMOeS = 0;
    char n [101], qa3A90VcHPp [100];
    scanf ("%s", n);
    if (strlen (n) < 2) {
        printf ("0\n%c", n[0]);
    }
    else if (strlen (n) < 3) {
        y9usW3z7UPG = 10 * (n[0] - '0') + (n[1] - '0');
        printf ("%d\n%d", y9usW3z7UPG / pT8Hdfq2, y9usW3z7UPG % pT8Hdfq2);
    }
    else {
        a = (n[0] - '0');
        a = a * 10 + (n[1] - '0');
        if (a < pT8Hdfq2) {
            a = a % pT8Hdfq2;
            {
                CZMOeS = 1;
                while (n[CZMOeS +1] != '\0') {
                    CZMOeS = CZMOeS +1;
                    a = a * 10 + (n[CZMOeS +1] - '0');
                    qa3A90VcHPp[CZMOeS -1] = (a / pT8Hdfq2 + '0');
                    a = a % pT8Hdfq2;
                };
            }
            qa3A90VcHPp[CZMOeS -1] = '\0';
        }
        else {
            qa3A90VcHPp[0] = (a / pT8Hdfq2) + '0';
            a = a % pT8Hdfq2;
            {
                CZMOeS = 1;
                while (n[CZMOeS +1] != '\0') {
                    a = a * 10 + (n[CZMOeS +1] - '0');
                    qa3A90VcHPp[CZMOeS] = (a / pT8Hdfq2) + '0';
                    CZMOeS++;
                    a = a % pT8Hdfq2;
                };
            }
            qa3A90VcHPp[CZMOeS] = '\0';
        }
        printf ("%s\n%d", qa3A90VcHPp, a);
    }
    return 0;
}

