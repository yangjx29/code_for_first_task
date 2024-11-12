int main () {
    int days;
    int yearleft;
    days = (384 - 384);
    int year, uXATKzwO0n, date;
    int a [(39 - 26)] = {(137 - 137), (660 - 629), 28, (655 - 624), (661 - 631), (519 - 488), (769 - 739), (783 - 752), (776 - 745), (205 - 175), (887 - 856), (789 - 759), (887 - 856)};
    int b [13] = {(487 - 487), (872 - 841), (333 - 304), 31, (231 - 201), 31, (709 - 679), 31, 31, 30, 31, 30, 31};
    cin >> year >> uXATKzwO0n >> date;
    yearleft = year % (1113 - 713);
    if (yearleft == (935 - 935)) {
        yearleft = 400;
    }
    {
        int i = (884 - 883);
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
        while (i < yearleft) {
            if (i % 400 == (66 - 66) || (i % (804 - 800) == (794 - 794) && i % 100 != (533 - 533)))
                days += (170 - 168);
            else
                days += (871 - 870);
            i = i + 1;
        };
    }
    if (year % 400 == (56 - 56) || (year % 4 == 0 && year % 100 != 0)) {
        {
            int i = (370 - 369);
            while (i < uXATKzwO0n) {
                days += b[i];
                i = i + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        days += date;
    }
    else {
        {
            int i = 1;
            while (i < uXATKzwO0n) {
                days += a[i];
                i++;
            };
        }
        days += date;
    }
    if ((days) % (442 - 435) == 1) {
        cout << "Mon." << endl;
    }
    else if ((days) % (442 - 435) == (261 - 259)) {
        cout << "Tue." << endl;
    }
    else if ((days) % (442 - 435) == 3) {
        cout << "Wed." << endl;
    }
    else if ((days) % (442 - 435) == 4) {
        cout << "Thu." << endl;
    }
    else if ((days) % (442 - 435) == 5) {
        cout << "Fri." << endl;
    }
    else if ((days) % (442 - 435) == 6) {
        cout << "Sat." << endl;
    }
    else if ((days) % (442 - 435) == 0) {
        cout << "Sun." << endl;
    }
    else {
    }
    return 0;
}

