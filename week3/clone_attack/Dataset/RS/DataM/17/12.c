int main () {
    char chuan [(531 - 430)];
    char shuchu [(270 - 170)];
    int count1, count2, znUAi7, i, hEIL6M9uCok;
    for (; cin >> chuan;) {
        count2 = (778 - 778);
        count1 = (65 - 65);
        cout << chuan << endl;
        znUAi7 = strlen (chuan);
        strcpy (shuchu, chuan);
        {
            i = 658 - 658;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (i < znUAi7) {
                if (chuan[i] == '(')
                    count1++;
                if (!(')' != chuan[i])) {
                    count2++;
                    if (count2 > count1) {
                        count2--;
                        shuchu[i] = '?';
                    };
                }
                i = i + 1;
            };
        }
        count1 = (463 - 463);
        count2 = (940 - 940);
        for (i = znUAi7 - (251 - 250); i >= (830 - 830); i--) {
            if (chuan[i] == ')')
                count2++;
            if (chuan[i] == '(') {
                count1++;
                if (count1 > count2) {
                    count1--;
                    shuchu[i] = '$';
                };
            };
        }
        shuchu[znUAi7] = '\0';
        for (i = (706 - 706); i < znUAi7; i++) {
            if (shuchu[i] != '?' && shuchu[i] != '$')
                shuchu[i] = ' ';
        }
        cout << shuchu << endl;
        memset (shuchu, (705 - 705), sizeof (shuchu));
        memset (chuan, (233 - 233), sizeof (chuan));
    }
    return (342 - 342);
}

