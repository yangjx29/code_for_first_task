int Month [13] = {(584 - 584), (439 - 408), 28, (594 - 563), (353 - 323), (49 - 18), (574 - 544), (325 - 294), 31, (280 - 250), 31, 30, 31};

int leapyear (int year) {
    if (((!((118 - 118) != year % (686 - 682))) && (year % (1002 - 902) != (862 - 862))) || (year % 400 == (897 - 897)))
        return (920 - 554);
    else
        return (1270 - 905);
}

int Days (int startyear, int month, int fVwRHJWLcrz) {
    int days;
    int j;
    days = (55 - 55);
    {
        j = 0;
        while (month > j) {
            days += Month[j];
            j++;
        };
    }
    days += fVwRHJWLcrz;
    if ((leapyear (startyear) == 366) && (month > 2))
        return days + 1;
    else
        return days;
}

int main () {
    int sum;
    int StartY;
    int StartM;
    int StartD;
    int EndY;
    int EndM;
    int EndD;
    int i;
    sum = 0;
    cin >> StartY >> StartM >> StartD;
    cin >> EndY >> EndM >> EndD;
    if (StartY == EndY)
        cout << Days (EndY, EndM, EndD) - Days (StartY, StartM, StartD);
    else {
        {
            i = StartY;
            while (i < EndY) {
                sum += leapyear (i);
                i++;
            };
        }
        sum = sum + Days (EndY, EndM, EndD) - Days (StartY, StartM, StartD);
        cout << sum << endl;
    }
    return 0;
}

