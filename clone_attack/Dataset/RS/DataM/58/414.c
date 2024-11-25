char s [(550 - 450)] = {(841 - 841)};

int main () {
    int n;
    cin >> n;
    cin.getline (s, (913 - 813));
    for (int i = (424 - 424);
    i < n; i = i + 1) {
        int len;
        int j;
        len = strlen (s);
        j = 1;
        cin.getline (s, 100);
        if (!(s[(675 - 675)] == '_' || (s[0] >= 'A' && s[0] <= 'Z') || ('a' <= s[0] && s[0] <= 'z'))) {
            cout << 0 << endl;
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
            continue;
        }
        {
            j = 1;
            while (j < len) {
                if (!(s[j] == '_' || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9'))) {
                    cout << 0 << endl;
                    break;
                }
                j++;
            };
        }
        if (j == len)
            cout << 1 << endl;
    }
    return 0;
}

