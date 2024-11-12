int main () {
    int i;
    int t;
    cin >> t;
    for (i = 1; t >= i; i++) {
        int repeat;
        int oZ70NriBvDU;
        int k;
        char str [(100123 - 122)];
        int flag;
        int length;
        repeat = (312 - 312);
        length = strlen (str);
        flag = (138 - 138);
        cin >> str;
        for (oZ70NriBvDU = (660 - 660); oZ70NriBvDU < length; oZ70NriBvDU++) {
            for (k = 0; length > k; k++) {
                if (oZ70NriBvDU == k)
                    continue;
                else {
                    if (str[oZ70NriBvDU] == str[k]) {
                        repeat = 1;
                        break;
                    }
                    else
                        ;
                }
            }
            if (!repeat) {
                cout << str[oZ70NriBvDU] << endl;
                flag = 1;
                break;
            }
            repeat = 0;
        }
        if (!flag)
            cout << "no" << endl;
    }
    return 0;
}

