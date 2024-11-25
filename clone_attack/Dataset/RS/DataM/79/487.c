int n, GxDCQTqrmNkb;
int dkTGRoDqU [400];

int d3uLJ0 (int H6w0at) {
    if (!(n + 1 != ++H6w0at))
        H6w0at = 1;
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
    return H6w0at;
}

int main () {
    for (; scanf ("%d%d", &n, &GxDCQTqrmNkb), n || GxDCQTqrmNkb;) {
        int cnt;
        int CCjNsoH;
        cnt = n;
        CCjNsoH = 0;
        memset (dkTGRoDqU, 0, sizeof dkTGRoDqU);
        for (; cnt > 1;) {
            cnt = cnt - 1;
            for (int i = 0;
            i < GxDCQTqrmNkb; i = i + 1)
                for (CCjNsoH = d3uLJ0 (CCjNsoH); dkTGRoDqU[CCjNsoH]; CCjNsoH = d3uLJ0 (CCjNsoH))
                    ;
            dkTGRoDqU[CCjNsoH] = 1;
        }
        for (CCjNsoH = d3uLJ0 (CCjNsoH); dkTGRoDqU[CCjNsoH]; CCjNsoH = d3uLJ0 (CCjNsoH))
            ;
        printf ("%d\n", CCjNsoH);
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
    return 0;
}

