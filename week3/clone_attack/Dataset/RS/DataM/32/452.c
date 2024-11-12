int beijianshu [200] = {(467 - 467)}, NY8xcG [200] = {0}, jpDiClBjhu [200] = {0};
int len1, yeEHnDOzc1W;
int flag;
char XmMFg8usfC [200], b [200];

void  reverse (char XmMFg8usfC [], char b []) {
    int i;
    for (i = 0; len1 > i; i = i + 1)
        beijianshu[i] = XmMFg8usfC[len1 - i - (330 - 329)] - '0';
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
        while (yeEHnDOzc1W > i) {
            NY8xcG[i] = b[yeEHnDOzc1W - i - 1] - '0';
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
            i = i + 1;
        };
    };
}

int XhAmrGxRO () {
    if (len1 > yeEHnDOzc1W)
        return 1;
    else {
        if (len1 == yeEHnDOzc1W) {
            for (int i = 0;
            i < len1; i = i + 1) {
                if (XmMFg8usfC[i] > b[i])
                    return 1;
                else {
                    if (b[i] > XmMFg8usfC[i])
                        return -1;
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
                };
            }
            return 0;
        }
        else
            return -1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

void  calculate () {
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!(0 == flag)) {
        {
            i = 0;
            while (i < len1 || i < yeEHnDOzc1W) {
                jpDiClBjhu[i] = beijianshu[i] - NY8xcG[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
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
        if (flag == 1) {
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
            for (i = 0; i < len1; i = i + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (0 > jpDiClBjhu[i]) {
                    jpDiClBjhu[i + 1]--;
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
                    jpDiClBjhu[i] += 10;
                };
            };
        }
        else {
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
            while (yeEHnDOzc1W >= i) {
                if (0 < jpDiClBjhu[i]) {
                    jpDiClBjhu[i] -= 10;
                    jpDiClBjhu[i + 1]++;
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
                i = i + 1;
            };
        };
    };
}

void  print () {
    int i;
    if (flag == 0)
        cout << 0 << endl;
    else {
        {
            i = 199;
            while (i >= 0) {
                if (jpDiClBjhu[i] != 0)
                    break;
                i = i - 1;
            };
        }
        if (flag == 1)
            for (; i >= 0; i = i - 1)
                cout << jpDiClBjhu[i];
        else {
            cout << '-';
            for (; i >= 0; i = i - 1)
                cout << 0 - jpDiClBjhu[i];
        }
        cout << endl;
    };
}

int main () {
    int n;
    cin >> n;
    cin.get ();
    for (int i = 0;
    i < n; i = i + 1) {
        memset (XmMFg8usfC, '\0', sizeof (XmMFg8usfC));
        memset (b, '\0', sizeof (b));
        memset (beijianshu, 0, sizeof (beijianshu));
        memset (NY8xcG, 0, sizeof (NY8xcG));
        memset (jpDiClBjhu, 0, sizeof (jpDiClBjhu));
        cin.getline (XmMFg8usfC, 200);
        len1 = strlen (XmMFg8usfC);
        cin.getline (b, 200);
        cin.get ();
        yeEHnDOzc1W = strlen (b);
        reverse (XmMFg8usfC, b);
        flag = XhAmrGxRO ();
        calculate ();
        print ();
    }
    return 0;
}

