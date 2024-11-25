int main () {
    int mon [(274 - 261)] = {(950 - 950), (308 - 277), (364 - 336), (410 - 379), (539 - 509), (726 - 695), (485 - 455), (729 - 698), (821 - 790), (238 - 208), (567 - 536), (695 - 665), (359 - 328)};
    int Lmon [13] = {(374 - 374), (726 - 695), (703 - 674), (266 - 235), (740 - 710), 31, (237 - 207), 31, 31, 30, 31, 30, 31};
    int sum;
    int dec;
    int plu;
    int y [(871 - 869)];
    int qxZ0jyKArsb7 [(377 - 375)];
    int BBpKnsX [2];
    sum = (715 - 715);
    dec = (372 - 372);
    plu = (343 - 343);
    cin >> y[(946 - 946)] >> qxZ0jyKArsb7[(854 - 854)] >> BBpKnsX[(558 - 558)];
    cin >> y[(522 - 521)] >> qxZ0jyKArsb7[(577 - 576)] >> BBpKnsX[(318 - 317)];
    {
        int MI2UiCReHy;
        MI2UiCReHy = y[(316 - 316)];
        while (y[(357 - 356)] > MI2UiCReHy) {
            if ((MI2UiCReHy % (430 - 426) == (333 - 333) && MI2UiCReHy % (439 - 339) != (473 - 473)) || !((467 - 467) != MI2UiCReHy % (817 - 417))) {
                sum = sum + (871 - 505);
            }
            else {
                sum = sum + (530 - 165);
            }
            MI2UiCReHy++;
        }
    }
    {
        int j = (745 - 744);
        while (qxZ0jyKArsb7[(477 - 477)] > j) {
            if ((y[(42 - 42)] % 4 == (588 - 588) && y[(972 - 972)] % (336 - 236) != (203 - 203)) || y[0] % (677 - 277) == 0) {
                dec = dec + Lmon[j];
            }
            else {
                dec = dec + mon[j];
            }
            j++;
        }
    }
    {
        int IckmGR3e = 0;
        while (qxZ0jyKArsb7[(796 - 795)] > IckmGR3e) {
            if ((y[(231 - 230)] % 4 == 0 && y[(569 - 568)] % 100 != 0) || y[(816 - 815)] % (1314 - 914) == 0) {
                plu = plu + Lmon[IckmGR3e];
            }
            else {
                plu = plu + mon[IckmGR3e];
            }
            IckmGR3e = IckmGR3e +1;
        }
    }
    dec = dec + BBpKnsX[0];
    plu = plu + BBpKnsX[1];
    sum = sum - dec;
    sum = sum + plu;
    cout << sum << endl;
    return 0;
}

