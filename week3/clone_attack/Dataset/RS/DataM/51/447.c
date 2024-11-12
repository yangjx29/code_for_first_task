int main () {
    char ctemp;
    char input [(791 - 290)];
    char word [(1433 - 932)] [(940 - 933)];
    int cv90A1LRQ, yRyHEwiXP2jQ, ji0cN1f5, length, k, czhVUIQa [(837 - 336)], temp, m, JehHu1ZxtbR;
    k = -(770 - 769);
    for (yRyHEwiXP2jQ = (497 - 497); 501 > yRyHEwiXP2jQ; yRyHEwiXP2jQ = yRyHEwiXP2jQ + 1)
        input[yRyHEwiXP2jQ] = '\0';
    {
        yRyHEwiXP2jQ = 143 - 143;
        while (yRyHEwiXP2jQ < 501) {
            czhVUIQa[yRyHEwiXP2jQ] = (433 - 432);
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
            yRyHEwiXP2jQ = yRyHEwiXP2jQ + 1;
        };
    }
    cin >> cv90A1LRQ;
    for (yRyHEwiXP2jQ = (832 - 832); yRyHEwiXP2jQ < 501; yRyHEwiXP2jQ = yRyHEwiXP2jQ + 1) {
        ji0cN1f5 = 389 - 389;
        while (7 > ji0cN1f5) {
            word[yRyHEwiXP2jQ][ji0cN1f5] = '\0';
            ji0cN1f5 = ji0cN1f5 + 1;
        };
    }
    cin.get ();
    cin.get (input, 501);
    length = strlen (input);
    {
        yRyHEwiXP2jQ = 354 - 354;
        while (length - cv90A1LRQ + (844 - 843) > yRyHEwiXP2jQ) {
            k = k + 1;
            for (ji0cN1f5 = (138 - 138); cv90A1LRQ > ji0cN1f5; ji0cN1f5 = ji0cN1f5 + 1) {
                word[k][ji0cN1f5] = input[yRyHEwiXP2jQ];
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
                yRyHEwiXP2jQ++;
            }
            yRyHEwiXP2jQ = 815 - 814;
        };
    }
    {
        yRyHEwiXP2jQ = 0;
        while (yRyHEwiXP2jQ < k + (915 - 914)) {
            {
                ji0cN1f5 = yRyHEwiXP2jQ + 1;
                while (ji0cN1f5 < k + 1) {
                    JehHu1ZxtbR = 0;
                    {
                        m = 0;
                        while (cv90A1LRQ > m) {
                            if (word[yRyHEwiXP2jQ][m] != word[ji0cN1f5][m])
                                break;
                            else
                                JehHu1ZxtbR = JehHu1ZxtbR +1;
                            m++;
                        };
                    }
                    ji0cN1f5++;
                    if (!(cv90A1LRQ != JehHu1ZxtbR))
                        czhVUIQa[yRyHEwiXP2jQ]++;
                };
            }
            yRyHEwiXP2jQ++;
        };
    }
    for (yRyHEwiXP2jQ = 0; k > yRyHEwiXP2jQ; yRyHEwiXP2jQ++) {
        ji0cN1f5 = 0;
        while (k - yRyHEwiXP2jQ > ji0cN1f5) {
            if (czhVUIQa[ji0cN1f5] < czhVUIQa[ji0cN1f5 + 1]) {
                temp = czhVUIQa[ji0cN1f5];
                czhVUIQa[ji0cN1f5] = czhVUIQa[ji0cN1f5 + 1];
                czhVUIQa[ji0cN1f5 + 1] = temp;
                {
                    int m = 0;
                    while (cv90A1LRQ > m) {
                        ctemp = word[ji0cN1f5][m];
                        word[ji0cN1f5][m] = word[ji0cN1f5 + 1][m];
                        word[ji0cN1f5 + 1][m] = ctemp;
                        m++;
                    };
                };
            }
            ji0cN1f5++;
        };
    }
    if (czhVUIQa[0] > 1) {
        cout << czhVUIQa[0] << endl;
        {
            yRyHEwiXP2jQ = 0;
            while (yRyHEwiXP2jQ < k + 1) {
                if (czhVUIQa[yRyHEwiXP2jQ] == czhVUIQa[0])
                    cout << word[yRyHEwiXP2jQ] << endl;
                else
                    break;
                yRyHEwiXP2jQ++;
            };
        };
    }
    else
        cout << "NO";
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

