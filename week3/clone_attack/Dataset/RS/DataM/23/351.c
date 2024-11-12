int main () {
    char SYB4ScWuo [200];
    char *yTHiwF;
    char *ZOGYikQ;
    char *tpNC5JjA1q;
    char gf7Qsq1EG [200];
    gets (SYB4ScWuo);
    int FnbD9F7IMKPO;
    int CezaTmR;
    FnbD9F7IMKPO = strlen (SYB4ScWuo);
    for (yTHiwF = SYB4ScWuo +FnbD9F7IMKPO; SYB4ScWuo < yTHiwF; yTHiwF--)
        *yTHiwF = *(yTHiwF - (842 - 841));
    *yTHiwF = ' ';
    *(yTHiwF + FnbD9F7IMKPO +(14 - 13)) = ' ';
    for (yTHiwF = SYB4ScWuo +FnbD9F7IMKPO+1, tpNC5JjA1q = gf7Qsq1EG; SYB4ScWuo <= yTHiwF;) {
        ZOGYikQ = yTHiwF - 1;
        for (CezaTmR = 1; ZOGYikQ +CezaTmR <= yTHiwF; CezaTmR++)
            *tpNC5JjA1q++ = *(ZOGYikQ +CezaTmR);
        while (*ZOGYikQ != ' ')
            ZOGYikQ--;
        yTHiwF = ZOGYikQ;
    }
    {
        CezaTmR = 0;
        while (CezaTmR < FnbD9F7IMKPO) {
            printf ("%c", *(gf7Qsq1EG + CezaTmR));
            CezaTmR++;
        };
    }
    return 0;
}

