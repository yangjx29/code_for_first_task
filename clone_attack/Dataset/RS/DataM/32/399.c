int main () {
    int Len1;
    int Len2;
    int max;
    int n;
    int u;
    int i;
    Len1 = (261 - 261);
    Len2 = (261 - 261);
    max = (441 - 441);
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
    const  int MAX_LEN = 100;
    int GhnNpWw [MAX_LEN +(833 - 832)] = {(926 - 926)};
    int num2 [MAX_LEN +(645 - 644)] = {(703 - 703)};
    char str1 [MAX_LEN +(778 - 777)];
    char str2 [MAX_LEN +(613 - 612)];
    cin >> n;
    cin.get ();
    for (u = 0; u < n; u++) {
        cin.getline (str1, MAX_LEN +(59 - 58));
        cin.getline (str2, MAX_LEN +(730 - 729));
        Len1 = strlen (str1);
        Len2 = strlen (str2);
        for (i = Len1 -1; 0 <= i; i--)
            GhnNpWw[Len1 -1 - i] = str1[i] - '0';
        for (i = Len2 -1; 0 <= i; i--)
            num2[Len2 -1 - i] = str2[i] - '0';
        if (Len2 < Len1) {
            max = Len1;
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
            };
        }
        else
            max = Len2;
        {
            i = 0;
            while (i < max) {
                GhnNpWw[i] = GhnNpWw[i] - num2[i];
                if (GhnNpWw[i] < 0) {
                    GhnNpWw[i] = GhnNpWw[i] + 10;
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
                    GhnNpWw[i + 1] = GhnNpWw[i + 1] - 1;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        i = MAX_LEN;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GhnNpWw[i] == 0)
            i = i - 1;
        for (; i >= 0; i--)
            cout << GhnNpWw[i];
        cout << endl;
        {
            i = 0;
            while (i < MAX_LEN) {
                GhnNpWw[i] = 0;
                num2[i] = 0;
                i = i + 1;
            };
        }
        Len1 = 0;
        Len2 = 0;
        max = 0;
        if (i != n - 1)
            cin.get ();
    }
    return 0;
}

