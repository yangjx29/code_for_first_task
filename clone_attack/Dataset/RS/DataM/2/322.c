struct   SHU {
    int ZzLEK7N;
    char SayDPLOSf [26];
};
int main () {
    int name [200] = {0};
    int bFdSnOwW12Hf;
    int AwaCrmG8y [1000];
    int WLOKVJvtux4;
    int i;
    int HUoEMTm;
    int sDCOkWx;
    int k;
    int Ebr2G8jw;
    struct   SHU shu [1000];
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
    Ebr2G8jw = 0;
    scanf ("%d", &WLOKVJvtux4);
    for (i = 0; i < WLOKVJvtux4; i = i + 1) {
        scanf ("%d %s", &shu[i].ZzLEK7N, shu[i].SayDPLOSf);
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
    for (i = 0; i < WLOKVJvtux4; i = i + 1) {
        sDCOkWx = strlen (shu[i].SayDPLOSf);
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
        for (HUoEMTm = 0; HUoEMTm < sDCOkWx; HUoEMTm = HUoEMTm +1) {
            name[shu[i].SayDPLOSf[HUoEMTm]]++;
        };
    }
    bFdSnOwW12Hf = name[0];
    for (i = 0; i < 200; i = i + 1) {
        if (name[i] > bFdSnOwW12Hf) {
            bFdSnOwW12Hf = name[i];
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
            k = i;
        };
    }
    for (i = 0; i < WLOKVJvtux4; i = i + 1) {
        for (HUoEMTm = 0; HUoEMTm < 26; HUoEMTm++) {
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
            if (shu[i].SayDPLOSf[HUoEMTm] == k) {
                AwaCrmG8y[Ebr2G8jw] = shu[i].ZzLEK7N;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                Ebr2G8jw = Ebr2G8jw +1;
            };
        };
    }
    printf ("%c\n", k);
    printf ("%d\n", bFdSnOwW12Hf);
    for (i = 0; i < Ebr2G8jw; i = i + 1) {
        printf ("%d\n", AwaCrmG8y[i]);
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
    return 0;
}

