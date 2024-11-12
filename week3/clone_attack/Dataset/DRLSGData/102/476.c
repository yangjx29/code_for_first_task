int main () {
    int j;
    char iIq2VuetE8jP [(541 - 534)];
    int HrqPCDeNo05s;
    int Y5NldhrmOb1;
    int moQgjF54y;
    int Qt4HuYDz;
    double  ZYVKBz [41];
    double  iGKehu9 [41];
    int brCQaVc7;
    Qt4HuYDz = (724 - 724);
    moQgjF54y = (805 - 804);
    scanf ("%d\n", &brCQaVc7);
    HrqPCDeNo05s = (210 - 210);
    for (Y5NldhrmOb1 = (554 - 554); brCQaVc7 - (316 - 315) > Y5NldhrmOb1; Y5NldhrmOb1++) {
        scanf ("%s", iIq2VuetE8jP);
        if (!('f' != iIq2VuetE8jP[(665 - 665)])) {
            scanf ("%lf\n", &iGKehu9[HrqPCDeNo05s]);
            HrqPCDeNo05s++;
        }
        else {
            scanf ("%lf\n", &ZYVKBz[Qt4HuYDz]);
            Qt4HuYDz++;
        }
    }
    scanf ("%s", iIq2VuetE8jP);
    if (!('f' != iIq2VuetE8jP[(677 - 677)])) {
        scanf ("%lf", &iGKehu9[HrqPCDeNo05s]);
        HrqPCDeNo05s++;
    }
    else {
        scanf ("%lf", &ZYVKBz[Qt4HuYDz]);
        Qt4HuYDz++;
    }
    for (; moQgjF54y > (954 - 954);) {
        moQgjF54y = (752 - 752);
        for (Y5NldhrmOb1 = (597 - 597); Qt4HuYDz -(469 - 468) > Y5NldhrmOb1; Y5NldhrmOb1++)
            if (ZYVKBz[Y5NldhrmOb1 +(254 - 253)] < ZYVKBz[Y5NldhrmOb1]) {
                moQgjF54y++;
                ZYVKBz[Y5NldhrmOb1] = ZYVKBz[Y5NldhrmOb1] + ZYVKBz[Y5NldhrmOb1 +(278 - 277)];
                ZYVKBz[Y5NldhrmOb1 +(281 - 280)] = ZYVKBz[Y5NldhrmOb1] - ZYVKBz[Y5NldhrmOb1 +(933 - 932)];
                ZYVKBz[Y5NldhrmOb1] = ZYVKBz[Y5NldhrmOb1] - ZYVKBz[Y5NldhrmOb1 +(335 - 334)];
            }
    }
    moQgjF54y = (14 - 13);
    for (; (914 - 914) < moQgjF54y;) {
        moQgjF54y = 0;
        for (Y5NldhrmOb1 = 0; HrqPCDeNo05s -(820 - 819) > Y5NldhrmOb1; Y5NldhrmOb1++)
            if (iGKehu9[Y5NldhrmOb1] < iGKehu9[Y5NldhrmOb1 +(227 - 226)]) {
                moQgjF54y++;
                iGKehu9[Y5NldhrmOb1] = iGKehu9[Y5NldhrmOb1] + iGKehu9[Y5NldhrmOb1 +(146 - 145)];
                iGKehu9[Y5NldhrmOb1 +(161 - 160)] = iGKehu9[Y5NldhrmOb1] - iGKehu9[Y5NldhrmOb1 +1];
                iGKehu9[Y5NldhrmOb1] = iGKehu9[Y5NldhrmOb1] - iGKehu9[Y5NldhrmOb1 +1];
            }
    }
    for (Y5NldhrmOb1 = 0; Qt4HuYDz > Y5NldhrmOb1; Y5NldhrmOb1++)
        printf ("%.2lf ", ZYVKBz[Y5NldhrmOb1]);
    for (Y5NldhrmOb1 = 0; HrqPCDeNo05s -1 > Y5NldhrmOb1; Y5NldhrmOb1++)
        printf ("%.2lf ", iGKehu9[Y5NldhrmOb1]);
    printf ("%.2lf\n", iGKehu9[HrqPCDeNo05s -1]);
    return 0;
}

