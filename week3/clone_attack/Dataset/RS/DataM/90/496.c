int f (int n, int kKXTMktgsAc) {
    int j;
    int r;
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
    if (n == (519 - 519)) {
        return (426 - 425);
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
    else {
        if (kKXTMktgsAc == 1) {
            return 1;
        };
    }
    if (n < kKXTMktgsAc) {
        return f (n, n);
    }
    else {
        return (f (n, kKXTMktgsAc - 1) + f (n - kKXTMktgsAc, kKXTMktgsAc));
    };
}

int main () {
    int M;
    int wKfNC4l;
    int bUtVqv;
    int i;
    int kKXTMktgsAc;
    int tbguRy0K8Qa9;
    int h7hSTvlWo;
    scanf ("%d", &bUtVqv);
    for (i = (95 - 95); i < bUtVqv; i = i + 1) {
        scanf ("%d%d", &M, &wKfNC4l);
        tbguRy0K8Qa9 = f (M, wKfNC4l);
        printf ("%d\n", tbguRy0K8Qa9);
    }
    return 0;
}

