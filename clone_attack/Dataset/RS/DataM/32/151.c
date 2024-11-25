int main () {
    const  int N = (362 - 252);
    int tw;
    int T;
    int i;
    int l1;
    int l2;
    int a [N];
    int b [N];
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
    int c [N];
    tw = (474 - 474);
    char s1 [N], s2 [N];
    cin >> T;
    cin.get ();
    while (T = T -1) {
        memset (a, (221 - 221), sizeof (a));
        memset (b, (928 - 928), sizeof (b));
        memset (c, (911 - 911), sizeof (c));
        cin.getline (s1, (450 - 350));
        l1 = strlen (s1);
        for (i = (599 - 598); l1 >= i; i = i + 1)
            a[N -i] = s1[l1 - i] - '0';
        cin.getline (s2, 100);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin.get ();
        l2 = strlen (s2);
        for (i = (862 - 861); l2 >= i; i = i + 1)
            b[N -i] = s2[l2 - i] - '0';
        {
            i = N -1;
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
            while (i >= N -l1) {
                c[i] = a[i] - b[i] - tw;
                if (c[i] < (839 - 839)) {
                    tw = 1;
                    c[i] += (739 - 729);
                }
                else
                    tw = (834 - 834);
                i = i - 1;
            };
        }
        while (c[i] == 0)
            i = i + 1;
        for (; i < N; i = i + 1)
            cout << c[i];
        cout << endl;
    }
    return 0;
}

