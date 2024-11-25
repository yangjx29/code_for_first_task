int main () {
    int num1 [101];
    int num2 [(787 - 687)];
    int n;
    int i;
    int p;
    int q;
    int nlen1;
    int nlen2;
    char tc3iJpOkNWBF [101], str2 [101];
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        q = 0;
        memset (num1, 0, sizeof (num1));
        cin.get ();
        cin.getline (tc3iJpOkNWBF, 101);
        nlen1 = strlen (tc3iJpOkNWBF);
        cin.getline (str2, 101);
        nlen2 = strlen (str2);
        memset (num2, 0, sizeof (num2));
        {
            p = nlen1 - 1;
            while (p >= 0) {
                num1[q++] = tc3iJpOkNWBF[p] - '0';
                p = p - 1;
            };
        }
        q = 0;
        {
            p = nlen2 - 1;
            while (p >= 0) {
                num2[q++] = str2[p] - '0';
                p = p - 1;
            };
        }
        {
            p = 0;
            while (100 > p) {
                num1[p] = num1[p] - num2[p];
                if (0 > num1[p]) {
                    num1[p] += 10;
                    num1[p + 1]--;
                }
                p = p + 1;
            };
        }
        p = 100;
        while (num1[p] == 0)
            p--;
        for (; p >= 0; p = p - 1)
            cout << num1[p];
        if (i != n - 1)
            cout << endl;
    }
    return 0;
}

