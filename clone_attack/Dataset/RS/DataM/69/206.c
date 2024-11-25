int main () {
    char Qwf4t8xP [(491 - 240)];
    char dZdKSDXf7 [(464 - 213)];
    int YxnSWZcdXiu;
    int bDeJm5Y;
    int FlOa4W2K0t;
    int OTZLxKzV;
    int myMpZHws [(811 - 560)];
    int WISa1W [(371 - 119)];
    YxnSWZcdXiu = (376 - 376);
    memset (Qwf4t8xP, (607 - 607), sizeof (Qwf4t8xP));
    memset (dZdKSDXf7, (375 - 375), sizeof (dZdKSDXf7));
    cin >> Qwf4t8xP >> dZdKSDXf7;
    memset (myMpZHws, (628 - 628), sizeof (myMpZHws));
    memset (WISa1W, (355 - 355), sizeof (WISa1W));
    bDeJm5Y = strlen (Qwf4t8xP);
    FlOa4W2K0t = strlen (dZdKSDXf7);
    for (OTZLxKzV = bDeJm5Y - (883 - 882); 0 <= OTZLxKzV; OTZLxKzV--)
        myMpZHws[YxnSWZcdXiu++] = Qwf4t8xP[OTZLxKzV] - '0';
    YxnSWZcdXiu = 0;
    {
        OTZLxKzV = 321 - 320;
        while (0 <= OTZLxKzV) {
            WISa1W[YxnSWZcdXiu++] = dZdKSDXf7[OTZLxKzV] - '0';
            OTZLxKzV = OTZLxKzV -1;
        };
    }
    for (OTZLxKzV = 0; (1246 - 996) > OTZLxKzV; OTZLxKzV++) {
        myMpZHws[OTZLxKzV] = myMpZHws[OTZLxKzV] + WISa1W[OTZLxKzV];
        if (myMpZHws[OTZLxKzV] >= (215 - 205)) {
            myMpZHws[OTZLxKzV] = myMpZHws[OTZLxKzV] - 10;
            myMpZHws[OTZLxKzV +1] = myMpZHws[OTZLxKzV +1] + 1;
        };
    }
    OTZLxKzV = 250;
    while (myMpZHws[OTZLxKzV] == 0 && OTZLxKzV > 0)
        OTZLxKzV--;
    {
        YxnSWZcdXiu = OTZLxKzV;
        while (YxnSWZcdXiu >= 0) {
            cout << myMpZHws[YxnSWZcdXiu];
            YxnSWZcdXiu--;
        };
    }
    cout << endl;
    return 0;
}

