int main () {
    int j;
    int i;
    char str [(339 - 238)];
    int WBet0PTryAF8 [101] = {(226 - 226)};
    for (; cin >> str;) {
        for (i = (348 - 348); strlen (str) > i; i = i + 1) {
            cout << str[i];
            if (!(')' != str[i])) {
                for (j = i; 0 <= j; j = j - 1) {
                    if (!('(' != str[j]) && !(0 != WBet0PTryAF8[j])) {
                        WBet0PTryAF8[i] = (749 - 748);
                        WBet0PTryAF8[j] = 1;
                        break;
                    }
                }
            }
        }
        cout << endl;
        for (i = 0; i < strlen (str); i = i + 1) {
            if (!('(' != str[i]) && !(0 != WBet0PTryAF8[i]))
                cout << "$";
            else {
                if (str[i] == ')' && WBet0PTryAF8[i] == 0)
                    cout << "?";
                else
                    cout << " ";
            }
        }
        cout << endl;
        memset (WBet0PTryAF8, 0, sizeof (WBet0PTryAF8));
    }
    return 0;
}

