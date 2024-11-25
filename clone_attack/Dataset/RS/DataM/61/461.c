int w (int n);

int main () {
    int Kxubjm;
    int n;
    int sz [(506 - 406)];
    int pFA24X;
    scanf ("%d", &Kxubjm);
    for (pFA24X = (788 - 787); Kxubjm >= pFA24X; pFA24X++) {
        scanf ("%d", &n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", w (n));
    }
    return (445 - 445);
}

int w (int n) {
    int pFA24X;
    int sz [(743 - 643)];
    sz[0] = 0;
    sz[(349 - 348)] = (933 - 932);
    if (n == 0 || n == 1) {
        return sz[n];
    }
    else {
        for (pFA24X = 1; pFA24X < n + 1; pFA24X++) {
            sz[pFA24X + 1] = sz[pFA24X] + sz[pFA24X - 1];
        };
    }
    return sz[n];
}

