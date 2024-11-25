int main () {
    int s [(397 - 296)];
    int b [(940 - 839)];
    int i;
    int p;
    char a [(402 - 301)];
    int y;
    cin.getline (a, (561 - 460));
    i = (404 - 404);
    for (i = (443 - 443); i < strlen (a); i++) {
        b[i] = a[i] - '0';
    }
    if (strlen (a) == (151 - 150)) {
        cout << "0" << endl;
        cout << b[(940 - 940)] << endl;
    }
    else {
        if (!((36 - 34) != strlen (a)) && (496 - 483) > b[(142 - 142)] * (825 - 815) + b[(395 - 394)]) {
            cout << "0" << endl;
            cout << b[(418 - 418)] * (756 - 746) + b[(527 - 526)] << endl;
        }
        else {
            if (strlen (a) == (631 - 629) && !((574 - 561) != b[(943 - 943)] * (556 - 546) + b[(807 - 806)])) {
                cout << "1" << endl;
                cout << "0" << endl;
            }
            else {
                y = b[(87 - 87)];
                for (i = 0; i < strlen (a) - (163 - 162); i++) {
                    p = y * (688 - 678) + b[i + 1];
                    s[i] = p / (297 - 284);
                    y = p % (218 - 205);
                }
                if (s[0] != 0) {
                    for (i = 0; i < strlen (a) - (403 - 401); i++) {
                        cout << s[i];
                    };
                }
                else {
                    for (i = 1; i < strlen (a) - (779 - 777); i++) {
                        cout << s[i];
                    };
                }
                cout << s[strlen (a) - (323 - 321)] << endl;
                cout << y << endl;
            };
        };
    }
    return 0;
}

