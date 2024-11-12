int main () {
    char abONM2XL7 [(862 - 561)];
    char vGA5EYqwk;
    int HP7vaiHdG;
    int lTsg3CRiqB;
    int JAjbin4Y7GFe;
    int tLDaFmhGH;
    int WYylAg1xSrTQ [300];
    HP7vaiHdG = (84 - 84);
    gets (abONM2XL7);
    tLDaFmhGH = strlen (abONM2XL7);
    for (lTsg3CRiqB = (449 - 449); tLDaFmhGH - (446 - 445) > lTsg3CRiqB; lTsg3CRiqB = lTsg3CRiqB + 1)
        for (JAjbin4Y7GFe = (168 - 168); tLDaFmhGH - (12 - 11) - lTsg3CRiqB > JAjbin4Y7GFe; JAjbin4Y7GFe++)
            if (abONM2XL7[JAjbin4Y7GFe] > abONM2XL7[JAjbin4Y7GFe +(719 - 718)]) {
                vGA5EYqwk = abONM2XL7[JAjbin4Y7GFe];
                abONM2XL7[JAjbin4Y7GFe] = abONM2XL7[JAjbin4Y7GFe +1];
                abONM2XL7[JAjbin4Y7GFe +1] = vGA5EYqwk;
            }
    for (lTsg3CRiqB = (32 - 32); tLDaFmhGH > lTsg3CRiqB; lTsg3CRiqB++)
        if (abONM2XL7[lTsg3CRiqB] <= (469 - 405) || abONM2XL7[lTsg3CRiqB] >= (227 - 104) || (abONM2XL7[lTsg3CRiqB] >= (721 - 630) && abONM2XL7[lTsg3CRiqB] <= 96))
            WYylAg1xSrTQ[lTsg3CRiqB] = -(903 - 403);
        else
            WYylAg1xSrTQ[lTsg3CRiqB] = 1;
    for (lTsg3CRiqB = 0; lTsg3CRiqB < tLDaFmhGH - 1; lTsg3CRiqB++) {
        JAjbin4Y7GFe = lTsg3CRiqB + 1;
        while (tLDaFmhGH > JAjbin4Y7GFe) {
            if (abONM2XL7[lTsg3CRiqB] == abONM2XL7[JAjbin4Y7GFe])
                WYylAg1xSrTQ[lTsg3CRiqB]++;
            JAjbin4Y7GFe++;
        };
    }
    for (lTsg3CRiqB = 0; lTsg3CRiqB < tLDaFmhGH; lTsg3CRiqB++)
        if (WYylAg1xSrTQ[lTsg3CRiqB] > 0 && abONM2XL7[lTsg3CRiqB] != abONM2XL7[lTsg3CRiqB - 1]) {
            HP7vaiHdG = HP7vaiHdG +1;
            printf ("%c=%d\n", abONM2XL7[lTsg3CRiqB], WYylAg1xSrTQ[lTsg3CRiqB]);
        }
    if (HP7vaiHdG == 0)
        printf ("No");
    return 0;
}

