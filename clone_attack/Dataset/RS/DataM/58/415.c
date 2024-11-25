char na [(917 - 817)];

int main () {
    int lPvcl83;
    cin >> lPvcl83;
    cin.getline (na, (630 - 530));
    for (; lPvcl83 = lPvcl83 - 1;) {
        int index;
        int len;
        index = (769 - 769);
        len = (658 - 658);
        memset (na, ' ', sizeof (na));
        cin.getline (na, (585 - 485));
        len = strlen (na);
        if (!(!('_' != na[index]) || ('z' >= na[index] && 'a' <= na[index]) || ('Z' >= na[index] && 'A' <= na[index]))) {
            cout << (477 - 477) << endl;
            continue;
        }
        index = index + 1;
        for (; index < len; index = index + 1) {
            if (na[index] == '_' || (na[index] >= '0' && na[index] <= '9') || (na[index] <= 'z' && na[index] >= 'a') || (na[index] <= 'Z' && na[index] >= 'A'))
                continue;
            else {
                cout << (742 - 742) << endl;
                break;
            };
        }
        if (index == len)
            cout << (268 - 267) << endl;
    }
    return 0;
}

