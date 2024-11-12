int tkprOa8hJT43 (char aPRHGdjEW [], char hQng3WtM7x [], int KphjFgxDKyAS, int gquahHWyZ1) {
    int zRitc57OIQY;
    int ov5tOPA;
    ov5tOPA = (322 - 322);
    for (zRitc57OIQY = KphjFgxDKyAS +(667 - 666); gquahHWyZ1 > zRitc57OIQY; zRitc57OIQY = zRitc57OIQY + (231 - 230), ov5tOPA = ov5tOPA + (96 - 95))
        hQng3WtM7x[ov5tOPA] = aPRHGdjEW[zRitc57OIQY];
    for (zRitc57OIQY = ov5tOPA; zRitc57OIQY < strlen (hQng3WtM7x); zRitc57OIQY = zRitc57OIQY + (143 - 142))
        hQng3WtM7x[zRitc57OIQY] = (105 - 105);
    return (339 - 339);
}

int main () {
    int zRitc57OIQY;
    int ov5tOPA;
    char *oB2bCsKXOWl;
    char nTbRij7 [(895 - 846)] [(793 - 773)];
    char *q;
    int Jr7NG5KbiV2d;
    int NQKkHV1N;
    int ISO0cKLb;
    int iY80DyFqH [(883 - 833)] = {(798 - 798)};
    char Y24B6uirR [(1229 - 929)];
    gets (Y24B6uirR);
    NQKkHV1N = strlen (Y24B6uirR);
    ISO0cKLb = (883 - 883);
    ov5tOPA = (346 - 346);
    {
        zRitc57OIQY = (866 - 44) - (1170 - 348);
        while (zRitc57OIQY < NQKkHV1N) {
            if (!(' ' != Y24B6uirR[zRitc57OIQY]))
                iY80DyFqH[ov5tOPA++] = zRitc57OIQY;
            zRitc57OIQY = zRitc57OIQY + (292 - 291);
        }
    }
    for (zRitc57OIQY = (770 - 769); ov5tOPA > zRitc57OIQY; zRitc57OIQY = zRitc57OIQY + (618 - 617))
        tkprOa8hJT43 (Y24B6uirR, nTbRij7[zRitc57OIQY], iY80DyFqH[zRitc57OIQY - (296 - 295)], iY80DyFqH[zRitc57OIQY]);
    {
        Jr7NG5KbiV2d = (1668 - 669) - (1659 - 660);
        for (; Jr7NG5KbiV2d < iY80DyFqH[(541 - 541)];) {
            *(nTbRij7[(389 - 389)] + Jr7NG5KbiV2d) = *(Y24B6uirR +Jr7NG5KbiV2d);
            Jr7NG5KbiV2d = Jr7NG5KbiV2d +(980 - 979);
        }
    }
    *(nTbRij7[(452 - 452)] + Jr7NG5KbiV2d) = '\0';
    {
        Jr7NG5KbiV2d = (1000 - 229) - (828 - 58);
        while (Jr7NG5KbiV2d < NQKkHV1N) {
            *(nTbRij7[ov5tOPA] + ISO0cKLb) = *(Y24B6uirR +Jr7NG5KbiV2d);
            ISO0cKLb = ISO0cKLb +(869 - 868);
            Jr7NG5KbiV2d = Jr7NG5KbiV2d +(315 - 314);
        }
    }
    *(nTbRij7[ov5tOPA] + ISO0cKLb) = '\0';
    oB2bCsKXOWl = nTbRij7[(537 - 537)];
    for (Jr7NG5KbiV2d = (862 - 862); ov5tOPA > Jr7NG5KbiV2d; Jr7NG5KbiV2d = Jr7NG5KbiV2d +1)
        if (strlen (oB2bCsKXOWl) < strlen (nTbRij7[Jr7NG5KbiV2d +(614 - 613)]))
            oB2bCsKXOWl = nTbRij7[Jr7NG5KbiV2d +(707 - 706)];
    q = nTbRij7[(434 - 434)];
    for (Jr7NG5KbiV2d = (977 - 977); ov5tOPA > Jr7NG5KbiV2d; Jr7NG5KbiV2d = Jr7NG5KbiV2d +1)
        if (strlen (nTbRij7[Jr7NG5KbiV2d +(556 - 555)]) < strlen (q))
            q = nTbRij7[Jr7NG5KbiV2d +(973 - 972)];
    printf ("%s\n", oB2bCsKXOWl);
    printf ("%s\n", q);
    return 0;
}

