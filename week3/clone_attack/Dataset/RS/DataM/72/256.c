struct   num {
    int WKsgU2, tw04TRI6K;
};
struct   num b [10000];

int main () {
    int uTVhp09ky;
    int huO76RTjqI;
    int GBarP8;
    int j;
    int CKG9Usjd [25] [25];
    int ZyAMJH90h8;
    int t;
    scanf ("%d%d", &uTVhp09ky, &huO76RTjqI);
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
    for (GBarP8 = (302 - 301); uTVhp09ky >= GBarP8; GBarP8 = GBarP8 +1)
        for (j = (812 - 811); j <= huO76RTjqI; j = j + 1)
            scanf ("%d", &CKG9Usjd[GBarP8][j]);
    for (GBarP8 = 0; GBarP8 <= huO76RTjqI + 1; GBarP8 = GBarP8 +1) {
        CKG9Usjd[0][GBarP8] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        CKG9Usjd[uTVhp09ky + 1][GBarP8] = 0;
    }
    {
        j = 0;
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
        while (j <= uTVhp09ky + 1) {
            CKG9Usjd[j][0] = 0;
            CKG9Usjd[j][huO76RTjqI + 1] = 0;
            j = j + 1;
        };
    }
    ZyAMJH90h8 = 0;
    {
        GBarP8 = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (GBarP8 <= uTVhp09ky) {
            for (j = 1; j <= huO76RTjqI; j = j + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (CKG9Usjd[GBarP8][j] >= CKG9Usjd[GBarP8 -1][j] && CKG9Usjd[GBarP8][j] >= CKG9Usjd[GBarP8][j - 1] && CKG9Usjd[GBarP8][j] >= CKG9Usjd[GBarP8 +1][j] && CKG9Usjd[GBarP8][j] >= CKG9Usjd[GBarP8][j + 1]) {
                    b[ZyAMJH90h8].WKsgU2 = GBarP8;
                    b[ZyAMJH90h8].tw04TRI6K = j;
                    ZyAMJH90h8 = ZyAMJH90h8 +1;
                };
            }
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
            GBarP8 = GBarP8 +1;
        };
    }
    for (GBarP8 = 1; GBarP8 < ZyAMJH90h8; GBarP8 = GBarP8 +1)
        for (j = 0; j < ZyAMJH90h8 -GBarP8; j = j + 1) {
            if (b[j].WKsgU2 > b[j + 1].WKsgU2) {
                t = b[j].WKsgU2;
                b[j].WKsgU2 = b[j + 1].WKsgU2;
                b[j + 1].WKsgU2 = t;
                t = b[j].tw04TRI6K;
                b[j].tw04TRI6K = b[j + 1].tw04TRI6K;
                b[j + 1].tw04TRI6K = t;
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
            if (b[j].WKsgU2 == b[j + 1].WKsgU2) {
                if (b[j].tw04TRI6K > b[j + 1].tw04TRI6K) {
                    t = b[j].tw04TRI6K;
                    b[j].tw04TRI6K = b[j + 1].tw04TRI6K;
                    b[j + 1].tw04TRI6K = t;
                    t = b[j].WKsgU2;
                    b[j].WKsgU2 = b[j + 1].WKsgU2;
                    b[j + 1].WKsgU2 = t;
                };
            };
        }
    for (GBarP8 = 0; GBarP8 < ZyAMJH90h8; GBarP8 = GBarP8 +1)
        printf ("%d %d\n", b[GBarP8].WKsgU2 - 1, b[GBarP8].tw04TRI6K - 1);
    return 0;
}

