int main () {
    int ezMTFvEO;
    int n;
    int year;
    int month;
    int day;
    int L1quwa7Kr;
    int a [12] = {(70 - 39), (586 - 586), (257 - 226), (747 - 717), (631 - 600), (668 - 638), (126 - 95), (653 - 622), 30, 31, 30, 31};
    ezMTFvEO = (808 - 808);
    n = (181 - 181);
    year = (978 - 978);
    month = (630 - 630);
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
    day = (687 - 687);
    cin >> year >> month >> day;
    if ((year % 400 == (563 - 563)) || ((year % (1064 - 964) != (170 - 170)) && (year % (413 - 409) == 0)))
        a[(367 - 366)] = 29;
    else
        a[(862 - 861)] = (584 - 556);
    year = (year - 1) % 400;
    n = year / 100;
    ezMTFvEO += (689 - 687) * (year / (327 - 323) - n);
    ezMTFvEO += year - (year / 4 - n);
    {
        L1quwa7Kr = 0;
        while (L1quwa7Kr < month - 1) {
            ezMTFvEO += a[L1quwa7Kr];
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
            L1quwa7Kr = L1quwa7Kr +1;
        };
    }
    ezMTFvEO += day;
    ezMTFvEO = ezMTFvEO % 7;
    switch (ezMTFvEO) {
    case 0 :
        cout << "Sun." << endl;
        break;
    case 1 :
        cout << "Mon." << endl;
        break;
    case (887 - 885) :
        cout << "Tue." << endl;
        break;
    case 3 :
        cout << "Wed." << endl;
        break;
    case 4 :
        cout << "Thu." << endl;
        break;
    case (650 - 645) :
        cout << "Fri." << endl;
        break;
    case (837 - 831) :
        cout << "Sat." << endl;
        break;
    }
    return 0;
}

