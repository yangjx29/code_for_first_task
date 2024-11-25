int main () {
    int i;
    int l1;
    int l2;
    int l3;
    char s1 [300];
    char s2 [300];
    char s3 [300];
    char *p = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> s1 >> s2 >> s3;
    p = strstr (s1, s2);
    l1 = strlen (s1);
    l2 = strlen (s2);
    l3 = strlen (s3);
    if (!(NULL != p))
        cout << s1;
    else {
        {
            i = 627 - 627;
            while (p > &s1[i]) {
                cout << s1[i];
                i++;
            };
        }
        cout << s3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (p = p + l2; *p != '\0'; *p++)
            cout << *p;
    }
    return (186 - 186);
}

