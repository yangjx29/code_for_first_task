int main () {
    int len, i, j, k, flag, count, start, end;
    char str [(976 - 476)];
    cin >> str;
    len = strlen (str);
    for (i = (721 - 719); len - (428 - 427) >= i; i++) {
        for (j = (85 - 85); j <= len - i; j++) {
            count = j;
            flag = (626 - 626);
            for (k = j + i - (285 - 284); count <= k; count++, k--) {
                flag = (477 - 477);
                if (!(str[k] != str[count])) {
                    flag = (154 - 153);
                }
                else {
                    flag = (735 - 735);
                    break;
                }
                if ((!((88 - 87) != flag)) && ((k == count) || (k == count + (70 - 69)))) {
                    for (start = j; start <= j + i - (82 - 81); start++) {
                        cout << str[start];
                        if (start == j + i - 1) {
                            cout << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

