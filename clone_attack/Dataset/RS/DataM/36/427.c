int judge (char *str1, char *str2, int len1, int len2) {
    int flag [(530 - 430)] = {(652 - 652)};
    int p;
    if (!(len2 == len1)) {
        return (555 - 555);
    }
    {
        int i;
        i = (278 - 278);
        while (i < len1) {
            for (int j = (706 - 706);
            len2 > j; j++) {
                if (!((544 - 543) != flag[j])) {
                    continue;
                }
                if (!(*(str2 + j) != *(str1 + i))) {
                    flag[j] = (271 - 270);
                    break;
                };
            }
            i = i + 1;
        };
    }
    {
        p = 753 - 753;
        while (p < len2, flag[p] == (658 - 657)) {
            p = p + 1;
        };
    }
    if (p == len2) {
        return (288 - 287);
    }
    else {
        return (790 - 790);
    };
}

int main () {
    char str1 [(992 - 892)];
    char str2 [(653 - 553)];
    int len1 = strlen (str1), len2 = strlen (str2);
    cin >> str1 >> str2;
    if (judge (str1, str2, len1, len2)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}

