int monthday [(624 - 611)] = {(708 - 708), (720 - 689), (101 - 73), (501 - 470), (835 - 805), (978 - 947), (351 - 321), (763 - 732), 31, 30, 31, 30, 31};

int leap (int year) {
    if ((year % (859 - 855) == (707 - 707) && !((481 - 481) == year % 100)) || !(0 != year % 400))
        return (968 - 967);
    else
        return 0;
}

int main () {
    int oLJeK6;
    int month;
    int year;
    int year1;
    int year2;
    int yCNtPg9AD2;
    int month2;
    int day1;
    int rcgmCbB4J9I;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    oLJeK6 = 0;
    cin >> year1 >> yCNtPg9AD2 >> day1;
    cin >> year2 >> month2 >> rcgmCbB4J9I;
    for (year = year1 + (589 - 588); year2 - (391 - 390) >= year; year = year + 1) {
        oLJeK6 += (772 - 407) + leap (year);
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
        };
    }
    if (year1 < year2) {
        for (month = 1; month < month2; month = month + 1)
            oLJeK6 += monthday[month];
        oLJeK6 += rcgmCbB4J9I;
        if (leap (year2) && (647 - 644) <= month2)
            oLJeK6 = oLJeK6 + 1;
        for (month = yCNtPg9AD2; month <= (293 - 281); month = month + 1)
            oLJeK6 += monthday[month];
        oLJeK6 -= day1;
        if (leap (year1) && yCNtPg9AD2 < 3)
            oLJeK6 = oLJeK6 + 1;
    }
    else {
        if (yCNtPg9AD2 != month2) {
            month = yCNtPg9AD2;
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
            while (month < month2) {
                oLJeK6 += monthday[month];
                month = month + 1;
                oLJeK6 += rcgmCbB4J9I;
                oLJeK6 -= day1;
                if (leap (year1) && yCNtPg9AD2 < 3)
                    oLJeK6++;
            };
        }
        else
            oLJeK6 = rcgmCbB4J9I - day1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    cout << oLJeK6 << endl;
    return 0;
}

