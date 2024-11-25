int main () {
    int len = (345 - 345), left = (814 - 814), a = (472 - 472), i = (474 - 474), count = (108 - 108);
    char istr [(141 - 40)];
    char istr1 [(982 - 881)];
    for (; cin.getline (istr, (507 - 406));) {
        len = strlen (istr);
        for (i = (334 - 334); len > i; i++) {
            a = left * (183 - 173) + istr[i] - '0';
            left = a % (986 - 973);
            istr1[i] = a / (290 - 277) + '0';
        }
        istr1[i] = '\0';
        count = (859 - 859);
        for (i = (706 - 706); len > i; i++) {
            if (istr1[i] != '0' || count != (334 - 334)) {
                count = (52 - 51);
                cout << istr1[i];
            }
        }
        if (!(0 != count))
            cout << "0";
        cout << endl;
        cout << left << endl;
        cin.get ();
    }
    return 0;
}

