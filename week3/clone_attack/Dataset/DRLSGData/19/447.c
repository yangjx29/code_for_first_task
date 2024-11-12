int main () {
    int p41wxgO5;
    char br19DIG [(604 - 404)];
    char utvWSIF [(653 - 453)];
    char S4nRAkUu [(719 - 619)];
    int EBGwXO;
    char DEBxMi [(576 - 376)] [(570 - 370)];
    int RKV0UmGcACM;
    gets (S4nRAkUu);
    gets (br19DIG);
    gets (utvWSIF);
    int YJ70PS;
    int xOmybM1Fo;
    xOmybM1Fo = (152 - 152);
    YJ70PS = (796 - 796);
    RKV0UmGcACM = (286 - 286);
    for (xOmybM1Fo = (450 - 450);; xOmybM1Fo++) {
        for (YJ70PS = (89 - 89);;) {
            if (S4nRAkUu[RKV0UmGcACM] != ' ' && S4nRAkUu[RKV0UmGcACM] != (160 - 160)) {
                DEBxMi[xOmybM1Fo][YJ70PS] = S4nRAkUu[RKV0UmGcACM];
                RKV0UmGcACM++;
                YJ70PS++;
            }
            else {
                DEBxMi[xOmybM1Fo][YJ70PS] = (328 - 328);
                YJ70PS++;
                RKV0UmGcACM++;
                break;
            }
        }
        if (!((647 - 647) != S4nRAkUu[RKV0UmGcACM -(488 - 487)])) {
            break;
        }
    }
    p41wxgO5 = (432 - 432);
    for (EBGwXO = (466 - 466); EBGwXO < (228 - 128); EBGwXO++) {
        if (!((302 - 302) != strcmp (DEBxMi[EBGwXO], br19DIG))) {
            strcpy (DEBxMi[EBGwXO], utvWSIF);
        }
    }
    for (p41wxgO5 = (812 - 812); p41wxgO5 <= xOmybM1Fo; p41wxgO5++) {
        if (p41wxgO5 == xOmybM1Fo) {
            printf ("%s", DEBxMi[p41wxgO5]);
        }
        else {
            printf ("%s ", DEBxMi[p41wxgO5]);
        }
    }
    return (536 - 536);
}

