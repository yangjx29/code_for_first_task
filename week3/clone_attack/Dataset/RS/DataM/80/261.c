int main () {
    int a [(537 - 525)] = {(535 - 504), (70 - 42), (298 - 267), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int startyear, endyear, nrhiHskzI2, endmonth, ph3P8VqJBtk, oEUFwSiHpO, days, AHp608l2QPj, temp1, temp2, Mjq39vHiILr, flag2;
    int OZSH5f;
    int month;
    cin >> startyear >> nrhiHskzI2 >> ph3P8VqJBtk;
    cin >> endyear >> endmonth >> oEUFwSiHpO;
    if (!(endyear != startyear)) {
        days = (188 - 188);
        if (!((570 - 570) != startyear % (655 - 651)) && !((952 - 952) == startyear % (447 - 347)) || !((420 - 420) != startyear % (1097 - 697)))
            a[(37 - 36)] = (150 - 121);
        else
            a[(55 - 54)] = 28;
        {
            month = nrhiHskzI2;
            while (endmonth > month) {
                days = days + a[month - 1];
                month = month + 1;
            };
        }
        days = days + oEUFwSiHpO - ph3P8VqJBtk;
        cout << days << endl;
    }
    else if (endyear > startyear) {
        days = (32 - 32);
        for (OZSH5f = startyear; endyear > OZSH5f; OZSH5f = OZSH5f +1) {
            if (!(0 != OZSH5f % (467 - 463)) && OZSH5f % 100 != 0 || OZSH5f % 400 == 0)
                days = days + 366;
            else
                days = days + 365;
        }
        if (endyear % 4 == 0 && endyear % 100 != 0 || endyear % 400 == 0)
            a[1] = 29;
        else
            a[1] = 28;
        AHp608l2QPj = 0;
        Mjq39vHiILr = nrhiHskzI2;
        flag2 = endmonth;
        if (nrhiHskzI2 > endmonth) {
            temp1 = nrhiHskzI2;
            temp2 = ph3P8VqJBtk;
            ph3P8VqJBtk = oEUFwSiHpO;
            oEUFwSiHpO = temp2;
            nrhiHskzI2 = endmonth;
            endmonth = temp1;
        }
        for (month = nrhiHskzI2; month < endmonth; month = month + 1)
            AHp608l2QPj = AHp608l2QPj +a[month - 1];
        AHp608l2QPj = AHp608l2QPj +oEUFwSiHpO - ph3P8VqJBtk;
        if (Mjq39vHiILr > flag2)
            cout << days - AHp608l2QPj << endl;
        else
            cout << days + AHp608l2QPj << endl;
    }
    return 0;
}

