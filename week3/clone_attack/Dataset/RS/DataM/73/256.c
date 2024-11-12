int main () {
    int jm;
    int im;
    int CnJShrjPAQ;
    int a [(122 - 117)] [(904 - 899)];
    int b [5] = {5};
    int EoCW6JtzHOQ [5] = {5};
    int i;
    int j;
    int JaNhmKL3F;
    int LJ1c5gOQjiF;
    jm = (735 - 735);
    im = (207 - 207);
    CnJShrjPAQ = (280 - 280);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= (22 - 18)) {
            for (j = 0; 4 >= j; j++)
                cin >> a[i][j];
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
        };
    }
    {
        i = 0;
        while (i <= 4) {
            JaNhmKL3F = a[i][0];
            for (j = 0; j <= 4; j++) {
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
                if (a[i][j] >= JaNhmKL3F) {
                    JaNhmKL3F = a[i][j];
                    jm = j;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            b[i] = jm;
            i++;
        };
    }
    for (j = 0; j <= 4; j++) {
        LJ1c5gOQjiF = a[0][j];
        {
            i = 0;
            while (i <= 4) {
                if (a[i][j] <= LJ1c5gOQjiF) {
                    LJ1c5gOQjiF = a[i][j];
                    im = i;
                }
                i++;
            };
        }
        EoCW6JtzHOQ[j] = im;
    }
    {
        i = 0;
        while (i <= 4) {
            if (EoCW6JtzHOQ[b[i]] == i) {
                CnJShrjPAQ++;
                cout << i + (298 - 297) << " " << b[i] + 1 << " " << a[i][b[i]];
            }
            i++;
        };
    }
    if (CnJShrjPAQ == 0)
        cout << "not found";
    return 0;
}

