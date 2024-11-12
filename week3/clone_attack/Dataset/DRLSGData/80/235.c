int main () {
    int days;
    int year [(980 - 978)];
    int Aq4fSNziZE [(114 - 112)];
    int SxP7YLb5jp0N [(215 - 213)];
    days = (425 - 425);
    int u4aqWohAm8C;
    int i;
    int lsa9pP28;
    u4aqWohAm8C = (970 - 970);
    cin >> year[(152 - 152)] >> Aq4fSNziZE[(507 - 507)] >> SxP7YLb5jp0N[(372 - 372)] >> year[(673 - 672)] >> Aq4fSNziZE[(595 - 594)] >> SxP7YLb5jp0N[(623 - 622)];
    int leap_year [(828 - 826)] [(693 - 681)] = {(57 - 26), 28, (510 - 479), (551 - 521), (320 - 289), (973 - 943), (912 - 881), (348 - 317), (778 - 748), (1002 - 971), (810 - 780), (755 - 724), (394 - 363), (716 - 687), (405 - 374), (676 - 646), (426 - 395), 30, 31, 31, 30, 31, 30, 31};
    {
        i = 218 - 217;
        while (year[(571 - 570)] > i) {
            if ((!((646 - 646) != i % (376 - 372)) && i % (196 - 96) != (279 - 279)) || (!((457 - 457) != i % (574 - 174))))
                days += 366;
            else
                days += 365;
            i++;
        }
    }
    if (year[(28 - 28)] != year[(953 - 952)]) {
        {
            i = 711 - 711;
            while ((302 - 290) > i) {
                if ((year[(245 - 245)] % (71 - 67) == (458 - 458) && year[(429 - 429)] % (579 - 479) != (223 - 223)) || (year[(181 - 181)] % (538 - 138) == (406 - 406))) {
                    days += leap_year[(711 - 710)][i];
                    u4aqWohAm8C = (32 - 31);
                }
                else
                    days += leap_year[(169 - 169)][i];
                i++;
            }
        }
        {
            i = 388 - 388;
            while (Aq4fSNziZE[(247 - 246)] - (766 - 765) > i) {
                if ((!((855 - 855) != year[(954 - 953)] % 4) && year[(306 - 305)] % 100 != (652 - 652)) || (!((192 - 192) != year[(282 - 281)] % (636 - 236))))
                    days += leap_year[(760 - 759)][i];
                else
                    days += leap_year[(235 - 235)][i];
                i++;
            }
        }
        days = days + SxP7YLb5jp0N[(119 - 118)] + leap_year[u4aqWohAm8C][Aq4fSNziZE[0] - 1] - SxP7YLb5jp0N[0];
    }
    else {
        if (Aq4fSNziZE[0] != Aq4fSNziZE[1]) {
            {
                i = 0;
                while (Aq4fSNziZE[1] - 1 > i) {
                    if ((year[0] % 4 == 0 && year[0] % 100 != 0) || (year[0] % (1315 - 915) == 0)) {
                        days += leap_year[1][i];
                        u4aqWohAm8C = 1;
                    }
                    else
                        days += leap_year[0][i];
                    i++;
                }
            }
            days = days + SxP7YLb5jp0N[1] + leap_year[u4aqWohAm8C][Aq4fSNziZE[0] - 1] - SxP7YLb5jp0N[0];
        }
        else
            days = days + SxP7YLb5jp0N[1] - SxP7YLb5jp0N[0];
    }
    cout << days << endl;
    return 0;
}

