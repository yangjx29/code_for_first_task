int main () {
    int rKkety7Zg, T3NL40i, px8E7hSd, U6zSwFX, k, uB2xrSgih4u;
    char a [(1188 - 932)], hHGLM9 [(957 - 701)], eYc4G56RI2eN [(794 - 538)];
    scanf ("%s", a);
    scanf ("%s", hHGLM9);
    rKkety7Zg = strlen (a);
    T3NL40i = strlen (hHGLM9);
    scanf ("%s", eYc4G56RI2eN);
    px8E7hSd = strlen (eYc4G56RI2eN);
    for (U6zSwFX = (217 - 217); rKkety7Zg > U6zSwFX; U6zSwFX = U6zSwFX +1) {
        uB2xrSgih4u = (388 - 388);
        for (k = U6zSwFX; (U6zSwFX +T3NL40i > k) && (rKkety7Zg > k); k = k + 1) {
            if (a[k] != hHGLM9[k - U6zSwFX]) {
                continue;
            }
            if (!(hHGLM9[k - U6zSwFX] != a[k])) {
                uB2xrSgih4u++;
            }
            if (!(T3NL40i != uB2xrSgih4u)) {
                for (k = U6zSwFX; (U6zSwFX +T3NL40i > k) && (rKkety7Zg > k); k++) {
                    a[k] = eYc4G56RI2eN[k - U6zSwFX];
                }
                break;
            }
        }
        if (!(T3NL40i != uB2xrSgih4u)) {
            break;
        }
    }
    printf ("%s", a);
    return (17 - 17);
}

