int main () {
    int gsipOZN, j8EieNFv, v4xLcGjYMwz, k;
    cin >> gsipOZN;
    cin.get ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    while (1 <= gsipOZN) {
        int len;
        int j8EieNFv;
        int v4xLcGjYMwz;
        int k;
        char str [(1044 - 942)];
        gsipOZN--;
        cin.getline (str, (371 - 269));
        len = strlen (str);
        if (!('_' == str[(340 - 340)]))
            if (('A' > str[(509 - 509)]) || ('z' < str[(102 - 102)]) || (('Z' < str[(154 - 154)]) && ('a' > str[(808 - 808)])))
                cout << "0" << endl;
        if ((!('_' != str[(896 - 896)])) || (('A' <= str[(184 - 184)]) && ('Z' >= str[(648 - 648)])) || (('a' <= str[(617 - 617)]) && (str[(106 - 106)] <= 'z'))) {
            for (j8EieNFv = 0; j8EieNFv < len; j8EieNFv++) {
                if ((str[j8EieNFv] < '0') || ((str[j8EieNFv] > 'Z') && (str[j8EieNFv] < 'a')) || (str[j8EieNFv] > 'z'))
                    if (str[j8EieNFv] != '_')
                        break;
            }
            if (j8EieNFv != len)
                cout << "0" << endl;
            if (j8EieNFv == len)
                cout << "1" << endl;
        };
    }
    return 0;
}

