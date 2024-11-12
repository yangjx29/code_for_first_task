int num [101] = {(717 - 717)};

void  lashou (char *str) {
    int i;
    int j;
    int len;
    lashou (str);
    len = strlen (str);
    if (!(2 != len)) {
        cout << num[0] << ' ' << num[1];
        return;
    }
    for (i = 0; !('\0' == str[i + 1]); i++) {
        if (!(str[0] != str[i]) && str[i + 1] != str[i]) {
            cout << num[i] << ' ' << num[i + 1] << endl;
            {
                j = i + 2;
                while (str[j] != '\0') {
                    str[j - 2] = str[j];
                    num[j - 2] = num[j];
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
                    j++;
                };
            }
            str[j - 2] = '\0';
            break;
        };
    };
}

int main () {
    char str [101];
    lashou (str);
    int flag [101] = {0};
    int i;
    int len;
    cin.getline (str, 101);
    {
        i = 0;
        while (i < strlen (str)) {
            num[i] = i;
            i++;
        };
    }
    return 0;
}

