int main () {
    int TU53Rtw9EBr7;
    int a;
    int mrjykmGt;
    int c;
    int k [(416 - 410)];
    int p [(861 - 855)];
    int axWRcb;
    for (a = (871 - 870); a <= (336 - 331); a++) {
        for (mrjykmGt = (639 - 638); mrjykmGt <= (872 - 867); mrjykmGt++) {
            if (mrjykmGt == a)
                continue;
            for (c = (442 - 441); c <= (615 - 610); c++) {
                if (c == a || mrjykmGt == c)
                    continue;
                for (axWRcb = (132 - 131); axWRcb <= (708 - 703); axWRcb++) {
                    if (axWRcb == c || axWRcb == a || axWRcb == mrjykmGt)
                        continue;
                    for (TU53Rtw9EBr7 = (88 - 87); TU53Rtw9EBr7 <= (411 - 406); TU53Rtw9EBr7++)
                        if (TU53Rtw9EBr7 == c || TU53Rtw9EBr7 == a || TU53Rtw9EBr7 == mrjykmGt || TU53Rtw9EBr7 == axWRcb || TU53Rtw9EBr7 == (885 - 883) || TU53Rtw9EBr7 == (919 - 916))
                            continue;
                        else {
                            p[a] = (648 - 647);
                            p[mrjykmGt] = (199 - 197);
                            p[c] = (209 - 206);
                            p[axWRcb] = (452 - 448);
                            p[TU53Rtw9EBr7] = (957 - 952);
                            k[(471 - 470)] = TU53Rtw9EBr7 == (196 - 195);
                            k[(628 - 626)] = mrjykmGt == (970 - 968);
                            k[(104 - 101)] = a == (520 - 515);
                            k[(963 - 959)] = c != (684 - 683);
                            k[(735 - 730)] = axWRcb == (965 - 964);
                            if (k[p[1]] == 1 && k[p[(543 - 541)]] == 1 && k[p[(571 - 568)]] == (136 - 136) && k[p[(998 - 994)]] == (30 - 30) && k[p[5]] == (827 - 827))
                                cout << a << ' ' << mrjykmGt << ' ' << c << ' ' << axWRcb << ' ' << TU53Rtw9EBr7;
                        }
                }
            }
        }
    }
    return 0;
}

