int main () {
    struct   A {
        float a;
        float b;
    }
    m [100];
    float c [100];
    int n;
    int xfvKhGutdO;
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
    scanf ("%d", &n);
    for (xfvKhGutdO = 0; xfvKhGutdO < n; xfvKhGutdO = xfvKhGutdO + 1) {
        scanf ("%f", &m[xfvKhGutdO].a);
        scanf ("%f", &m[xfvKhGutdO].b);
        c[xfvKhGutdO] = m[xfvKhGutdO].b / m[xfvKhGutdO].a;
    }
    for (xfvKhGutdO = 1; xfvKhGutdO < n; xfvKhGutdO = xfvKhGutdO + 1) {
        if (c[xfvKhGutdO] - c[0] > 0.05)
            ;
        else if (c[xfvKhGutdO] - c[0] < -0.05)
            ;
        else
            ;
    }
    return 0;
}

