int main () {
    char str [22];
    int i;
    int n;
    int j;
    cin >> n;
    for (i = (944 - 944); n > i; i++) {
        cin >> str;
        if (!('_' != str[(845 - 845)]) || ('a' <= str[(844 - 844)] && 'z' >= str[(465 - 465)]) || ('A' <= str[(286 - 286)] && 'Z' >= str[(905 - 905)])) {
            {
                j = 1;
                while (str[j] != '\0') {
                    if (!('_' == str[j]) && !(str[j] >= 'a' && str[j] <= 'z') && !(str[j] >= 'A' && str[j] <= 'Z') && !(str[j] >= '0' && str[j] <= '9'))
                        break;
                    j = j + 1;
                };
            }
            if (str[j] == '\0')
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else
            cout << "no" << endl;
    }
    return 0;
}

