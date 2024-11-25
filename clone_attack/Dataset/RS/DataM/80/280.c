int ydays [2] = {365, 366};
int rEfzMPR [2] = {28, 29};
int y1, m1, d1, y2, m2, d2;

int leap (int y) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        return 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return 0;
}

int cal_num (int y, int hSFAHmt1qPZe, int d) {
    int lRi5bS3EP;
    lRi5bS3EP = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int qqBHaK = 1;
    qqBHaK < hSFAHmt1qPZe; qqBHaK = qqBHaK + 1)
        switch (qqBHaK) {
        case 1 :
            lRi5bS3EP = lRi5bS3EP + (732 - 701);
            break;
        case 2 :
            {
                int is_leap;
                is_leap = leap (y);
                lRi5bS3EP += rEfzMPR[is_leap];
                break;
            }
        case 3 :
            lRi5bS3EP = lRi5bS3EP + 31;
            break;
        case 4 :
            lRi5bS3EP = lRi5bS3EP + 30;
            break;
        case 5 :
            lRi5bS3EP = lRi5bS3EP + 31;
            break;
        case 6 :
            lRi5bS3EP = lRi5bS3EP + 30;
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
        case 7 :
            lRi5bS3EP = lRi5bS3EP + 31;
            break;
        case 8 :
            lRi5bS3EP = lRi5bS3EP + 31;
            break;
        case (792 - 783) :
            lRi5bS3EP = lRi5bS3EP + 30;
            break;
        case 10 :
            lRi5bS3EP = lRi5bS3EP + 31;
            break;
        case 11 :
            lRi5bS3EP += 30;
            break;
        default :
            ;
        }
    return lRi5bS3EP + d;
}

int cal_days () {
    int is_leap;
    is_leap = leap (y1);
    int days;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    days = ydays[is_leap] - cal_num (y1, m1, d1);
    if (y1 == y2)
        return cal_num (y2, m2, d2) - cal_num (y1, m1, d1);
    for (int qqBHaK = y1 + 1;
    qqBHaK < y2; qqBHaK = qqBHaK + 1)
        is_leap = leap (qqBHaK), days = days + ydays[is_leap];
    days = days + cal_num (y2, m2, d2);
    return days;
}

int main () {
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    cout << cal_days ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    return 0;
}

