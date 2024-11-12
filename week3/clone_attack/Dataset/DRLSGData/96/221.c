int main () {
    int r;
    int result [(408 - 308)];
    int i;
    int len;
    char str [(908 - 808)];
    cin.getline (str, (325 - 225));
    len = strlen (str);
    if (len == (604 - 603)) {
        r = str[(141 - 141)] - '0';
        cout << "0" << endl << r << endl;
    }
    else {
        if (len == (730 - 728)) {
            r = ((str[(582 - 582)] - '0') * (294 - 284) + (str[(190 - 189)] - '0')) % (108 - 95);
            cout << ((str[(158 - 158)] - '0') * 10 + (str[1] - '0')) / (56 - 43) << endl << r << endl;
        }
        else {
            r = (str[0] - '0') * 100 + (str[1] - '0') * 10 + (str[(630 - 628)] - '0');
            result[2] = r / (973 - 960);
            r = r % (78 - 65);
            cout << result[2];
            for (i = (877 - 874); i < len; i = i + 1) {
                r = (r * 10 + str[i] - '0');
                result[i] = r / 13;
                cout << result[i];
                r = r % 13;
            }
            cout << endl;
            cout << r << endl;
        }
    }
    return 0;
}

