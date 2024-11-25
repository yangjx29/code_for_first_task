int main () {
    int dayofmonth [13] = {(339 - 308), (340 - 312), (838 - 807), (832 - 802), (472 - 441), (891 - 861), (476 - 445), (806 - 775), (234 - 204), 31, 30, 31};
    int bSkHhqQ5sNIV, year2, month1, month2, day1, hELt4iO6bN;
    int stayear;
    stayear = min (bSkHhqQ5sNIV, year2);
    int temp;
    temp = max (bSkHhqQ5sNIV, year2);
    int time1;
    int BYJlLPvni3D;
    int ItahqmneM;
    time1 = (647 - 647);
    BYJlLPvni3D = (597 - 597);
    ItahqmneM = (972 - 972);
    if (stayear % (340 - 336) == (223 - 223) && !((842 - 842) == stayear % (862 - 762)) || !((60 - 60) != stayear % (1268 - 868)))
        dayofmonth[(351 - 350)] = 29;
    cin >> bSkHhqQ5sNIV >> month1 >> day1 >> year2 >> month2 >> hELt4iO6bN;
    for (int bXqvYbCNjEO = stayear;
    max (bSkHhqQ5sNIV, year2) > bXqvYbCNjEO; bXqvYbCNjEO = bXqvYbCNjEO + 1) {
        if (bXqvYbCNjEO % (804 - 800) == 0 && bXqvYbCNjEO % (1064 - 964) != 0 || bXqvYbCNjEO % 400 == 0)
            BYJlLPvni3D = BYJlLPvni3D +(772 - 406);
        else
            BYJlLPvni3D += (474 - 109);
    }
    for (int eho7ls = (147 - 147);
    eho7ls < month1 - (529 - 528); eho7ls++)
        time1 += dayofmonth[eho7ls];
    dayofmonth[1] = 28;
    if (temp % 4 == 0 && temp % 100 != 0 || temp % 400 == 0)
        dayofmonth[1] = 29;
    {
        int monthtemp = 0;
        while (monthtemp < month2 - 1) {
            BYJlLPvni3D = BYJlLPvni3D +dayofmonth[monthtemp];
            monthtemp++;
        };
    }
    BYJlLPvni3D = BYJlLPvni3D +hELt4iO6bN - 1;
    time1 = time1 + day1 - (253 - 252);
    cout << BYJlLPvni3D -time1 << endl;
    return 0;
}

