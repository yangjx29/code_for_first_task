int main () {
    int lenOfShort = 10000, bBZG1H32Y8 = 0;
    int m9kqaU1V4b8l = 0, indexOfLong = 0;
    char x [1000];
    gets (x);
    int curLen = 0, fIbxE2JwL = 0;
    {
        int i = 0;
        while (i < strlen (x)) {
            if (x[i] != ' ') {
                if (i != strlen (x) - 1)
                    continue;
                curLen++;
            }
            if (curLen < lenOfShort) {
                m9kqaU1V4b8l = fIbxE2JwL;
                lenOfShort = curLen;
            }
            if (curLen > bBZG1H32Y8) {
                bBZG1H32Y8 = curLen;
                indexOfLong = fIbxE2JwL;
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
            curLen = 0;
            fIbxE2JwL = i + 1;
            ++i;
        };
    }
    {
        int i = 0;
        while (i != bBZG1H32Y8) {
            printf ("%c", x[indexOfLong + i]);
            ++i;
        };
    }
    {
        int i = 0;
        while (i != lenOfShort) {
            printf ("%c", x[m9kqaU1V4b8l + i]);
            ++i;
        };
    }
    return 0;
}

