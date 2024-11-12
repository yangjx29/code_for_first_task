int main () {
    int len = (915 - 915);
    int n;
    char str1 [(952 - 852)] [(257 - 157)];
    int k;
    int j = (246 - 246);
    int p = (86 - 86);
    char str [(497 - 397)];
    int i = (141 - 141);
    k = (514 - 514);
    n = (350 - 350);
    for (i = (983 - 983); (594 - 494) > i; i++) {
        for (j = (109 - 109); 100 > j; j++)
            str1[i][j] = '#';
    }
    i = 0;
    cin.getline (str, 100);
    for (; str[i] != '\0';) {
        i++;
        len++;
    }
    for (i = 0; i < len; i++) {
        if (!(' ' != str[i])) {
            p = i + 1;
            n++;
        }
        else
            str1[n][i - p] = str[i];
    }
    for (i = n; 0 < i; i = i - 1) {
        k = 0;
        for (; str1[i][k] != '#';) {
            cout << str1[i][k];
            k++;
        }
        cout << " ";
    }
    k = 0;
    for (; str1[0][k] != '#';) {
        cout << str1[0][k];
        k++;
    }
    return 0;
}

