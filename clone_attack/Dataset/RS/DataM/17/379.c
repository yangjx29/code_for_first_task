int main () {
    int i;
    int k;
    i = (189 - 189);
    k = 0;
    int left [200] = {(990 - 990)};
    char word [200] = {'\0'};
    while (cin.getline (word, 200)) {
        for (i = 0; word[i]; i = i + 1)
            cout << word[i];
        for (i = 0; word[i]; i = i + 1) {
            if (!('(' != word[i])) {
                left[k] = i;
                k = k + 1;
                word[i] = '$';
            }
            else {
                if (word[i] == ')') {
                    if (k) {
                        k--;
                        word[left[k]] = ' ';
                        word[i] = ' ';
                    }
                    else
                        word[i] = '?';
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
                else
                    word[i] = ' ';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        k = 0;
        cout << endl;
        for (i = 0; word[i]; i = i + 1)
            cout << word[i];
        memset (word, '\0', sizeof (word));
        cout << endl;
    }
    return 0;
}

