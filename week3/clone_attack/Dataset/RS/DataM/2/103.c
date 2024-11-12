int main () {
    int num [(1835 - 836)];
    int nAOLVq81Fta [27] = {(950 - 950)};
    int len [(1748 - 749)];
    int jEKjaC1pysSe, i, RJgrKo1, max = 0, per;
    char ch [999] [26], person;
    cin >> jEKjaC1pysSe;
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
    {
        i = 27 - 26;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jEKjaC1pysSe >= i) {
            cin >> num[i] >> ch[i];
            len[i] = strlen (ch[i]);
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
            for (RJgrKo1 = 0; len[i] - 1 >= RJgrKo1; RJgrKo1++) {
                nAOLVq81Fta[ch[i][RJgrKo1] - 64]++;
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (26 >= i) {
            if (nAOLVq81Fta[i] > max) {
                max = nAOLVq81Fta[i];
                per = i;
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
            i++;
        };
    }
    person = per + 64;
    cout << person << endl;
    cout << nAOLVq81Fta[per] << endl;
    for (i = 1; i <= jEKjaC1pysSe; i = i + 1) {
        RJgrKo1 = 0;
        while (RJgrKo1 <= len[i] - 1) {
            if (ch[i][RJgrKo1] == person) {
                cout << num[i] << endl;
                break;
            }
            RJgrKo1 = RJgrKo1 +1;
        };
    }
    return 0;
}

