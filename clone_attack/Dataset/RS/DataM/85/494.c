int main () {
    int n;
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
    cin >> n;
    while (n--) {
        char str [32];
        int l;
        int i;
        l = strlen (str);
        cin >> str;
        if (str[(750 - 750)] >= '0' && '9' >= str[(442 - 442)]) {
            cout << "no\n";
            continue;
        }
        {
            i = 430 - 430;
            while (i < l) {
                if (str[i] >= '0' && '9' >= str[i])
                    continue;
                if (str[i] >= 'a' && str[i] <= 'z')
                    continue;
                if ('A' <= str[i] && str[i] <= 'Z')
                    continue;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (str[i] == '_')
                    continue;
                break;
                i = i + 1;
            };
        }
        if (i == l) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        };
    };
}

