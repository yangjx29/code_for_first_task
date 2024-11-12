int main () {
    int gHcbX0r;
    int i;
    int aSDh1zZpPy;
    int date [(540 - 538)] [(285 - 282)];
    int zniYLTJ4sqOp [(329 - 317)] = {(258 - 227), (851 - 823), (70 - 39), (705 - 675), 31, 30, 31, 31, 30, 31, 30, 31};
    gHcbX0r = (316 - 316);
    {
        i = 798 - 798;
        while (i < (872 - 870)) {
            for (aSDh1zZpPy = (680 - 680); (811 - 808) > aSDh1zZpPy; aSDh1zZpPy++)
                cin >> date[i][aSDh1zZpPy];
            i = i + 1;
        };
    }
    {
        i = 723 - 722;
        while (i < date[(386 - 385)][(29 - 29)]) {
            if (i % (861 - 857) == (644 - 644) && !((404 - 404) == i % (792 - 692)) || !((819 - 819) != i % (1326 - 926)))
                gHcbX0r = gHcbX0r + 366;
            else
                gHcbX0r = gHcbX0r + (1177 - 812);
            i++;
        };
    }
    if (!((43 - 43) != date[(760 - 760)][(408 - 408)] % (173 - 169)) && !((706 - 706) == date[(923 - 923)][(280 - 280)] % (1088 - 988)) || !((109 - 109) != date[(662 - 662)][(508 - 508)] % (766 - 366)))
        zniYLTJ4sqOp[(894 - 893)] = (910 - 881);
    for (i = date[0][(183 - 182)]; i <= 11; i++)
        gHcbX0r = gHcbX0r + zniYLTJ4sqOp[i];
    gHcbX0r = gHcbX0r + zniYLTJ4sqOp[date[0][(757 - 756)] - (558 - 557)] - date[0][2] + (381 - 380);
    if (date[(814 - 813)][0] % 4 == 0 && date[(270 - 269)][0] % 100 != 0 || date[(952 - 951)][0] % 400 == 0)
        zniYLTJ4sqOp[1] = 29;
    else
        zniYLTJ4sqOp[1] = 28;
    {
        i = 0;
        while (i < date[1][1] - 1) {
            gHcbX0r = gHcbX0r + zniYLTJ4sqOp[i];
            i++;
        };
    }
    gHcbX0r = gHcbX0r + date[1][2];
    if (date[0][0] == date[1][0])
        cout << gHcbX0r - 366 - zniYLTJ4sqOp[1] + 28;
    else
        cout << gHcbX0r - 1;
    return 0;
}

