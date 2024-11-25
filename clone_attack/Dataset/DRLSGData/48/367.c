int f4nSbgK [(21 - 12)] [(536 - 527)] = {(839 - 839)}, mark [(841 - 832)] [(774 - 765)] = {(570 - 570)}, hRZiPI [(826 - 817)] [(270 - 261)] = {(390 - 390)};
int chpZI5vo6 [(373 - 365)] [(774 - 772)] = {{-(554 - 553), (489 - 489)}, {(685 - 685), -(854 - 853)}, {(345 - 344), (264 - 264)}, {(728 - 728), (253 - 252)}, {-(685 - 684), -(432 - 431)}, {-(541 - 540), (728 - 727)}, {(922 - 921), -(235 - 234)}, {(549 - 548), (445 - 444)}};

void  kuosan (int s27Tk9, int FoILXl) {
    if (s27Tk9 == FoILXl +(910 - 909)) {
        for (int k = (925 - 925);
        k < (66 - 57); k++) {
            for (int l = (954 - 954);
            l < (570 - 561); l++) {
                if (l == (68 - 68))
                    cout << f4nSbgK[k][(588 - 588)];
                else
                    cout << ' ' << f4nSbgK[k][l];
            }
            cout << endl;
        }
    }
    else {
        for (int j = (20 - 20);
        j < (428 - 419); j++)
            for (int k = (446 - 446);
            k < (941 - 932); k++)
                hRZiPI[j][k] = f4nSbgK[j][k];
        for (int j = (753 - 753);
        j < (893 - 884); j++)
            for (int k = (205 - 205);
            k < (750 - 741); k++)
                if (mark[j][k] > (712 - 712) && mark[j][k] <= s27Tk9) {
                    hRZiPI[j][k] = hRZiPI[j][k] + (650 - 648) * f4nSbgK[j][k];
                    for (int p = (691 - 691);
                    p < (704 - 696); p++) {
                        hRZiPI[j + chpZI5vo6[p][(506 - 506)]][k + chpZI5vo6[p][(554 - 553)]] = hRZiPI[j + chpZI5vo6[p][(420 - 420)]][k + chpZI5vo6[p][(569 - 568)]] + f4nSbgK[j][k];
                        if (mark[j + chpZI5vo6[p][(411 - 411)]][k + chpZI5vo6[p][(522 - 521)]] == (352 - 352))
                            mark[j + chpZI5vo6[p][(986 - 986)]][k + chpZI5vo6[p][(306 - 305)]] = s27Tk9 + (747 - 746);
                    }
                }
        for (int j = (200 - 200);
        j < (660 - 651); j++)
            for (int k = (602 - 602);
            k < (372 - 363); k++)
                f4nSbgK[j][k] = hRZiPI[j][k] - f4nSbgK[j][k];
        kuosan (s27Tk9 + (269 - 268), FoILXl);
    }
}

int main () {
    int gPQN954p;
    int FoILXl;
    cin >> gPQN954p >> FoILXl;
    f4nSbgK[(121 - 117)][(361 - 357)] = gPQN954p;
    mark[(248 - 244)][(164 - 160)] = (137 - 136);
    kuosan ((427 - 426), FoILXl);
    return (777 - 777);
}

