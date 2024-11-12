int main () {
    int max (int x, int jMvuNaOVD);
    int Ew5hyQ (int x, int jMvuNaOVD);
    int vEWcl1phD = 1, U731qzHux, K1YXclgKt8n, s, NxkgnLyl, f, g;
    scanf ("%d", &U731qzHux);
    for (; vEWcl1phD <= U731qzHux;) {
        scanf ("%d\n", &K1YXclgKt8n);
        if (vEWcl1phD == 1) {
            s = K1YXclgKt8n;
            NxkgnLyl = K1YXclgKt8n;
        }
        else {
            f = NxkgnLyl;
            g = s;
            s = max (s, K1YXclgKt8n);
            NxkgnLyl = Ew5hyQ (g, K1YXclgKt8n);
            NxkgnLyl = max (NxkgnLyl, f);
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
        vEWcl1phD = vEWcl1phD + 1;
    }
    printf ("%d\n%d\n", s, NxkgnLyl);
    return 0;
}

int max (int x, int jMvuNaOVD) {
    int z;
    z = x > jMvuNaOVD ? x : jMvuNaOVD;
    return (z);
}

int Ew5hyQ (int x, int jMvuNaOVD) {
    int z;
    z = x < jMvuNaOVD ? x : jMvuNaOVD;
    return (z);
}

