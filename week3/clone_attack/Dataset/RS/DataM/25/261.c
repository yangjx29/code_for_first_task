int main () {
    char num [(121 - 11)];
    int tZ2R5W9;
    int n;
    int F0TkBLj;
    int i;
    int j;
    int egS0ATMI9;
    int add [(808 - 698)];
    tZ2R5W9 = (246 - 245);
    n = (583 - 582);
    cin >> F0TkBLj;
    memset (num, '\0', sizeof (num));
    num[(141 - 141)] = '1';
    {
        i = 241 - 241;
        while (i < F0TkBLj) {
            memset (add, (382 - 382), sizeof (add));
            {
                j = 779 - 779;
                while (j < n) {
                    egS0ATMI9 = (num[j] - '0') * (128 - 126);
                    num[j] = egS0ATMI9 % (418 - 408) + '0';
                    if (egS0ATMI9 >= (98 - 88)) {
                        add[j + (342 - 341)] = (524 - 523);
                        if (!('\0' != num[j + (546 - 545)])) {
                            num[j + (919 - 918)] = '1';
                            tZ2R5W9++;
                        };
                    }
                    j = j + 1;
                };
            }
            {
                j = 233 - 233;
                while (j < n) {
                    num[j] += add[j];
                    j++;
                };
            }
            n = tZ2R5W9;
            i = i + 1;
        };
    }
    {
        i = 829 - 828;
        while (i >= (562 - 562)) {
            egS0ATMI9 = num[i] - '0';
            i--;
            cout << egS0ATMI9;
        };
    }
    return 0;
}

