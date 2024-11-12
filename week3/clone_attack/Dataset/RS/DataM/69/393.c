int akWBZc, lenB, WIY4LmcMxZ;

void  change (char a [300], int len) {
    int qXbrsUYS;
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
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < len / 2) {
            if (!(i != len - i - (594 - 593)))
                break;
            else {
                qXbrsUYS = a[i];
                a[i] = a[len - i - (897 - 896)];
                a[len - i - (580 - 579)] = qXbrsUYS;
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

int mSNKmp (char NlfbiIwV1A [300], char AWqeRBuajsmK [300], int YrcOTtiYbw, char DaZ64mQtkj [300]) {
    if (NlfbiIwV1A[YrcOTtiYbw] - '0' + AWqeRBuajsmK[YrcOTtiYbw] - '0' < 10) {
        DaZ64mQtkj[YrcOTtiYbw] = NlfbiIwV1A[YrcOTtiYbw] - '0' + AWqeRBuajsmK[YrcOTtiYbw];
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
        if (WIY4LmcMxZ -1 <= YrcOTtiYbw)
            return 0;
    }
    else {
        DaZ64mQtkj[YrcOTtiYbw] = NlfbiIwV1A[YrcOTtiYbw] - '0' + AWqeRBuajsmK[YrcOTtiYbw] - 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        NlfbiIwV1A[YrcOTtiYbw +1]++;
        if (YrcOTtiYbw >= WIY4LmcMxZ -1) {
            DaZ64mQtkj[YrcOTtiYbw +1]++;
            WIY4LmcMxZ = WIY4LmcMxZ +1;
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
            return 0;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return mSNKmp (NlfbiIwV1A, AWqeRBuajsmK, YrcOTtiYbw +1, DaZ64mQtkj);
}

int main () {
    char NlfbiIwV1A [300];
    char a [300];
    char cqtCzANsD5Gi [300];
    for (int i = 0;
    i < 300; i = i + 1)
        a[i] = cqtCzANsD5Gi[i] = NlfbiIwV1A[i] = '0';
    cin >> a >> cqtCzANsD5Gi;
    akWBZc = strlen (a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    lenB = strlen (cqtCzANsD5Gi);
    WIY4LmcMxZ = akWBZc > lenB ? akWBZc : lenB;
    a[akWBZc] = cqtCzANsD5Gi[lenB] = '0';
    change (a, akWBZc);
    change (cqtCzANsD5Gi, lenB);
    mSNKmp (a, cqtCzANsD5Gi, 0, NlfbiIwV1A);
    for (int i = WIY4LmcMxZ -1;
    i >= 0; i = i - 1) {
        if (i == WIY4LmcMxZ -1 && i != 0 && NlfbiIwV1A[i] == '0')
            continue;
        cout << NlfbiIwV1A[i];
    };
}

