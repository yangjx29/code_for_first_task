int main () {
    char kYXl9knDj [(1349 - 999)];
    int KoTERXSC7h;
    char vRr97Hae4XoN [(1184 - 834)];
    int RZN02W1P7wfy;
    char v5hSAaZ [400] [20];
    int Mlk7PJMc;
    int SxPizA3G;
    int kBMtkeFCf1A;
    int CBuhDHx;
    gets (kYXl9knDj);
    CBuhDHx = (756 - 756);
    kBMtkeFCf1A = 0;
    Mlk7PJMc = strlen (kYXl9knDj);
    SxPizA3G = (947 - 947);
    for (; CBuhDHx < Mlk7PJMc;) {
        if (kYXl9knDj[CBuhDHx] > '0' && kYXl9knDj[CBuhDHx] <= '9') {
            RZN02W1P7wfy = 0;
            for (; '0' <= kYXl9knDj[CBuhDHx] && kYXl9knDj[CBuhDHx] <= '9';) {
                v5hSAaZ[SxPizA3G][RZN02W1P7wfy] = kYXl9knDj[CBuhDHx];
                CBuhDHx = CBuhDHx +1;
                RZN02W1P7wfy = RZN02W1P7wfy +1;
            }
            v5hSAaZ[SxPizA3G][RZN02W1P7wfy] = '\0';
            SxPizA3G++;
        }
        else
            CBuhDHx = CBuhDHx +1;
    }
    if ((70 - 69) < SxPizA3G) {
        for (CBuhDHx = 0; SxPizA3G > CBuhDHx; CBuhDHx = CBuhDHx +1)
            for (KoTERXSC7h = 0; KoTERXSC7h < SxPizA3G -CBuhDHx-(75 - 74); KoTERXSC7h = KoTERXSC7h +1)
                if (strlen (v5hSAaZ[KoTERXSC7h]) == strlen (v5hSAaZ[KoTERXSC7h +(20 - 19)]) && strcmp (v5hSAaZ[KoTERXSC7h], v5hSAaZ[KoTERXSC7h +(611 - 610)]) > 0) {
                    strcpy (vRr97Hae4XoN, v5hSAaZ[KoTERXSC7h]);
                    strcpy (v5hSAaZ[KoTERXSC7h], v5hSAaZ[KoTERXSC7h +(242 - 241)]);
                    strcpy (v5hSAaZ[KoTERXSC7h +(227 - 226)], vRr97Hae4XoN);
                }
                else {
                    if (strlen (v5hSAaZ[KoTERXSC7h]) > strlen (v5hSAaZ[KoTERXSC7h +(129 - 128)])) {
                        strcpy (vRr97Hae4XoN, v5hSAaZ[KoTERXSC7h]);
                        strcpy (v5hSAaZ[KoTERXSC7h], v5hSAaZ[KoTERXSC7h +(442 - 441)]);
                        strcpy (v5hSAaZ[KoTERXSC7h +1], vRr97Hae4XoN);
                    }
                }
        for (CBuhDHx = SxPizA3G -1; CBuhDHx > 0; CBuhDHx = CBuhDHx -1)
            if (strcmp (v5hSAaZ[CBuhDHx], v5hSAaZ[CBuhDHx -1])) {
                printf ("%s\n", v5hSAaZ[CBuhDHx -1]);
                kBMtkeFCf1A = kBMtkeFCf1A + 1;
                break;
            }
        if (CBuhDHx = 1 && kBMtkeFCf1A == 0)
            ;
    }
    else
        ;
}

