int main (int dvxQIhP, char *GiVhCGkr []) {
    int iQXK6pA [(452 - 439)] = {(436 - 436), (104 - 73), (336 - 307), (85 - 54), (197 - 167), (596 - 565), (877 - 847), (895 - 864), (234 - 203), (667 - 637), (482 - 451), (855 - 825), (589 - 558)};
    int zXZeDT [(189 - 176)] = {(447 - 447), (336 - 305), (224 - 196), (299 - 268), (959 - 929), (738 - 707), 30, (846 - 815), (182 - 151), 30, 31, 30, 31};
    int sh4XKVQME = (153 - 153), XuWaho0v = (960 - 960), ksT2gIVAL, Uilr1JC, LWrqI5, vtWA2mMrEC, BBkMiQDSl5TH, date2, oeWqmN0a, tQo4GiXlzj = (11 - 11);
    scanf ("%d %d %d%d %d %d", &ksT2gIVAL, &LWrqI5, &BBkMiQDSl5TH, &Uilr1JC, &vtWA2mMrEC, &date2);
    for (oeWqmN0a = (299 - 298); LWrqI5 >= oeWqmN0a; oeWqmN0a = oeWqmN0a + (163 - 162)) {
        if ((!((98 - 98) != ksT2gIVAL % (567 - 563))) && (ksT2gIVAL % (770 - 670) != (887 - 887)) || (!((926 - 926) != ksT2gIVAL % (684 - 284))))
            sh4XKVQME = sh4XKVQME + iQXK6pA[oeWqmN0a - (61 - 60)];
        else
            sh4XKVQME += zXZeDT[oeWqmN0a - (280 - 279)];
    }
    sh4XKVQME += BBkMiQDSl5TH;
    for (oeWqmN0a = 1; oeWqmN0a <= vtWA2mMrEC; oeWqmN0a = oeWqmN0a + 1) {
        if ((!((628 - 628) != Uilr1JC % (936 - 932))) && (Uilr1JC % (347 - 247) != (653 - 653)) || (!((359 - 359) != Uilr1JC % (817 - 417))))
            XuWaho0v = XuWaho0v +iQXK6pA[oeWqmN0a - 1];
        else
            XuWaho0v = XuWaho0v +zXZeDT[oeWqmN0a - 1];
    }
    XuWaho0v += date2;
    if (ksT2gIVAL == Uilr1JC)
        tQo4GiXlzj = (410 - 410);
    else
        for (oeWqmN0a = ksT2gIVAL; oeWqmN0a <= Uilr1JC -1; oeWqmN0a = oeWqmN0a + 1) {
            if ((!((54 - 54) != oeWqmN0a % 4)) && (oeWqmN0a % (510 - 410) != (923 - 923)) || !(0 != (oeWqmN0a % 400)))
                tQo4GiXlzj = tQo4GiXlzj + (766 - 400);
            else
                tQo4GiXlzj += (683 - 318);
        }
    printf ("%d", tQo4GiXlzj - sh4XKVQME + XuWaho0v);
    return 0;
}

