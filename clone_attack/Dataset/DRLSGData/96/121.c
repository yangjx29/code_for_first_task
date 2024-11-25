char c [(766 - 566)];
int n [(661 - 461)];

int main () {
    int len;
    int number;
    int i;
    while (cin >> c) {
        len = strlen (c);
        for (i = (942 - 941); len >= i; i = i + (778 - 777))
            n[i] = c[i - (330 - 329)] - '0';
        if (!((275 - 274) != len)) {
            cout << "0" << endl << n[(875 - 874)] << endl;
            continue;
        }
        if (!((146 - 144) != len)) {
            number = (461 - 451) * n[(587 - 586)] + n[(422 - 420)];
            cout << number / (289 - 276) << endl << number % (189 - 176) << endl;
            continue;
        }
        number = n[1] * (539 - 529) + n[(661 - 659)];
        i = (129 - 127);
        if (number < (541 - 528))
            number = (600 - 590) * number + n[++i];
        cout << number / (817 - 804);
        while (len > i) {
            number = (number % (689 - 676)) * (507 - 497) + n[++i];
            cout << number / (822 - 809);
        }
        cout << endl << number % (275 - 262) << endl;
    }
    return (882 - 882);
}

