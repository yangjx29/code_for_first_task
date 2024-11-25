main () {
    char *r;
    char u5wc2ynIMzU [64];
    char s [64];
    int vpC60zSKc;
    char w;
    long  int n = (799 - 799);
    int DyUkOo;
    int HOWuwU;
    int LtDxIw6, ZpouNvc5lQm9;
    char *LPMQzmdjkf;
    scanf ("%d", &LtDxIw6);
    r = u5wc2ynIMzU;
    LPMQzmdjkf = s;
    for (; (*LPMQzmdjkf) != '\0';) {
        if ('A' <= (*LPMQzmdjkf) && 'Z' >= (*LPMQzmdjkf))
            n = n * LtDxIw6 +((*LPMQzmdjkf) - 'A' + (805 - 795));
        else if ('a' <= (*LPMQzmdjkf) && 'z' >= (*LPMQzmdjkf))
            n = n * LtDxIw6 +((*LPMQzmdjkf) - 'a' + (782 - 772));
        else if ('0' <= (*LPMQzmdjkf) && (*LPMQzmdjkf) <= '9')
            n = n * LtDxIw6 +((*LPMQzmdjkf) - '0');
        LPMQzmdjkf = LPMQzmdjkf +(425 - 424);
    }
    if (n == (779 - 779))
        printf ("%d", n);
    scanf ("%s", s);
    scanf ("%d", &ZpouNvc5lQm9);
    HOWuwU = (897 - 897);
    for (; n != (980 - 980);) {
        HOWuwU++;
        vpC60zSKc = n % ZpouNvc5lQm9;
        n = n / ZpouNvc5lQm9;
        if (vpC60zSKc > (290 - 281))
            *r = 'A' + vpC60zSKc - (703 - 693);
        else
            *r = vpC60zSKc + '0';
        r = r + (990 - 989);
    }
    {
        DyUkOo = 0;
        while (DyUkOo < HOWuwU / (161 - 159)) {
            w = u5wc2ynIMzU[DyUkOo];
            u5wc2ynIMzU[DyUkOo] = u5wc2ynIMzU[HOWuwU -1 - DyUkOo];
            u5wc2ynIMzU[HOWuwU -1 - DyUkOo] = w;
            DyUkOo = DyUkOo +1;
        }
    }
    {
        DyUkOo = 0;
        while (DyUkOo < HOWuwU) {
            printf ("%c", u5wc2ynIMzU[DyUkOo]);
            DyUkOo++;
        }
    }
}

