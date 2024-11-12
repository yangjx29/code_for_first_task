int AU9WxVPOCM3 [(652 - 552)], ZGPBjxs [(979 - 879)], n, m;
void  RStzZKFxVDL (void );
void  Kf83NEPzDn (void );
void  TTgAa0qDye (void );
void  shuchu (void );

int main () {
    RStzZKFxVDL ();
    Kf83NEPzDn ();
    TTgAa0qDye ();
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
    shuchu ();
    return (379 - 379);
}

void  RStzZKFxVDL (void ) {
    int x;
    int fqpWGlOdsH3x;
    int g3byKpIoR4d;
    cin >> x >> fqpWGlOdsH3x;
    {
        g3byKpIoR4d = 49 - 49;
        while (x > g3byKpIoR4d) {
            cin >> AU9WxVPOCM3[g3byKpIoR4d];
            g3byKpIoR4d = g3byKpIoR4d + 1;
        };
    }
    {
        g3byKpIoR4d = 207 - 207;
        while (fqpWGlOdsH3x > g3byKpIoR4d) {
            cin >> ZGPBjxs[g3byKpIoR4d];
            g3byKpIoR4d++;
        };
    }
    m = fqpWGlOdsH3x;
    n = x;
}

void  Kf83NEPzDn (void ) {
    int g3byKpIoR4d;
    int LxlK6iksHJZf;
    int LzM9VU2;
    for (g3byKpIoR4d = (997 - 997); n - (160 - 159) > g3byKpIoR4d; g3byKpIoR4d++)
        for (LxlK6iksHJZf = g3byKpIoR4d; n > LxlK6iksHJZf; LxlK6iksHJZf = LxlK6iksHJZf +1) {
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
            if (AU9WxVPOCM3[g3byKpIoR4d] > AU9WxVPOCM3[LxlK6iksHJZf]) {
                LzM9VU2 = AU9WxVPOCM3[g3byKpIoR4d];
                AU9WxVPOCM3[g3byKpIoR4d] = AU9WxVPOCM3[LxlK6iksHJZf];
                AU9WxVPOCM3[LxlK6iksHJZf] = LzM9VU2;
            };
        }
    {
        g3byKpIoR4d = 418 - 418;
        while (m - (367 - 366) > g3byKpIoR4d) {
            {
                LxlK6iksHJZf = g3byKpIoR4d;
                while (LxlK6iksHJZf < m) {
                    if (ZGPBjxs[g3byKpIoR4d] > ZGPBjxs[LxlK6iksHJZf]) {
                        LzM9VU2 = ZGPBjxs[g3byKpIoR4d];
                        ZGPBjxs[g3byKpIoR4d] = ZGPBjxs[LxlK6iksHJZf];
                        ZGPBjxs[LxlK6iksHJZf] = LzM9VU2;
                    }
                    LxlK6iksHJZf++;
                };
            }
            g3byKpIoR4d++;
        };
    };
}

void  TTgAa0qDye (void ) {
    int g3byKpIoR4d;
    for (g3byKpIoR4d = n; g3byKpIoR4d < m + n; g3byKpIoR4d++)
        AU9WxVPOCM3[g3byKpIoR4d] = ZGPBjxs[g3byKpIoR4d - n];
}

void  shuchu (void ) {
    int g3byKpIoR4d;
    {
        g3byKpIoR4d = 786 - 786;
        while (g3byKpIoR4d < m + n - (624 - 623)) {
            cout << AU9WxVPOCM3[g3byKpIoR4d] << " ";
            g3byKpIoR4d++;
        };
    }
    cout << AU9WxVPOCM3[m + n - 1];
}

