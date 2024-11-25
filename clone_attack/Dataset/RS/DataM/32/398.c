int main () {
    int n;
    cin >> n;
    for (int times = 1;
    n >= times; times++) {
        const  int max = 200;
        char str1 [max + 1];
        char str2 [max + 1];
        long  an1 [max] = {0};
        long  an2 [max] = {0};
        int la;
        la = strlen (str1);
        int lb = strlen (str2);
        int i = 0, j = 0;
        cin.get ();
        cin.getline (str1, max + 1);
        cin.getline (str2, max + 1);
        memset (an1, 0, sizeof (an1));
        memset (an2, 0, sizeof (an2));
        {
            i = la - 1;
            while (0 <= i) {
                an1[j++] = str1[i] - '0';
                i = i - 1;
            };
        }
        j = 0;
        {
            i = lb - 1;
            while (i >= 0) {
                an2[j++] = str2[i] - '0';
                i = i - 1;
            };
        }
        {
            i = 0;
            while (max > i) {
                an1[i] = an1[i] - an2[i];
                if (an1[i] < 0) {
                    an1[i] = an1[i] + 10;
                    an1[i + 1] = an1[i + 1] - 1;
                }
                i = i + 1;
            };
        }
        i = max - 1;
        while (an1[i] == 0)
            i--;
        for (; i >= 0; i = i - 1)
            cout << an1[i];
        cout << endl;
    }
    return 0;
}

