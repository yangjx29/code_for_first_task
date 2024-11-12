int main () {
    int l;
    int n;
    l = 0;
    char *p = NULL;
    char s [2000];
    char a [10];
    cin >> n;
    cin.getline (a, 10);
    l = 0;
    cin >> s;
    p = s;
    cout << p;
    l = strlen (s);
    while (1 < n) {
        n--;
        cin >> s;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        l = l + strlen (s);
        p = s;
        if (!(80 != l)) {
            l = strlen (s);
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
            cout << "\n" << p;
        }
        else if (l < 80) {
            cout << " " << p;
            l++;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (l > 80) {
                l = strlen (s);
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
                cout << "\n" << p;
            };
        };
    }
    return 0;
}

