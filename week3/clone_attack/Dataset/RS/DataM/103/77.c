int main () {
    int n = 0;
    char str [1000];
    int HPRfke1dB3b [1000];
    char letter [1000];
    int len = strlen (str);
    {
        int i = 0;
        while (1000 - 1 >= i) {
            HPRfke1dB3b[i] = 1;
            i++;
        };
    }
    memset (letter, '\0', 1000);
    memset (str, '\0', 1000);
    cin >> str;
    letter[0] = str[0];
    {
        int i = 0;
        while (len - 1 >= i) {
            if (!(str[i + 1] == letter[n]) && (!(str[i + 1] + 'A' - 'a' == letter[n])) && (letter[n] != str[i + 1] - 'A' + 'a')) {
                letter[++n] = str[i + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                HPRfke1dB3b[n]++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (int i = 0;
    i <= n - 1; i = i + 1) {
        if (letter[i] > 'Z')
            letter[i] += ('A' - 'a');
    }
    for (int i = 0;
    i <= n - 1; i = i + 1) {
        cout << "(" << letter[i] << "," << HPRfke1dB3b[i] << ")";
    }
    cout << endl;
    return 0;
}

