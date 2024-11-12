int main () {
    char str [100000] = {'\0'};
    int hECG7ZL [26] = {0};
    int SSybNCW;
    int DexbLunGC;
    int SwoG8BYLSJg;
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
    cin >> SSybNCW;
    cin.get ();
    for (DexbLunGC = 0; SSybNCW > DexbLunGC; DexbLunGC++) {
        for (SwoG8BYLSJg = 0; 100000 > SwoG8BYLSJg; SwoG8BYLSJg++)
            str[SwoG8BYLSJg] = '\0';
        for (SwoG8BYLSJg = 0; 26 > SwoG8BYLSJg; SwoG8BYLSJg++)
            hECG7ZL[SwoG8BYLSJg] = 0;
        cin.getline (str, 100000);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (SwoG8BYLSJg = 0; str[SwoG8BYLSJg] != '\0'; SwoG8BYLSJg++) {
            hECG7ZL[str[SwoG8BYLSJg] - 'a']++;
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
        for (SwoG8BYLSJg = 0; strlen (str) > SwoG8BYLSJg; SwoG8BYLSJg++) {
            if (hECG7ZL[str[SwoG8BYLSJg] - 'a'] == 1) {
                cout << str[SwoG8BYLSJg] << endl;
                break;
            };
        }
        if (SwoG8BYLSJg == strlen (str))
            cout << "no" << endl;
    }
    return 0;
}

