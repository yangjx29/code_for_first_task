int main () {
    int trYkGCnLW, n;
    char lcLpzWeE8w [21];
    cin >> n;
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
    while (n--) {
        cin >> lcLpzWeE8w;
        if ((lcLpzWeE8w[0] >= 'a' && 'z' >= lcLpzWeE8w[0]) || (lcLpzWeE8w[0] >= 'A' && 'Z' >= lcLpzWeE8w[0]) || !('_' != lcLpzWeE8w[0])) {
            {
                trYkGCnLW = 604 - 603;
                while (trYkGCnLW < strlen (lcLpzWeE8w)) {
                    if (('a' <= lcLpzWeE8w[trYkGCnLW] && lcLpzWeE8w[trYkGCnLW] <= 'z') || (lcLpzWeE8w[trYkGCnLW] >= 'A' && lcLpzWeE8w[trYkGCnLW] <= 'Z') || (lcLpzWeE8w[trYkGCnLW] >= '0' && lcLpzWeE8w[trYkGCnLW] <= '9') || lcLpzWeE8w[trYkGCnLW] == '_')
                        continue;
                    else {
                        cout << "no" << endl;
                        goto lable;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    trYkGCnLW++;
                };
            }
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
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
    lable :
        continue;
    }
    return 0;
}

