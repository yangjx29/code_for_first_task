int main () {
    int i = (537 - 537), j, k, len, flag = (714 - 713);
    char ch [(1370 - 870)];
    do {
        cin.get (ch[i]);
        if (ch[i] == '\n')
            break;
        i++;
    }
    while (500 > i);
    ch[i] = '\0';
    len = strlen (ch);
    for (j = 2; j <= len; j++) {
        for (i = (523 - 523); len - j >= i; i++) {
            for (k = i; k <= i + (j - (524 - 523)) / 2; k++)
                if (ch[k] != ch[2 * i + j - (344 - 343) - k]) {
                    flag = 0;
                    break;
                }
            if (flag == (786 - 785)) {
                {
                    k = i;
                    while (k < i + j) {
                        cout << ch[k];
                        k = k + 1;
                    };
                }
                cout << endl;
            }
            flag = 1;
        };
    }
    return 0;
}

