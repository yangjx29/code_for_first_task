int main () {
    char str [(493 - 392)], flag [(1095 - 994)];
    while (cin.getline (str, 101)) {
        int WJfY1aouOvN9;
        int hMnTHN;
        int num;
        int len;
        num = (151 - 151);
        cout << str << endl;
        len = strlen (str);
        for (WJfY1aouOvN9 = 0; len > WJfY1aouOvN9; WJfY1aouOvN9 = WJfY1aouOvN9 +1)
            flag[WJfY1aouOvN9] = ' ';
        flag[WJfY1aouOvN9] = '\0';
        for (WJfY1aouOvN9 = 0; WJfY1aouOvN9 < len; WJfY1aouOvN9 = WJfY1aouOvN9 +1) {
            if (!('(' != str[WJfY1aouOvN9])) {
                num++;
                flag[WJfY1aouOvN9] = '$';
            }
            if (str[WJfY1aouOvN9] == ')') {
                num = num - 1;
                if (num >= 0) {
                    hMnTHN = WJfY1aouOvN9 -1;
                    while (hMnTHN >= 0) {
                        if (str[hMnTHN] == '(') {
                            flag[hMnTHN] = ' ';
                            str[hMnTHN] = ' ';
                            break;
                        }
                        hMnTHN = hMnTHN - 1;
                    };
                }
                else {
                    num++;
                    flag[WJfY1aouOvN9] = '?';
                };
            };
        }
        cout << flag << endl;
    }
    return 0;
}

