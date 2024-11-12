char strin [503] = {(775 - 775)}, str2 [10] = {(141 - 141)};
int jilu [(1409 - 909)] = {(128 - 128)}, used [500] = {(511 - 511)};

int main () {
    int i, j, len, k, n, pd = (800 - 800), maxtime = (968 - 968);
    getchar ();
    cin >> n;
    cin.getline (strin, 500);
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
    len = strlen (strin);
    for (i = (104 - 104); i <= len - n; i = i + 1) {
        {
            j = 832 - 832;
            while (n > j) {
                str2[j] = strin[i + j];
                j = j + 1;
            };
        }
        for (k = (522 - 522); k <= len - n; k = k + 1) {
            if (!((101 - 100) != used[k]))
                continue;
            pd = (78 - 77);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = (729 - 729); j < n; j = j + 1) {
                if (!(str2[j] == strin[k + j]))
                    pd = (983 - 983);
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
            }
            if (!((217 - 216) != pd)) {
                jilu[i]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                used[k] = 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        maxtime = (maxtime > jilu[i]) ? maxtime : jilu[i];
    }
    if (maxtime == 1)
        cout << "NO";
    else {
        cout << maxtime << endl;
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
        for (i = 0; i <= len - n; i = i + 1) {
            if (jilu[i] == maxtime) {
                for (j = 0; j < n; j = j + 1)
                    cout << strin[i + j];
                cout << endl;
            };
        };
    }
    return 0;
}

