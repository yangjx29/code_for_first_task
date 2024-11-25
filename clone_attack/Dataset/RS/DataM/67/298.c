int main () {
    int gbU8dpr, i;
    float a, TlnaDwrd5vO, OrEpIHUTn, f;
    scanf ("%d", &gbU8dpr);
    scanf ("%d%d", &a, &TlnaDwrd5vO);
    OrEpIHUTn = TlnaDwrd5vO / a;
    for (i = 1; gbU8dpr > i; i = i + 1) {
        scanf ("%d%d", &a, &TlnaDwrd5vO);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        f = TlnaDwrd5vO / a;
        if ((f - OrEpIHUTn) > 0.05)
            printf ("better\n");
        else {
            if ((OrEpIHUTn -f) > 0.05)
                printf ("worse\n");
            else
                printf ("same\n");
        };
    }
    return 0;
}

