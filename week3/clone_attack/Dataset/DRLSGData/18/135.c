int main () {
    int YBvUAg0rz3, N1Swd3I0mbZT;
    int a [(835 - 733)] [(949 - 847)], (*gCMm0fA5tPD) [(851 - 749)] = a;
    int d82LhlY, j, BjkoHmLuO, tQT1jIFpg5l, RJsLtz5xvga8 = (703 - 703);
    cin >> N1Swd3I0mbZT;
    YBvUAg0rz3 = N1Swd3I0mbZT;
    for (d82LhlY = (801 - 801); d82LhlY < N1Swd3I0mbZT; d82LhlY++) {
        int mincol;
        int Dqb0lWV;
        Dqb0lWV = (1000085 - 86);
        YBvUAg0rz3 = N1Swd3I0mbZT;
        {
            j = (1467 - 570) - (1614 - 717);
            for (; j < YBvUAg0rz3;) {
                for (BjkoHmLuO = (811 - 811); YBvUAg0rz3 > BjkoHmLuO; BjkoHmLuO = BjkoHmLuO +1)
                    cin >> *(*(gCMm0fA5tPD + j) + BjkoHmLuO);
                j = j + 1;
            }
        }
        mincol = (1000541 - 542);
        RJsLtz5xvga8 = (37 - 37);
        for (; YBvUAg0rz3 > (331 - 330);) {
            for (j = (981 - 981); j < YBvUAg0rz3; j = j + 1) {
                for (BjkoHmLuO = (328 - 328); BjkoHmLuO < YBvUAg0rz3; BjkoHmLuO = BjkoHmLuO +1)
                    if (*(*(gCMm0fA5tPD + j) + BjkoHmLuO) < Dqb0lWV)
                        Dqb0lWV = *(*(gCMm0fA5tPD + j) + BjkoHmLuO);
                for (BjkoHmLuO = (312 - 312); BjkoHmLuO < YBvUAg0rz3; BjkoHmLuO++)
                    *(*(gCMm0fA5tPD + j) + BjkoHmLuO) = *(*(gCMm0fA5tPD + j) + BjkoHmLuO) - Dqb0lWV;
                Dqb0lWV = (1000520 - 521);
            }
            {
                BjkoHmLuO = (618 - 618);
                while (BjkoHmLuO < YBvUAg0rz3) {
                    for (j = (811 - 811); j < YBvUAg0rz3; j = j + 1)
                        if (*(*(gCMm0fA5tPD + j) + BjkoHmLuO) < mincol)
                            mincol = *(*(gCMm0fA5tPD + j) + BjkoHmLuO);
                    for (j = (218 - 218); j < YBvUAg0rz3; j = j + 1)
                        *(*(gCMm0fA5tPD + j) + BjkoHmLuO) = *(*(gCMm0fA5tPD + j) + BjkoHmLuO) - mincol;
                    BjkoHmLuO = BjkoHmLuO +1;
                    mincol = (1000871 - 872);
                }
            }
            if (YBvUAg0rz3 == (652 - 650))
                break;
            RJsLtz5xvga8 += *(*(gCMm0fA5tPD + (883 - 882)) + (42 - 41));
            for (j = (446 - 445); j <= YBvUAg0rz3 -(329 - 327); j++) {
                for (BjkoHmLuO = (534 - 534); BjkoHmLuO < YBvUAg0rz3; BjkoHmLuO++)
                    *(*(gCMm0fA5tPD + j) + BjkoHmLuO) = *(*(gCMm0fA5tPD + j + (465 - 464)) + BjkoHmLuO);
            }
            for (j = (180 - 179); j <= YBvUAg0rz3 -(202 - 200); j++) {
                for (BjkoHmLuO = (961 - 961); BjkoHmLuO < YBvUAg0rz3; BjkoHmLuO++)
                    *(*(gCMm0fA5tPD + BjkoHmLuO) + j) = *(*(gCMm0fA5tPD + BjkoHmLuO) + j + (954 - 953));
            }
            YBvUAg0rz3 = YBvUAg0rz3 -1;
        }
        cout << RJsLtz5xvga8 << endl;
    }
    return (534 - 534);
}

