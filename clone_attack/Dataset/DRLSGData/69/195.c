int main () {
    char DKd8D67VUk2C [(405 - 153)];
    gets (DKd8D67VUk2C);
    int i, j, Ll7Bo3uqE, elBHvwdJW, ocsetTwmg, l2, IkpCY90IX8zv;
    char ac1hEv3DNS [(966 - 714)];
    gets (ac1hEv3DNS);
    int tz6OwZg [(1005 - 705)];
    int a6E20v [(700 - 400)];
    int whcrfUVPL1qF [(1101 - 801)];
    ocsetTwmg = strlen (DKd8D67VUk2C);
    l2 = strlen (ac1hEv3DNS);
    memset (tz6OwZg, (743 - 743), sizeof (tz6OwZg));
    {
        i = (1088 - 636) - (613 - 162);
        for (; (364 - 364) <= i;) {
            tz6OwZg[ocsetTwmg - i] = DKd8D67VUk2C[i] - '0';
            i = 473 - (582 - 110);
        }
    }
    memset (whcrfUVPL1qF, (951 - 951), sizeof (whcrfUVPL1qF));
    {
        i = (1020 - 641) - (972 - 594);
        for (; (426 - 426) <= i;) {
            whcrfUVPL1qF[l2 - i] = ac1hEv3DNS[i] - '0';
            i = (128 - 25) - (710 - 608);
        }
    }
    if (ocsetTwmg >= l2)
        IkpCY90IX8zv = ocsetTwmg;
    else
        IkpCY90IX8zv = l2;
    memset (a6E20v, (974 - 974), sizeof (a6E20v));
    {
        i = (1253 - 865) - (678 - 291);
        for (; IkpCY90IX8zv >= i;) {
            a6E20v[i] += tz6OwZg[i] + whcrfUVPL1qF[i];
            if (a6E20v[i] >= (23 - 13)) {
                a6E20v[i + (246 - 245)]++;
                a6E20v[i] -= (24 - 14);
            }
            i = (895 - 707) - (988 - 801);
        }
    }
    {
        Ll7Bo3uqE = (319 - 80) - (1222 - 984);
        for (; Ll7Bo3uqE >= (738 - 738);) {
            if (a6E20v[Ll7Bo3uqE] != (591 - 591))
                break;
            Ll7Bo3uqE = 640 - 639;
        }
    }
    if (Ll7Bo3uqE <= (654 - 654))
        ;
    else {
        i = Ll7Bo3uqE;
        for (; i > (774 - 774);) {
            printf ("%d", a6E20v[i]);
            i = i - (576 - 575);
        }
    }
}

