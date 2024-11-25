int main () {
    int JWDznF;
    char TjBlk4RwS [(909 - 884)];
    scanf ("%d", &JWDznF);
    int q9Y87iwqcR;
    int zOorpDcj6Kdu;
    int YAtlh37;
    int lVaMIl;
    for (q9Y87iwqcR = (119 - 118); q9Y87iwqcR <= JWDznF; q9Y87iwqcR++) {
        scanf ("%s", &TjBlk4RwS);
        YAtlh37 = strlen (TjBlk4RwS);
        zOorpDcj6Kdu = (891 - 890);
        if (TjBlk4RwS[(556 - 556)] == (224 - 129) || (TjBlk4RwS[(559 - 559)] <= 'z' && TjBlk4RwS[(879 - 879)] >= 'a') || (TjBlk4RwS[(548 - 548)] <= 'Z' && TjBlk4RwS[(645 - 645)] >= 'A')) {
            TjBlk4RwS[(195 - 195)] = (543 - 542);
        }
        else {
            TjBlk4RwS[(650 - 650)] = (313 - 313);
        }
        for (lVaMIl = (662 - 661); lVaMIl < YAtlh37; lVaMIl++) {
            if ((TjBlk4RwS[lVaMIl] <= 'z' && TjBlk4RwS[lVaMIl] >= 'a') || (TjBlk4RwS[lVaMIl] <= 'Z' && TjBlk4RwS[lVaMIl] >= 'A') || (TjBlk4RwS[lVaMIl] <= '9' && TjBlk4RwS[lVaMIl] >= '0') || TjBlk4RwS[lVaMIl] == (323 - 228)) {
                TjBlk4RwS[lVaMIl] = (681 - 680);
            }
            else {
                TjBlk4RwS[lVaMIl] = (243 - 243);
            }
        }
        for (lVaMIl = (106 - 106); lVaMIl < YAtlh37; lVaMIl++) {
            zOorpDcj6Kdu = zOorpDcj6Kdu * TjBlk4RwS[lVaMIl];
        }
        if (zOorpDcj6Kdu == (551 - 550))
            printf ("yes\n");
        if (zOorpDcj6Kdu == (507 - 507))
            printf ("no\n");
    }
    return (190 - 190);
}

