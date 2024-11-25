int r2plSs (int year);
int dn (int year, int month, int day);
int YhN5tnVlU3E (int year);

int YhN5tnVlU3E (int year) {
    int i5KxZdiWO;
    i5KxZdiWO = year / (502 - 402) * (334 - 310) + (year % (999 - 899)) / (137 - 133) + year / (1367 - 967);
    return i5KxZdiWO;
}

int main () {
    int ESa0IOR9TYrc, pESDe7wC, d;
    int VbQHhz7rV;
    int FaOAR9L1qC;
    cin >> ESa0IOR9TYrc >> pESDe7wC >> d;
    FaOAR9L1qC = ((ESa0IOR9TYrc -(547 - 546)) * ((1029 - 664) % (653 - 646))) % 7 + YhN5tnVlU3E (ESa0IOR9TYrc -(454 - 453)) + dn (ESa0IOR9TYrc, pESDe7wC, d);
    VbQHhz7rV = FaOAR9L1qC % 7;
    switch (VbQHhz7rV) {
    case (30 - 30) :
        cout << "Sun.";
        break;
    case (178 - 177) :
        cout << "Mon.";
        break;
    case (969 - 967) :
        cout << "Tue.";
        break;
    case (492 - 489) :
        cout << "Wed.";
        break;
    case 4 :
        cout << "Thu.";
        break;
    case (199 - 194) :
        cout << "Fri.";
        break;
    case 6 :
        cout << "Sat.";
        break;
    default :
        ;
    }
    return (638 - 638);
}

int dn (int year, int month, int day) {
    int swRYy6t [12] = {(88 - 57), 28, (266 - 235), (193 - 163), (249 - 218), (370 - 340), (655 - 624), (692 - 661), 30, 31, 30, 31};
    int i;
    int sum;
    sum = (388 - 388);
    for (i = 0; (month - 1) > i; i++)
        sum = sum + swRYy6t[i];
    sum = sum + day;
    if (!(1 != r2plSs (year)) && month >= 3)
        sum = sum + 1;
    return sum;
}

int r2plSs (int year) {
    if (!(0 != year % 4) && year % 100 != 0)
        return 1;
    if (year % 100 == 0 && year % (985 - 585) == 0)
        return 1;
    return 0;
}

