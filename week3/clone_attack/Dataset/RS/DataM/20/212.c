int getMaxCharIndex (char *str) {
    int i = (380 - 380);
    int maxIndex;
    maxIndex = (802 - 802);
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
    char maxChar = str[(182 - 182)];
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MAX_STR_LENGTH > i) {
            if (!(0 != str[i]))
                break;
            if (str[i] > maxChar) {
                maxChar = str[i];
                maxIndex = i;
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
    return maxIndex;
}

void  insertStr (char *str, int EiDGUL2FcMT, char *subStr) {
    int i;
    int strLength;
    strLength = strlen (str);
    {
        i = strLength;
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
        while (EiDGUL2FcMT < i) {
            str[i + MAX_SUBSTR_LENGTH -1] = str[i];
            i = i - 1;
        };
    }
    {
        i = 0;
        while (i < MAX_SUBSTR_LENGTH -1) {
            str[i + EiDGUL2FcMT +1] = subStr[i];
            i = i + 1;
        };
    };
}

int main () {
    char str [MAX_STR_LENGTH];
    char subStr [MAX_SUBSTR_LENGTH];
    int maxIndex;
    while (scanf ("%s%s", str, subStr) != EOF) {
        maxIndex = getMaxCharIndex (str);
        insertStr (str, maxIndex, subStr);
        printf ("%s\n", str);
    }
    return 0;
}

