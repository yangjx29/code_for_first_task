int main () {
    char psyWbhGLguU [100];
    int D6jurwf;
    int kt0cGdEIF;
    gets (psyWbhGLguU);
    char b [100];
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
    gets (b);
    for (D6jurwf = 0; psyWbhGLguU[D6jurwf] != '\0' && b[D6jurwf] != '\0'; D6jurwf++) {
        if (psyWbhGLguU[D6jurwf] <= 'Z' && psyWbhGLguU[D6jurwf] >= 'A')
            psyWbhGLguU[D6jurwf] = psyWbhGLguU[D6jurwf] + (960 - 928);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (b[D6jurwf] <= 'Z' && b[D6jurwf] >= 'A')
            b[D6jurwf] = b[D6jurwf] + 32;
    }
    kt0cGdEIF = strcmp (psyWbhGLguU, b);
    if (kt0cGdEIF > 0)
        printf ("%c", '>');
    if (kt0cGdEIF < 0)
        printf ("%c", '<');
    if (kt0cGdEIF == 0)
        printf ("%c", '=');
    return 0;
}

