int main () {
    int days;
    int i;
    int year;
    int month;
    int day;
    days = (779 - 779);
    i = (414 - 413);
    int month_str1 [12] = {(242 - 211), 28, (79 - 48), (184 - 154), (423 - 392), (569 - 539), (892 - 861), (105 - 74), (660 - 630), 31, (234 - 204), 31}, month_str2 [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> year >> month >> day;
    if ((!((602 - 602) != year % 4) && !(0 == year % 100)) || year % 400 == 0)
        while (i != month) {
            days = days + month_str2[i - 1];
            i = i + 1;
        }
        else
            while (i != month) {
                days += month_str1[i - 1];
                i = i + 1;
            }
    cout << days + day;
    return 0;
}

