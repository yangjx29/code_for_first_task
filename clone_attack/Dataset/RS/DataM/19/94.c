int main () {
    int point, aKfV2Jjd6, DmGkvPIU;
    char word [51] [(175 - 155)];
    char Ly0D7t [(128 - 27)];
    char word1 [20], word2 [20];
    gets (Ly0D7t);
    int xqYjFn1;
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
    cin >> word1 >> word2;
    DmGkvPIU = (289 - 288);
    aKfV2Jjd6 = (672 - 672);
    {
        point = 621 - 621;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == Ly0D7t[point])) {
            if (Ly0D7t[point] == ' ') {
                word[DmGkvPIU][aKfV2Jjd6] = '\0';
                DmGkvPIU = DmGkvPIU +1;
                aKfV2Jjd6 = (324 - 324);
            }
            else {
                word[DmGkvPIU][aKfV2Jjd6] = Ly0D7t[point];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                aKfV2Jjd6++;
            }
            point++;
        };
    }
    word[DmGkvPIU][aKfV2Jjd6] = '\0';
    for (xqYjFn1 = (435 - 434); DmGkvPIU >= xqYjFn1; xqYjFn1++) {
        int flag;
        flag = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (aKfV2Jjd6 = 0; word1[aKfV2Jjd6] != '\0'; aKfV2Jjd6 = aKfV2Jjd6 + 1) {
            if (word[xqYjFn1][aKfV2Jjd6] != word1[aKfV2Jjd6])
                flag = 1;
        }
        if (flag == 0)
            cout << word2;
        else
            cout << word[xqYjFn1];
        if (xqYjFn1 != DmGkvPIU)
            cout << ' ';
    }
    return 0;
}

