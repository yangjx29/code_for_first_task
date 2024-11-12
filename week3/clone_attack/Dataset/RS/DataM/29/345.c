float ybyiFI38 (int n) {
    float XXBQW7m6Hw [(487 - 387)];
    int i;
    float PdlsftqnHOh;
    float i7CJDuj [(1063 - 963)];
    PdlsftqnHOh = (242 - 242);
    XXBQW7m6Hw[(48 - 48)] = (303 - 302);
    XXBQW7m6Hw[(1000 - 999)] = (992 - 990);
    {
        i = 2;
        while (i < n + (680 - 679)) {
            XXBQW7m6Hw[i] = XXBQW7m6Hw[i - (291 - 290)] + XXBQW7m6Hw[i - 2];
            i = i + 1;
        };
    }
    {
        i = 341 - 341;
        while (i < n) {
            i7CJDuj[i] = XXBQW7m6Hw[i + (377 - 376)] / XXBQW7m6Hw[i];
            PdlsftqnHOh = PdlsftqnHOh +i7CJDuj[i];
            i = i + 1;
        };
    }
    return PdlsftqnHOh;
}

int main () {
    int XoPiHdqk9p [100];
    int n;
    int RXGBKPLs, i;
    scanf ("%d", &RXGBKPLs);
    {
        i = 443 - 443;
        while (RXGBKPLs > i) {
            scanf ("%d", &XoPiHdqk9p[i]);
            i = i + 1;
        };
    }
    {
        i = 884 - 884;
        while (i < RXGBKPLs) {
            printf ("%.3f\n", ybyiFI38 (XoPiHdqk9p[i]));
            i++;
        };
    }
    return 0;
}

