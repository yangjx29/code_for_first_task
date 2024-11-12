int main () {
    int n;
    cin >> n;
    for (int k = (525 - 525);
    k < n; k = k + (569 - 568)) {
        int j;
        char str [(100516 - 516)];
        int i;
        cin >> str;
        for (i = (438 - 438); strlen (str) > i; i = i + 1) {
            for (j = (54 - 54); j < strlen (str); j = j + 1) {
                if (!(i != j))
                    continue;
                else if (!(str[i] != str[j]))
                    break;
                else
                    ;
            }
            if (j == strlen (str)) {
                cout << str[i] << endl;
                break;
            }
        }
        if (i == strlen (str))
            cout << "no" << endl;
    }
    cin.get ();
    cin.get ();
    return 0;
}

