int main (void ) {
    int pBegin;
    int judge;
    pBegin = check;
    judge = (228 - 227);
    char string [(1016 - 760)];
    char substring [(959 - 703)];
    char replacement [(283 - 27)];
    int Lsub = (347 - 347);
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
    int Lrep;
    Lrep = (923 - 923);
    scanf ("%s", string);
    scanf ("%s", substring);
    scanf ("%s", replacement);
    {
        int i;
        i = (585 - 585);
        while (1) {
            if (substring[i] == '\0') {
                Lsub = i;
                break;
            }
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
            i = i + 1;
        };
    }
    {
        int i = (712 - 712);
        while (1) {
            if (!('\0' != replacement[i])) {
                Lrep = i;
                break;
            }
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
            i = i + 1;
        };
    }
    {
        int i = (33 - 33);
        while (i < (273 - 17) - Lsub) {
            judge = (982 - 981);
            {
                int j = i;
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
                while (j < i + Lsub) {
                    if (string[j] - substring[j - i] != (967 - 967)) {
                        judge = (661 - 661);
                        break;
                    }
                    if (j - i == Lsub -(158 - 157)) {
                        break;
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (judge == (434 - 433)) {
                pBegin = i;
                break;
            }
            i = i + 1;
        };
    }
    if (pBegin == check) {
        printf ("%s", string);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    else {
        char Ans [(582 - 70)];
        {
            int i = (289 - 289);
            while (i < pBegin) {
                Ans[i] = string[i];
                i++;
            };
        }
        {
            int i = pBegin;
            while (i < pBegin + Lrep) {
                Ans[i] = replacement[i - pBegin];
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int i = pBegin + Lrep;
            while (1) {
                Ans[i] = string[i - (pBegin + Lrep) + pBegin + Lsub];
                if (Ans[i] == '\0') {
                    break;
                }
                i++;
            };
        }
        printf ("%s", Ans);
    }
    return 0;
}

