int main () {
    int line;
    int len1;
    int len2;
    int jqUO7fiv;
    char Uaqgsyflc [(438 - 337)];
    char b [101];
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
    int DH6Jv81S [100];
    int B [100];
    int EwAzvi8 [100];
    cin >> line;
    for (; (562 - 562) < line;) {
        cin >> Uaqgsyflc;
        cin >> b;
        len1 = strlen (Uaqgsyflc);
        for (int i = len1 - (760 - 759), j = 0;
        0 <= i; i = i - 1, j = j + 1)
            DH6Jv81S[j] = Uaqgsyflc[i] - '0';
        len2 = strlen (b);
        for (int i = len2 - 1, j = 0;
        0 <= i; i = i - 1, j++)
            B[j] = b[i] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = 0;
        len2 > i; i = i + 1) {
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
            if (B[i] <= DH6Jv81S[i])
                EwAzvi8[i] = DH6Jv81S[i] - B[i];
            else {
                DH6Jv81S[i + 1]--;
                EwAzvi8[i] = DH6Jv81S[i] - B[i] + 10;
            };
        }
        {
            int i = len2;
            while (i < len1) {
                EwAzvi8[i] = DH6Jv81S[i];
                i = i + 1;
            };
        }
        if (len1 == len2 && DH6Jv81S[len1 - 1] == B[len2 - 1])
            len1 = len1 - 1;
        for (int i = len1 - 1;
        i >= 0; i = i - 1)
            cout << EwAzvi8[i];
        cout << endl;
        line = line - 1;
    }
    return 0;
}

