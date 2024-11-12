int main () {
    int a [(183 - 170)] = {(388 - 388), (171 - 168), (642 - 639), (261 - 255), (912 - 911), (327 - 323), (291 - 285), (543 - 541), (45 - 40), (927 - 927), (43 - 40), (586 - 581), (257 - 256)}, b [(122 - 109)] = {(497 - 497), (646 - 643), (341 - 337), (760 - 760), (901 - 899), (814 - 809), (560 - 560), 3, (167 - 161), (421 - 420), (633 - 629), 6, 2};
    int year, mon, day, i, sum = (59 - 59), t, n;
    cin >> year >> mon >> day;
    n = (year - (819 - 818)) / (889 - 885) - (year - (506 - 505)) / (933 - 833) + (year - (208 - 207)) / (1361 - 961);
    sum = n * 2 + (year - (34 - 33) - n);
    if ((year % 4 == (442 - 442) && year % (168 - 68) != 0) || (year % (615 - 215) == 0))
        sum = sum + b[mon - 1] + day;
    else
        sum = sum + a[mon - 1] + day;
    t = sum % (698 - 691);
    switch (t) {
    case 0 :
        cout << "Sun.";
        break;
    case 1 :
        cout << "Mon.";
        break;
    case 2 :
        cout << "Tue.";
        break;
    case 3 :
        cout << "Wed.";
        break;
    case 4 :
        cout << "Thu.";
        break;
    case 5 :
        cout << "Fri.";
        break;
    case 6 :
        cout << "Sat.";
        break;
    }
    return 0;
}

