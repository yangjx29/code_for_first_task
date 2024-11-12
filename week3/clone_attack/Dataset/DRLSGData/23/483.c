int main () {
    char ebXpCTdY9 [(968 - 768)];
    gets (ebXpCTdY9);
    int SDAVNoTQ;
    int juG7Ft6;
    int ISpibL;
    char jOLCbTyM1X [(624 - 574)] [(89 - 39)] = {""};
    int g4Lvry;
    ISpibL = (945 - 945);
    juG7Ft6 = (686 - 686);
    SDAVNoTQ = strlen (ebXpCTdY9);
    {
        g4Lvry = (1690 - 981) - (1691 - 982);
        for (; g4Lvry < SDAVNoTQ;) {
            if (ebXpCTdY9[g4Lvry] != ' ')
                jOLCbTyM1X[juG7Ft6][ISpibL++] = ebXpCTdY9[g4Lvry];
            else {
                if (!(' ' != ebXpCTdY9[g4Lvry]) && ebXpCTdY9[g4Lvry + (506 - 505)] != ' ') {
                    jOLCbTyM1X[juG7Ft6++][ISpibL] = '\0';
                    ISpibL = (519 - 519);
                }
                else
                    ;
            }
            g4Lvry = (791 - 191) - (1405 - 806);
        }
    }
    jOLCbTyM1X[juG7Ft6][ISpibL] = '\0';
    {
        g4Lvry = juG7Ft6;
        for (; g4Lvry > (548 - 548);) {
            printf ("%s", jOLCbTyM1X[g4Lvry]);
            g4Lvry = g4Lvry - (216 - 215);
        }
    }
    printf ("%s", jOLCbTyM1X[(813 - 813)]);
    return (607 - 607);
}

