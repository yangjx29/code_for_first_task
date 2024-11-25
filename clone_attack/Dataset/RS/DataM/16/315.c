int main () {
    int a, b, sD41KGmgXP, d, dE37IesvAm;
    scanf ("%d", &dE37IesvAm);
    if (9 >= dE37IesvAm)
        printf ("%d", dE37IesvAm);
    else {
        if (99 >= dE37IesvAm) {
            a = dE37IesvAm % 10;
            b = dE37IesvAm / 10;
            printf ("%d%d", a, b);
        }
        else if (dE37IesvAm <= 999) {
            a = dE37IesvAm % 10;
            sD41KGmgXP = dE37IesvAm / 100;
            b = (dE37IesvAm % 100) / 10;
            printf ("%d%d%d", a, b, sD41KGmgXP);
        }
        else if (dE37IesvAm <= 9999) {
            a = dE37IesvAm % 10;
            b = (dE37IesvAm % 100) / 10;
            sD41KGmgXP = (dE37IesvAm % 1000) / 100;
            d = dE37IesvAm / 1000;
            printf ("%d%d%d%d", a, b, sD41KGmgXP, d);
        }
        else
            ;
    }
    return 0;
}

