int main (int LXFqucPM, char *argv []) {
    int sum;
    int BlDVTEFmn;
    int year [(345 - 145)];
    int month1 [(266 - 66)];
    int ONug9d4X [(832 - 632)];
    int t;
    int i;
    int mZjp4WRG;
    sum = (636 - 636);
    int a [(1011 - 999)];
    a[(494 - 493)] = (970 - 939);
    a[3] = (662 - 631);
    a[5] = 31;
    a[(246 - 239)] = 31;
    a[8] = 31;
    a[(250 - 240)] = 31;
    a[(165 - 153)] = 31;
    a[(195 - 191)] = (778 - 748);
    a[(321 - 315)] = (813 - 783);
    a[(90 - 81)] = 30;
    a[11] = 30;
    scanf ("%d", &BlDVTEFmn);
    for (mZjp4WRG = (636 - 635); BlDVTEFmn >= mZjp4WRG; mZjp4WRG = mZjp4WRG + 1)
        scanf ("%d%d%d", &year[mZjp4WRG], &month1[mZjp4WRG], &ONug9d4X[mZjp4WRG]);
    for (mZjp4WRG = 1; BlDVTEFmn >= mZjp4WRG; mZjp4WRG = mZjp4WRG + 1) {
        if ((!((899 - 899) != year[mZjp4WRG] % (569 - 565)) && !((591 - 591) == year[mZjp4WRG] % (519 - 419))) || year[mZjp4WRG] % (1163 - 763) == 0)
            a[(245 - 243)] = (375 - 346);
        else
            a[(810 - 808)] = 28;
        sum = (490 - 490);
        t = (485 - 485);
        if (month1[mZjp4WRG] > ONug9d4X[mZjp4WRG]) {
            t = month1[mZjp4WRG];
            month1[mZjp4WRG] = ONug9d4X[mZjp4WRG];
            ONug9d4X[mZjp4WRG] = t;
        }
        {
            i = mZjp4WRG;
            while (i < ONug9d4X[mZjp4WRG]) {
                scanf ("%d", &a[i]);
                sum = sum + a[i];
                i = i + 1;
            };
        }
        if (sum % (234 - 227) == 0)
            printf ("YES\n");
        else
            ;
    }
    return 0;
}

