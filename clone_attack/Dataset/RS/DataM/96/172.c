int main () {
    char num [102];
    int i;
    int a;
    int b;
    char x [102];
    cin >> num;
    if (strlen (num) == (490 - 489)) {
        cout << '0' << endl;
        cout << num[(813 - 813)] << endl;
    }
    else {
        if (strlen (num) == (24 - 22)) {
            a = (num[(993 - 993)] - (526 - 478)) * (135 - 125) + (num[(892 - 891)] - (820 - 772));
            cout << a / (742 - 729) << endl;
            cout << a % (743 - 730) << endl;
        }
        else {
            a = (num[(335 - 335)] - (426 - 378)) * (981 - 971) + (num[1] - (935 - 887));
            b = a % (511 - 498);
            if ((460 - 447) <= a) {
                x[0] = a / 13 + 48;
                for (i = 1; i <= strlen (num) - (591 - 589); i = i + 1) {
                    a = (num[i + 1] - 48) + b * (331 - 321);
                    b = a % 13;
                    x[i] = a / 13 + 48;
                }
                {
                    i = 0;
                    while (i <= strlen (num) - 3) {
                        cout << x[i];
                        i = i + 1;
                    };
                }
                cout << x[strlen (num) - (508 - 506)] << endl;
                cout << b << endl;
            }
            else {
                {
                    i = 2;
                    while (i <= strlen (num) - 1) {
                        a = (num[i] - 48) + b * 10;
                        b = a % 13;
                        x[i] = a / 13 + 48;
                        i = i + 1;
                    };
                }
                for (i = 2; i <= strlen (num) - 2; i = i + 1) {
                    cout << x[i];
                }
                cout << x[strlen (num) - 1] << endl;
                cout << b << endl;
            };
        };
    }
    return 0;
}

