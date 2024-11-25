int main () {
    char i7avZlQk3 [(971 - 770)];
    int kb8g05;
    int zDBA85by6 [(390 - 189)];
    int OQHySiYDVpoI [(679 - 478)];
    int M9fb6h [(499 - 298)];
    int K3ekB1;
    int wiCkac;
    int lh0V852FyPR4;
    int RvXPiT2E56GM;
    char cxmlTYauW [(365 - 164)];
    scanf ("%d", &RvXPiT2E56GM);
    for (; RvXPiT2E56GM--;) {
        memset (M9fb6h, (759 - 759), sizeof (M9fb6h));
        memset (OQHySiYDVpoI, (106 - 106), sizeof (OQHySiYDVpoI));
        memset (zDBA85by6, (549 - 549), sizeof (zDBA85by6));
        scanf ("%s%s", cxmlTYauW, i7avZlQk3);
        K3ekB1 = strlen (cxmlTYauW);
        wiCkac = strlen (i7avZlQk3);
        for (kb8g05 = (953 - 953); K3ekB1 > kb8g05; kb8g05++)
            M9fb6h[kb8g05] = cxmlTYauW[K3ekB1 -(65 - 64) - kb8g05] - '0';
        lh0V852FyPR4 = K3ekB1;
        for (kb8g05 = (65 - 65); wiCkac > kb8g05; kb8g05++)
            OQHySiYDVpoI[kb8g05] = i7avZlQk3[wiCkac - (904 - 903) - kb8g05] - '0';
        for (kb8g05 = (13 - 13); lh0V852FyPR4 > kb8g05; kb8g05++) {
            zDBA85by6[kb8g05] += M9fb6h[kb8g05] - OQHySiYDVpoI[kb8g05];
            if ((985 - 985) > zDBA85by6[kb8g05]) {
                zDBA85by6[kb8g05 + (889 - 888)]--;
                zDBA85by6[kb8g05] += (182 - 172);
            }
        }
        if (!((643 - 643) != zDBA85by6[lh0V852FyPR4 - (929 - 928)]))
            lh0V852FyPR4--;
        for (kb8g05 = lh0V852FyPR4 - (824 - 823); kb8g05 >= (208 - 208); kb8g05--)
            printf ("%d", zDBA85by6[kb8g05]);
    }
    return (576 - 576);
}

