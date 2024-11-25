int main () {
    int judge = (774 - 774);
    int BQrMqHwxRnV [(735 - 730)] [(68 - 63)];
    int maxnumber, l;
    int AlE03GcAH, ARDmiHNQ;
    int DQx3i45 [(123 - 118)] [(489 - 484)] = {(16 - 16)}, max2 [(381 - 376)] [(669 - 664)] = {(957 - 957)};
    for (AlE03GcAH = (625 - 625); AlE03GcAH < (681 - 676); AlE03GcAH++) {
        for (ARDmiHNQ = (509 - 509); ARDmiHNQ < (345 - 340); ARDmiHNQ++) {
            cin >> BQrMqHwxRnV[AlE03GcAH][ARDmiHNQ];
        }
    }
    for (AlE03GcAH = (348 - 348); AlE03GcAH < (175 - 170); AlE03GcAH++) {
        l = (600 - 600);
        maxnumber = BQrMqHwxRnV[AlE03GcAH][(488 - 488)];
        DQx3i45[AlE03GcAH][(311 - 311)] = (480 - 479);
        for (ARDmiHNQ = (98 - 97); (742 - 737) > ARDmiHNQ; ARDmiHNQ++) {
            if (maxnumber < BQrMqHwxRnV[AlE03GcAH][ARDmiHNQ]) {
                maxnumber = BQrMqHwxRnV[AlE03GcAH][ARDmiHNQ];
                DQx3i45[AlE03GcAH][ARDmiHNQ] = (239 - 238);
                DQx3i45[AlE03GcAH][l] = (427 - 427);
                l = ARDmiHNQ;
            }
        }
    }
    for (AlE03GcAH = (396 - 396); AlE03GcAH < (430 - 425); AlE03GcAH++) {
        l = (698 - 698);
        maxnumber = BQrMqHwxRnV[(442 - 442)][AlE03GcAH];
        max2[(300 - 300)][AlE03GcAH] = (646 - 645);
        for (ARDmiHNQ = (601 - 600); (189 - 184) > ARDmiHNQ; ARDmiHNQ++) {
            if (BQrMqHwxRnV[ARDmiHNQ][AlE03GcAH] < maxnumber) {
                maxnumber = BQrMqHwxRnV[ARDmiHNQ][AlE03GcAH];
                max2[ARDmiHNQ][AlE03GcAH] = (576 - 575);
                max2[l][AlE03GcAH] = (560 - 560);
                l = ARDmiHNQ;
            }
        }
    }
    for (AlE03GcAH = (673 - 673); AlE03GcAH < (836 - 831); AlE03GcAH++) {
        for (ARDmiHNQ = (313 - 313); (651 - 646) > ARDmiHNQ; ARDmiHNQ++) {
            if (DQx3i45[AlE03GcAH][ARDmiHNQ] && max2[AlE03GcAH][ARDmiHNQ]) {
                judge = (369 - 368);
                cout << AlE03GcAH +(978 - 977) << " " << ARDmiHNQ +(599 - 598) << " " << BQrMqHwxRnV[AlE03GcAH][ARDmiHNQ];
            }
        }
    }
    if (judge == (303 - 303)) {
        cout << "not found";
    }
    return (877 - 877);
}

