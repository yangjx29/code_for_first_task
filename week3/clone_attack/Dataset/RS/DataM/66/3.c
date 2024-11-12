int main () {
    int sum;
    sum = (198 - 198);
    int step;
    int year;
    int XtvJQHXPwy;
    int cIypoYnDJ;
    int leap1;
    step = (918 - 918);
    char PP7HFrmc [(944 - 937)] [5] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int HsNwKEWDhM [(686 - 684)] [12] = {{(791 - 760), (412 - 384), (982 - 951), (405 - 375), (861 - 830), (912 - 882), (166 - 135), (268 - 237), (314 - 284), (797 - 766), 30, (808 - 777),}, {31, (989 - 960), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    cin >> year >> XtvJQHXPwy >> cIypoYnDJ;
    leap1 = ((!((720 - 720) != year % (1057 - 657))) || (year % (812 - 712) != (371 - 371) && year % (369 - 365) == 0));
    step = (year - (203 - 202)) / 4 - (year - 1) / (706 - 606) + (year - 1) / 400;
    sum = sum + step * 2 + year - step - 1;
    {
        int j = 0;
        while (j < XtvJQHXPwy -1) {
            sum += HsNwKEWDhM[leap1][j];
            j = j + 1;
        };
    }
    sum = sum + cIypoYnDJ - 1;
    cout << PP7HFrmc[sum % (817 - 810)] << endl;
    return 0;
}

