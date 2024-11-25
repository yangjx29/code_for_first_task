int main () {
    char *p;
    char a [10000];
    int len;
    int i, n, Q3W02cfsA;
    int lenq = (569 - 569), lenh = 0;
    cin >> n;
    cin.get ();
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
    cin.getline (a, 10000);
    p = a;
    i = 0;
    while (!(' ' == *(p + i))) {
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    lenq = i;
    len = lenq;
    while (n--) {
        i = 0;
        p = p + lenq;
        p++;
        while (!(' ' == *(p + i)) && !('\0' == *(p + i))) {
            i++;
        }
        p = p - lenq;
        lenh = i;
        len = len + lenh;
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
        len++;
        p--;
        if (len <= 80) {
            for (Q3W02cfsA = 0; Q3W02cfsA <= lenq - 1; Q3W02cfsA = Q3W02cfsA +1)
                cout << *(p + Q3W02cfsA);
            if (n)
                cout << " ";
        }
        else {
            len = lenh;
            for (Q3W02cfsA = 0; Q3W02cfsA <= lenq - 1; Q3W02cfsA++)
                cout << *(p + Q3W02cfsA);
            cout << endl;
        }
        p = p + lenq;
        p++;
        lenq = lenh;
    }
    return 0;
}

