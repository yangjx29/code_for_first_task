int main () {
    long  long  year;
    int month;
    int day;
    int i;
    int num;
    long  long  a, b, c;
    long  long  sum;
    int imonth [12] = {(796 - 765), 28, (513 - 482), (890 - 860), 31, 30, 31, 31, 30, 31, 30, 31};
    long  long  week;
    cin >> year >> month >> day;
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
    a = (long  long ) (year - (556 - 555)) / (823 - 819);
    b = (long  long ) (year - 1) / 100;
    c = (long  long ) (year - 1) / 400;
    num = a - b + c;
    sum = (year - 1) * 365 + num;
    if (year % 4 == (675 - 675)) {
        if (year % 100 != (449 - 449))
            imonth[1] = 29;
        if (year % 400 == (660 - 660))
            imonth[1] = 29;
    }
    {
        i = 705 - 705;
        while (i < month - 1) {
            sum = sum + imonth[i];
            i++;
        };
    }
    sum = sum + day;
    week = sum % (979 - 972);
    if (week == 0) {
        cout << "Sun." << endl;
    }
    else if (week == 1) {
        cout << "Mon." << endl;
    }
    else if (week == 2) {
        cout << "Tue." << endl;
    }
    else if (week == (131 - 128)) {
        cout << "Wed." << endl;
    }
    else if (week == 4) {
        cout << "Thu." << endl;
    }
    else if (week == (482 - 477)) {
        cout << "Fri." << endl;
    }
    else if (week == (983 - 977)) {
        cout << "Sat." << endl;
    }
    else {
    }
    return 0;
}

