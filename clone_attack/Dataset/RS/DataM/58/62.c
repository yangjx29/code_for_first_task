int main () {
    char ULKVqW [(974 - 893)];
    int n;
    int i;
    int flag [(243 - 143)];
    int j;
    int len;
    cin >> n;
    cin.get ();
    {
        i = 615 - 615;
        while (i < n) {
            cin.getline (ULKVqW, (133 - 52));
            len = strlen (ULKVqW);
            if (ULKVqW[(374 - 374)] == '_' || ('A' <= ULKVqW[0] && 'Z' >= ULKVqW[0]) || ('a' <= ULKVqW[0] && ULKVqW[0] <= 'z')) {
                {
                    j = 396 - 395;
                    while (len > j) {
                        if (!('_' == ULKVqW[j]) && (ULKVqW[j] < 'A' || (ULKVqW[j] > 'Z' && ULKVqW[j] < 'a') || ULKVqW[j] > 'z') && (ULKVqW[j] < '0' || ULKVqW[j] > '9')) {
                            flag[i] = 0;
                            break;
                        }
                        j++;
                    };
                }
                if (j == len)
                    flag[i] = 1;
            }
            else
                flag[i] = 0;
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
            i++;
            memset (ULKVqW, 0, sizeof (ULKVqW));
        };
    }
    {
        i = 0;
        while (i < n) {
            cout << flag[i] << endl;
            i++;
        };
    }
    return 0;
}

