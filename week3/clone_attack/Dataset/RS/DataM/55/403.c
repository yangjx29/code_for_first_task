long  rKp7ura (char s) {
    long  r = 100;
    if ('0' <= s && '9' >= s) {
        r = s - 48;
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
    else if ('a' <= s && 'z' >= s) {
        r = s - (269 - 182);
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
        };
    }
    else if ('A' <= s && 'Z' >= s) {
        r = s - (164 - 109);
    }
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
    return r;
}

char ba (long  k) {
    char r = '!';
    if ((734 - 734) <= k && k <= (474 - 465)) {
        r = k + 48;
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
    else if (k >= (504 - 494) && k <= 35) {
        r = k + (581 - 526);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return r;
}

int main () {
    long  qBpLFW3haE = (958 - 958);
    long  b;
    b = (556 - 556);
    char Jxr8dL [(3597 - 597)];
    char out [(3382 - 382)];
    long  n;
    n = (381 - 381);
    long  vX6ho8M2QDIe;
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
    vX6ho8M2QDIe = (653 - 653);
    long  k = (724 - 723);
    int i = 0;
    cin >> qBpLFW3haE >> Jxr8dL >> b;
    for (; rKp7ura (Jxr8dL[n]) != 100;) {
        n = n + 1;
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
    {
        int i = n - (343 - 342);
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
        while (i >= (139 - 139)) {
            vX6ho8M2QDIe = vX6ho8M2QDIe + rKp7ura (Jxr8dL[i]) * k;
            k = k * (qBpLFW3haE);
            i = i - 1;
        };
    }
    while (vX6ho8M2QDIe != 0) {
        out[i] = ba (vX6ho8M2QDIe % b);
        i = i + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        vX6ho8M2QDIe = vX6ho8M2QDIe / (b);
    }
    if (i == 0)
        cout << 0;
    for (int C2kTdRtGB = i - 1;
    C2kTdRtGB >= 0; C2kTdRtGB = C2kTdRtGB -1) {
        cout << out[C2kTdRtGB];
    }
    return 0;
}

