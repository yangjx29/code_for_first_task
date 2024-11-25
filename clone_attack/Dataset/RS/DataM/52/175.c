int jkGV6Yj5hgr [1000] = {0};

int main () {
    int HesqNbcth;
    int n;
    int TUVrLdByN3v;
    scanf ("%d%d", &n, &HesqNbcth);
    {
        TUVrLdByN3v = 0;
        while (n > TUVrLdByN3v) {
            scanf ("%d", &jkGV6Yj5hgr[TUVrLdByN3v]);
            TUVrLdByN3v = TUVrLdByN3v +1;
        };
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
    {
        TUVrLdByN3v = n - 1;
        while (0 <= TUVrLdByN3v) {
            jkGV6Yj5hgr[TUVrLdByN3v +HesqNbcth] = jkGV6Yj5hgr[TUVrLdByN3v];
            TUVrLdByN3v--;
        };
    }
    for (TUVrLdByN3v = 0; TUVrLdByN3v < HesqNbcth; TUVrLdByN3v++) {
        jkGV6Yj5hgr[TUVrLdByN3v] = jkGV6Yj5hgr[TUVrLdByN3v +n];
    }
    printf ("%d", jkGV6Yj5hgr[0]);
    {
        TUVrLdByN3v = 1;
        while (TUVrLdByN3v < n) {
            printf (" %d", jkGV6Yj5hgr[TUVrLdByN3v]);
            TUVrLdByN3v = TUVrLdByN3v +1;
        };
    }
    return 0;
}

