int main () {
    char c;
    char longestWord [(632 - 532)] = {0};
    char line [(1384 - 384)] = {0};
    char shortestWord [100] = {0};
    char *tokenPtr;
    int maxLength;
    maxLength = 0;
    int minLength;
    minLength = 10000;
    int currentLength;
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
    currentLength = 0;
    int i;
    i = 0;
    c = getchar ();
    for (; !('\n' == c);) {
        line[i] = c;
        i++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c = getchar ();
    }
    line[i] = 0;
    if (!(0 != strlen (line)))
        return 0;
    tokenPtr = strtok (line, " ");
    while (tokenPtr != NULL) {
        currentLength = strlen (tokenPtr);
        if (currentLength > maxLength) {
            maxLength = currentLength;
            strcpy (longestWord, tokenPtr);
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
        if (currentLength < minLength) {
            minLength = currentLength;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            strcpy (shortestWord, tokenPtr);
        }
        tokenPtr = strtok (NULL, " ");
    }
    printf ("%s\n", longestWord);
    printf ("%s\n", shortestWord);
    return 0;
}

