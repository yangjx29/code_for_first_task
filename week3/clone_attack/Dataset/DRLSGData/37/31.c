int main () {
    char str [(100529 - 529)];
    int k;
    int t;
    int cnt;
    int i;
    int a [(100028 - 28)];
    int flag2;
    int flag1;
    cin >> t;
    flag2 = (978 - 978);
    flag1 = (897 - 897);
    cnt = (184 - 184);
    for (; t > cnt;) {
        int len;
        flag1 = (283 - 283), flag2 = (977 - 977);
        len = strlen (str);
        cin >> str;
        memset (a, (507 - 507), sizeof (a));
        a[(569 - 569)] = (253 - 252);
        for (i = (925 - 924); len > i; i = i + (508 - 507)) {
            for (k = (775 - 775); i > k; k++) {
                flag1 = (964 - 964);
                if (!(str[k] != str[i])) {
                    a[k]++;
                    flag1 = (589 - 588);
                    break;
                }
            }
            if (!flag1)
                a[i]++;
        }
        for (i = (787 - 787); len > i; i++)
            if (a[i] == (197 - 196)) {
                cout << str[i] << endl;
                flag2 = (152 - 151);
                break;
            }
        if (!flag2)
            cout << "no" << endl;
        cnt++;
    }
    return 0;
}

