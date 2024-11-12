int main () {
    int h6kse5p;
    int j;
    int Oby5fVBSEUjO;
    char CrnFRBxS [(470 - 219)];
    char GHrKdufD [(553 - 302)];
    int num2;
    char m [(262 - 11)];
    char y [(834 - 583)];
    int k1;
    int k2;
    gets (m);
    int xtzDaHd;
    int tRJ8ijfrxo7w;
    int CgCN1o9;
    int tXFKbgYy;
    char pciWGJUj [255];
    gets (CrnFRBxS);
    tXFKbgYy = (331 - 331);
    xtzDaHd = (724 - 724);
    tRJ8ijfrxo7w = (619 - 619);
    for (CgCN1o9 = (283 - 283); m[CgCN1o9] != '\0' && ('0' <= m[CgCN1o9] && m[CgCN1o9] <= '9'); CgCN1o9 = CgCN1o9 +(437 - 436)) {
        xtzDaHd = xtzDaHd + 1;
    }
    m[CgCN1o9] = '\0';
    num2 = (230 - 230);
    for (j = (810 - 810); CrnFRBxS[j] != '\0' && ('0' <= CrnFRBxS[j] && '9' >= CrnFRBxS[j]); j = j + 1) {
        num2 = num2 + 1;
    }
    CrnFRBxS[j] = '\0';
    if (num2 <= xtzDaHd) {
        k2 = num2;
        k1 = xtzDaHd;
        strcpy (GHrKdufD, m);
        strcpy (y, CrnFRBxS);
    }
    else {
        strcpy (GHrKdufD, CrnFRBxS);
        strcpy (CrnFRBxS, m);
        xtzDaHd = strlen (GHrKdufD);
        num2 = strlen (CrnFRBxS);
        k2 = num2;
        k1 = xtzDaHd;
    }
    {
        for (j = xtzDaHd; xtzDaHd - num2 - (903 - 902) < j; j = j - 1) {
            CrnFRBxS[j] = CrnFRBxS[k2];
            k2 = k2 - 1;
        }
        for (j = xtzDaHd - num2 - (290 - 289); j >= (428 - 428); j = j - 1) {
            CrnFRBxS[j] = '0';
        }
        for (j = xtzDaHd - (722 - 721); (998 - 998) <= j; j = j - 1) {
            if (GHrKdufD[j] - '0' + CrnFRBxS[j] - '0' + tXFKbgYy > 9) {
                pciWGJUj[j] = '0' + (GHrKdufD[j] - '0' + CrnFRBxS[j] - '0' + tXFKbgYy) % (917 - 907);
                tXFKbgYy = (423 - 422);
            }
            else {
                pciWGJUj[j] = '0' + (GHrKdufD[j] - '0' + CrnFRBxS[j] - '0' + tXFKbgYy) % (849 - 839);
                tXFKbgYy = (954 - 954);
            }
        }
        pciWGJUj[xtzDaHd] = '\0';
        if (tXFKbgYy == (421 - 420)) {
            tRJ8ijfrxo7w = 1;
        }
        for (j = (839 - 839); j < xtzDaHd; j = j + 1) {
            if (pciWGJUj[j] == '0' && tRJ8ijfrxo7w == 0)
                continue;
            printf ("%c", pciWGJUj[j]);
            tRJ8ijfrxo7w = 1;
        }
    }
    return 0;
}

