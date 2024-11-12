int main () {
    char str3 [(1004 - 954)];
    int p;
    int len3;
    int len1;
    char str2 [(549 - 499)];
    int flag;
    int len2;
    int i;
    int j;
    int m;
    char str1 [(511 - 211)];
    flag = (685 - 685);
    cin.getline (str1, 300);
    cin.getline (str2, (309 - 259));
    cin.getline (str3, (1032 - 982));
    len1 = strlen (str1);
    len2 = strlen (str2);
    len3 = strlen (str3);
    for (i = (119 - 119); len1 - len2 >= i; i = i + 1) {
        m = i;
        for (j = (381 - 381); j < len2; j++) {
            if (str1[m++] != str2[j])
                break;
        }
        flag = (82 - 82);
        if (j == len2) {
            flag = (897 - 896);
            {
                p = 0;
                while (i > p) {
                    cout << str1[p];
                    p++;
                }
            }
            cout << str3;
            cout << str1 + i + len2 << endl;
            break;
        }
    }
    if (flag == 0) {
        cout << str1 << endl;
    }
    return 0;
}

