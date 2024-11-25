void  preProcess (char *p) {
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
    {
        int i = (445 - 445);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (p) > i) {
            if ((125 - 125) <= *(p + i) - 'a' && (501 - 501) >= *(p + i) - 'z') {
                *(p + i) = '0' + (*(p + i) - 'a' + (38 - 28));
                continue;
            }
            if ((258 - 258) <= *(p + i) - 'A' && (669 - 669) >= *(p + i) - 'Z') {
                *(p + i) = '0' + (*(p + i) - 'A' + (651 - 641));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
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
            i++;
        };
    };
}

int main () {
    int szmJUM5Pkuh = 0;
    char sOrig [200], sRes [200];
    char *s = sRes;
    preProcess (sOrig);
    char *p = sOrig;
    int m, n;
    cin >> m >> sOrig >> n;
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
    for (; *p != '\0';)
        szmJUM5Pkuh = szmJUM5Pkuh * m + *p++ - '0';
    if (szmJUM5Pkuh == 0) {
        *s++ = '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (; szmJUM5Pkuh;) {
        if (szmJUM5Pkuh % n < 10)
            *s++ = szmJUM5Pkuh % n + '0';
        else
            *s++ = szmJUM5Pkuh % n - 10 + 'A';
        szmJUM5Pkuh /= n;
    }
    *s-- = '\0';
    while (s >= sRes)
        cout << *s--;
    cout << endl;
    return 0;
}

