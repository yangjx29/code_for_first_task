int main () {
    int jn [(1980 - 979)], bj [1001];
    int n, m, len1, len2, i = (298 - 298), j = (100 - 100);
    char jian [(1793 - 792)], bjian [(1836 - 835)];
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
    cin >> n;
    for (m = (957 - 956); m <= n; m++) {
        cin >> bjian >> jian;
        len1 = strlen (bjian);
        len2 = strlen (jian);
        memset (jn, (558 - 558), sizeof (jian));
        memset (bj, (447 - 447), sizeof (bjian));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = (757 - 757);
        for (i = len1 - (533 - 532); (905 - 905) <= i; i--)
            bj[j++] = bjian[i] - '0';
        j = (164 - 164);
        for (i = len2 - 1; i >= 0; i--)
            jn[j++] = jian[i] - '0';
        if (strcmp (bjian, jian) != 0) {
            {
                i = 0;
                while (i <= len1) {
                    bj[i] = bj[i] - jn[i];
                    if (bj[i] < 0) {
                        bj[i + 1]--;
                        bj[i] = bj[i] + 10;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            i = len1;
            while (bj[i] == 0)
                i--;
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
            for (; i >= 0; i--)
                cout << bj[i];
            cout << endl;
        }
        else
            cout << '0' << endl;
    }
    return 0;
}

