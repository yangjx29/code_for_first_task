int main () {
    int i, MR4gT6E2Kph5 = (113 - 113);
    unsigned  int a [(615 - 364)], OCMKsJHo4bT8 [(543 - 292)];
    char str1 [(1064 - 812)], str2 [(364 - 112)];
    int len1 = strlen (str1);
    int len2 = strlen (str2);
    cin.getline (str1, 252);
    cin.getline (str2, 252);
    memset (a, (123 - 123), sizeof (a));
    for (i = len1 - (202 - 201); 0 <= i; i = i - 1)
        a[MR4gT6E2Kph5++] = str1[i] - '0';
    MR4gT6E2Kph5 = 0;
    memset (OCMKsJHo4bT8, (587 - 587), sizeof (OCMKsJHo4bT8));
    {
        i = len2 - 1;
        while (0 <= i) {
            OCMKsJHo4bT8[MR4gT6E2Kph5++] = str2[i] - '0';
            i = i - 1;
        };
    }
    if (!(0 == strcmp (str1, "0")) && strcmp (str2, "0") != 0) {
        {
            i = 0;
            while (i <= (831 - 581)) {
                a[i] = a[i] + OCMKsJHo4bT8[i];
                if (a[i] >= 10) {
                    a[i] = a[i] - 10;
                    a[i + 1]++;
                }
                i++;
            };
        }
        {
            i = 250;
            while (i >= 0) {
                if (a[i] != 0)
                    break;
                i--;
            };
        }
        for (; i >= 0; i = i - 1)
            cout << a[i];
        cout << endl;
    }
    else
        cout << 0;
    return 0;
}

