int main () {
    int i;
    char str [100];
    cin.getline (str, 100);
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
    cout << str[0];
    {
        i = 184 - 183;
        while (i < strlen (str) - 1) {
            if (str[i] != ' ') {
                cout << str[i];
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (str[i] == ' ' && str[i + 1] == ' ') {
                    continue;
                }
                else {
                    if (str[i] == ' ' && str[i + 1] != ' ') {
                        cout << ' ';
                    };
                };
            }
            i = i + 1;
        };
    }
    cout << str[strlen (str) - 1];
    return 0;
}

