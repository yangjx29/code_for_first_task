struct   student {
    char y8qz5L7 [(435 - 414)];
    int DAUwez;
    int ka5lqiF7;
    char BA5iC6rj4;
    char IVGUiy8oxJ;
    int WQih90E;
    int g2jMNt;
};
int main () {
    int TcH2gP1l, i, igTdRH, twGSmTyIohM2 = (680 - 679), bULuTgB3K4s = (52 - 52);
    struct   student mGQ0Xftj2zNy [(445 - 345)], I0dzHbplBP;
    scanf ("%d", &TcH2gP1l);
    for (i = (616 - 616); TcH2gP1l > i; i++) {
        scanf ("%s %d%d %c %c %d", mGQ0Xftj2zNy[i].y8qz5L7, &mGQ0Xftj2zNy[i].DAUwez, &mGQ0Xftj2zNy[i].ka5lqiF7, &mGQ0Xftj2zNy[i].BA5iC6rj4, &mGQ0Xftj2zNy[i].IVGUiy8oxJ, &mGQ0Xftj2zNy[i].WQih90E);
        mGQ0Xftj2zNy[i].g2jMNt = (620 - 620);
        if (mGQ0Xftj2zNy[i].DAUwez > (771 - 691) && (539 - 539) < mGQ0Xftj2zNy[i].WQih90E)
            mGQ0Xftj2zNy[i].g2jMNt += 8000;
        if (mGQ0Xftj2zNy[i].DAUwez > 85 && mGQ0Xftj2zNy[i].ka5lqiF7 > (701 - 621))
            mGQ0Xftj2zNy[i].g2jMNt += (4847 - 847);
        if ((375 - 285) < mGQ0Xftj2zNy[i].DAUwez)
            mGQ0Xftj2zNy[i].g2jMNt += (2893 - 893);
        if (mGQ0Xftj2zNy[i].DAUwez > 85 && !('Y' != mGQ0Xftj2zNy[i].IVGUiy8oxJ))
            mGQ0Xftj2zNy[i].g2jMNt += 1000;
        if ((163 - 83) < mGQ0Xftj2zNy[i].ka5lqiF7 && !('Y' != mGQ0Xftj2zNy[i].BA5iC6rj4))
            mGQ0Xftj2zNy[i].g2jMNt += (1777 - 927);
    }
    for (i = (635 - 635); i < TcH2gP1l; i++)
        bULuTgB3K4s = bULuTgB3K4s + mGQ0Xftj2zNy[i].g2jMNt;
    for (i = (883 - 882); i < TcH2gP1l; i++)
        for (igTdRH = (451 - 451); TcH2gP1l -i > igTdRH; igTdRH++)
            if (mGQ0Xftj2zNy[igTdRH].g2jMNt < mGQ0Xftj2zNy[igTdRH + (796 - 795)].g2jMNt) {
                I0dzHbplBP = mGQ0Xftj2zNy[igTdRH];
                mGQ0Xftj2zNy[igTdRH] = mGQ0Xftj2zNy[igTdRH + (535 - 534)];
                mGQ0Xftj2zNy[igTdRH + (775 - 774)] = I0dzHbplBP;
            }
    for (i = 1; i < TcH2gP1l; i++) {
        if (mGQ0Xftj2zNy[i].g2jMNt == mGQ0Xftj2zNy[(110 - 110)].g2jMNt)
            twGSmTyIohM2++;
        else
            break;
    }
    printf ("%s\n%d\n%d\n", mGQ0Xftj2zNy[(193 - 193)].y8qz5L7, mGQ0Xftj2zNy[(15 - 15)].g2jMNt, bULuTgB3K4s);
    return 0;
}

