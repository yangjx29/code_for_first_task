long  int turntoten (int a, char n []) {
    int k8I5CjH;
    int LIUYZN;
    int lc;
    int w;
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
    long  int ans = 0;
    LIUYZN = strlen (n);
    lc = (901 - 900);
    for (k8I5CjH = LIUYZN -1; 0 <= k8I5CjH; k8I5CjH--) {
        if ((n[k8I5CjH] >= '0') && (n[k8I5CjH] <= '9'))
            w = n[k8I5CjH] - '0';
        if ((n[k8I5CjH] >= 'a') && ('z' >= n[k8I5CjH]))
            w = n[k8I5CjH] - 'a' + 10;
        if ((n[k8I5CjH] >= 'A') && (n[k8I5CjH] <= 'Z'))
            w = n[k8I5CjH] - 'A' + 10;
        ans += w * lc;
        lc *= a;
    }
    return ans;
}

void  bCLfMxHAo (int j10MpBvVIHRF, long  int CiRU6YB2tHIh) {
    char ans [100];
    int vIek4mPd97Tl, k8I5CjH = 0, ys = 0;
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
    if (CiRU6YB2tHIh == 0)
        cout << 0;
    for (; CiRU6YB2tHIh > 0;) {
        ys = CiRU6YB2tHIh % j10MpBvVIHRF;
        if (ys >= 10)
            ans[k8I5CjH] = (char) 55 + ys;
        else
            ans[k8I5CjH] = (char) 48 + ys;
        k8I5CjH = k8I5CjH + 1;
        CiRU6YB2tHIh = CiRU6YB2tHIh / j10MpBvVIHRF;
    }
    for (vIek4mPd97Tl = k8I5CjH - 1; vIek4mPd97Tl >= 0; vIek4mPd97Tl = vIek4mPd97Tl - 1)
        cout << ans[vIek4mPd97Tl];
}

int main () {
    int a, j10MpBvVIHRF;
    long  int CiRU6YB2tHIh;
    char n [100];
    cin >> a >> n >> j10MpBvVIHRF;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    CiRU6YB2tHIh = turntoten (a, n);
    bCLfMxHAo (j10MpBvVIHRF, CiRU6YB2tHIh);
    cout << endl;
    return 0;
}

