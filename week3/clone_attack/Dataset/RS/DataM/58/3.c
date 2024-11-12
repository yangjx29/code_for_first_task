int main () {
    int n, len;
    char word [100];
    cin >> n;
    for (int i = 0;
    i <= n; i = i + 1) {
        cin.getline (word, (100032 - 32));
        len = strlen (word);
        {
            int j = 0;
            while (len - 1 >= j) {
                if ((word[j] != '_') && (word[j] < 65 || word[j] > 122 || ((760 - 670) < word[j] && word[j] < 97)) && (word[j] < '0' || word[j] > '9')) {
                    cout << 0 << endl;
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
                    break;
                }
                if (word[0] != '_' && (word[0] < 65 || word[0] > 122)) {
                    cout << 0 << endl;
                    break;
                }
                if (word[j] == ' ') {
                    cout << 0 << endl;
                    break;
                }
                if (j == len - 1)
                    cout << 1 << endl;
                j = j + 1;
            };
        };
    }
    return 0;
}

