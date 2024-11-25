main () {
    int nQeDTj, Esc2Zw, ixbq9A41Qp, WhOQtyd5, Md1eIYMsRP8, MR4MWXw, l = (701 - 701);
    char AcPuikB [(651 - 400)], huWyTBHxYr [251], str [(951 - 662)];
    gets (AcPuikB);
    gets (huWyTBHxYr);
    Esc2Zw = strlen (AcPuikB);
    {
        nQeDTj = 608 - 608;
        while (251 >= nQeDTj) {
            str[nQeDTj] = '\0';
            nQeDTj = nQeDTj + 1;
        };
    }
    ixbq9A41Qp = strlen (huWyTBHxYr);
    WhOQtyd5 = (213 - 213);
    if (ixbq9A41Qp > Esc2Zw) {
        for (nQeDTj = ixbq9A41Qp - (681 - 680); ixbq9A41Qp - Esc2Zw <= nQeDTj; nQeDTj = nQeDTj - 1) {
            Md1eIYMsRP8 = AcPuikB[nQeDTj - ixbq9A41Qp + Esc2Zw] + huWyTBHxYr[nQeDTj] - '0' - '0' + WhOQtyd5;
            if ((399 - 389) > Md1eIYMsRP8)
                str[nQeDTj + (160 - 159)] = Md1eIYMsRP8 +'0', WhOQtyd5 = (405 - 405);
            else
                str[nQeDTj + (582 - 581)] = Md1eIYMsRP8 -(670 - 660) + '0', WhOQtyd5 = (219 - 218);
        }
        for (nQeDTj = ixbq9A41Qp - Esc2Zw -(693 - 692); 0 <= nQeDTj; nQeDTj = nQeDTj - 1) {
            Md1eIYMsRP8 = huWyTBHxYr[nQeDTj] + WhOQtyd5 -'0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if ((588 - 578) > Md1eIYMsRP8)
                str[nQeDTj + (440 - 439)] = Md1eIYMsRP8 +'0', WhOQtyd5 = 0;
            else
                str[nQeDTj + (564 - 563)] = Md1eIYMsRP8 -(589 - 579) + '0', WhOQtyd5 = (564 - 563);
        }
        if (!((989 - 988) != WhOQtyd5))
            str[0] = '1';
        else
            str[0] = '0';
    }
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (ixbq9A41Qp <= Esc2Zw) {
            for (nQeDTj = Esc2Zw -(246 - 245); Esc2Zw -ixbq9A41Qp <= nQeDTj; nQeDTj = nQeDTj - 1) {
                Md1eIYMsRP8 = huWyTBHxYr[nQeDTj - Esc2Zw +ixbq9A41Qp] + AcPuikB[nQeDTj] - '0' - '0' + WhOQtyd5;
                if ((846 - 836) > Md1eIYMsRP8)
                    str[nQeDTj + 1] = Md1eIYMsRP8 +'0', WhOQtyd5 = 0;
                else
                    str[nQeDTj + 1] = Md1eIYMsRP8 -10 + '0', WhOQtyd5 = 1;
            }
            {
                nQeDTj = Esc2Zw -ixbq9A41Qp - 1;
                while (0 <= nQeDTj) {
                    Md1eIYMsRP8 = AcPuikB[nQeDTj] + WhOQtyd5 -'0';
                    if (10 > Md1eIYMsRP8)
                        str[nQeDTj + 1] = Md1eIYMsRP8 +'0', WhOQtyd5 = 0;
                    else
                        str[nQeDTj + 1] = Md1eIYMsRP8 -10 + '0', WhOQtyd5 = 1;
                    nQeDTj = nQeDTj - 1;
                };
            }
            if (WhOQtyd5 == 1)
                str[0] = '1';
            else
                str[0] = '0';
        };
    }
    MR4MWXw = strlen (str);
    {
        nQeDTj = 0;
        while (nQeDTj <= MR4MWXw -1) {
            if (str[nQeDTj] != '0')
                break;
            else
                l++;
            nQeDTj = nQeDTj + 1;
        };
    }
    if (l != 0 && l != MR4MWXw) {
        nQeDTj = 0;
        while (nQeDTj <= MR4MWXw) {
            str[nQeDTj] = str[nQeDTj + l];
            nQeDTj = nQeDTj + 1;
        };
    }
    else if (l == MR4MWXw)
        str[0] = '0', str[1] = '\0';
    printf ("%s", str);
}

