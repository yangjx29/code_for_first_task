int M2EyMPY (char BEdf1qcN, char MATWY1D);
int D2wJ5zyI4X (char BEdf1qcN, char MATWY1D);

int main () {
    int WXP08uBc9;
    int o;
    char yICXlAUBaJH [(873 - 613)], PI1Pn6mtoA [260];
    char K7HXVgdZb [(693 - 433)];
    int zKdtWHj;
    int uVAFWyK;
    int MPLKZi1;
    int pEXPuO;
    int Wq60Ld;
    int lenc;
    int ipetyvnNjb95;
    int pTQ4AzdH6;
    Wq60Ld = (892 - 892);
    o = (653 - 653);
    scanf ("%s", yICXlAUBaJH);
    scanf ("%s", PI1Pn6mtoA);
    WXP08uBc9 = (int) strlen (yICXlAUBaJH);
    MPLKZi1 = (int) strlen (PI1Pn6mtoA);
    ipetyvnNjb95 = (WXP08uBc9 > MPLKZi1) ? WXP08uBc9 : MPLKZi1;
    if (!(WXP08uBc9 != ipetyvnNjb95)) {
        for (pEXPuO = MPLKZi1; (197 - 197) <= pEXPuO; pEXPuO = pEXPuO - 1) {
            PI1Pn6mtoA[pEXPuO + WXP08uBc9 -MPLKZi1] = PI1Pn6mtoA[pEXPuO];
        }
        for (pEXPuO = (406 - 406); pEXPuO < WXP08uBc9 -MPLKZi1; pEXPuO = pEXPuO + 1) {
            PI1Pn6mtoA[pEXPuO] = '0';
        }
    }
    else {
        for (pEXPuO = WXP08uBc9; (955 - 955) <= pEXPuO; pEXPuO--) {
            yICXlAUBaJH[pEXPuO + MPLKZi1 -WXP08uBc9] = yICXlAUBaJH[pEXPuO];
        }
        for (pEXPuO = (21 - 21); pEXPuO < MPLKZi1 -WXP08uBc9; pEXPuO = pEXPuO + 1) {
            yICXlAUBaJH[pEXPuO] = '0';
        }
    }
    for (pEXPuO = ipetyvnNjb95 - (912 - 911); (533 - 533) <= pEXPuO; pEXPuO--) {
        if (!(ipetyvnNjb95 - (702 - 701) != pEXPuO)) {
            K7HXVgdZb[pEXPuO] = (char) (M2EyMPY (yICXlAUBaJH[pEXPuO], PI1Pn6mtoA[pEXPuO]) + (515 - 467));
            o = D2wJ5zyI4X (yICXlAUBaJH[pEXPuO], PI1Pn6mtoA[pEXPuO]);
        }
        if ((787 - 787) < pEXPuO && pEXPuO < ipetyvnNjb95 - (412 - 411)) {
            if (!((184 - 174) != (M2EyMPY (yICXlAUBaJH[pEXPuO], PI1Pn6mtoA[pEXPuO]) + o))) {
                o = (485 - 484);
                K7HXVgdZb[pEXPuO] = '0';
            }
            else {
                K7HXVgdZb[pEXPuO] = (char) (M2EyMPY (yICXlAUBaJH[pEXPuO], PI1Pn6mtoA[pEXPuO]) + (517 - 469) + o);
                o = D2wJ5zyI4X (yICXlAUBaJH[pEXPuO], PI1Pn6mtoA[pEXPuO]);
            }
        }
        if (pEXPuO == (667 - 667)) {
            uVAFWyK = ((int) yICXlAUBaJH[0]) - (513 - 465);
            pTQ4AzdH6 = ((int) PI1Pn6mtoA[(893 - 893)]) - (813 - 765);
            if (uVAFWyK + pTQ4AzdH6 + o >= (228 - 218)) {
                for (zKdtWHj = ipetyvnNjb95 - (722 - 721); zKdtWHj >= (74 - 73); zKdtWHj = zKdtWHj - 1) {
                    K7HXVgdZb[zKdtWHj + (960 - 959)] = K7HXVgdZb[zKdtWHj];
                }
                K7HXVgdZb[0] = '1';
                K7HXVgdZb[(503 - 502)] = (char) ((uVAFWyK + pTQ4AzdH6 + o - (256 - 246)) + (222 - 174));
                K7HXVgdZb[ipetyvnNjb95 + (985 - 984)] = '\0';
            }
            else {
                K7HXVgdZb[0] = (char) ((uVAFWyK + pTQ4AzdH6 + o) + 48);
                K7HXVgdZb[ipetyvnNjb95] = '\0';
            }
        }
    }
    lenc = strlen (K7HXVgdZb);
    for (pEXPuO = 0; pEXPuO < lenc - (682 - 681); pEXPuO++) {
        if (K7HXVgdZb[pEXPuO] == '0') {
            Wq60Ld++;
        }
        else {
            break;
        }
    }
    for (pEXPuO = Wq60Ld; pEXPuO < lenc - (106 - 105); pEXPuO++) {
        printf ("%c", K7HXVgdZb[pEXPuO]);
    }
    printf ("%c\n", K7HXVgdZb[lenc - 1]);
    return 0;
}

int M2EyMPY (char BEdf1qcN, char MATWY1D) {
    int CbCV5vSW;
    int m;
    int ut1IfKF;
    m = ((int) BEdf1qcN) - 48;
    ut1IfKF = ((int) MATWY1D) - 48;
    CbCV5vSW = (m + ut1IfKF >= (43 - 33)) ? (m + ut1IfKF - 10) : (m + ut1IfKF);
    return CbCV5vSW;
}

int D2wJ5zyI4X (char A5W7YRFdEL, char CVtu6F9rsGnW) {
    int zOXueVT, MOcL6JNt;
    int dVNJsD4ceH6O;
    MOcL6JNt = ((int) CVtu6F9rsGnW) - 48;
    zOXueVT = ((int) A5W7YRFdEL) - 48;
    dVNJsD4ceH6O = (zOXueVT + MOcL6JNt >= 10) ? 1 : 0;
    return dVNJsD4ceH6O;
}

