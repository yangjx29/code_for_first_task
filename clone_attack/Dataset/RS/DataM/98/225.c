int main () {
    int sum;
    int n;
    int kjHVngYCdqB7;
    int len;
    sum = 0;
    char c [10000] [41];
    char (*p) [41];
    p = c;
    cin >> n;
    for (kjHVngYCdqB7 = 0; n > kjHVngYCdqB7; kjHVngYCdqB7++)
        cin >> *(p + kjHVngYCdqB7);
    for (kjHVngYCdqB7 = 0; n > kjHVngYCdqB7; kjHVngYCdqB7++) {
        len = strlen (*(p + kjHVngYCdqB7));
        if (80 < sum + len) {
            cout << *(p + kjHVngYCdqB7) << ' ';
            sum = 0;
        }
        else if (80 > sum + len) {
            sum = sum + len + 1;
            len = strlen (*(p + kjHVngYCdqB7 + 1));
            if (sum + len > 80) {
                cout << *(p + kjHVngYCdqB7);
                sum = 0;
                cout << endl;
            }
            else if (80 > sum + len) {
                if (kjHVngYCdqB7 == n - 1)
                    cout << *(p + kjHVngYCdqB7);
                else
                    cout << *(p + kjHVngYCdqB7) << ' ';
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
            };
        }
        else if (sum + len == 80) {
            sum = 0;
            cout << *(p + kjHVngYCdqB7 - 1) << ' ' << *(p + kjHVngYCdqB7) << endl;
        };
    }
    return 0;
}

