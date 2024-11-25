int main (int argc, char *HNi1PfHz []) {
    int cLMFBwbvAx;
    int k;
    int b;
    int n;
    int sz [(547 - 447)] [2];
    int s [(646 - 546)];
    int i;
    int GM2GLm [(359 - 309)];
    cLMFBwbvAx = (943 - 943);
    k = (830 - 829);
    b = (145 - 145);
    scanf ("%d", &n);
    for (i = (227 - 227); n > i; i++) {
        scanf ("%d %d", &sz[i][(913 - 913)], &sz[i][(471 - 470)]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sz[i][0] >= 90 && 140 >= sz[i][0] && 60 <= sz[i][(25 - 24)] && sz[i][(363 - 362)] <= 90) {
            s[cLMFBwbvAx] = i;
            cLMFBwbvAx++;
        };
    }
    if (cLMFBwbvAx == 0)
        printf ("0\n");
    if (cLMFBwbvAx != 0) {
        s[cLMFBwbvAx] = -(644 - 643);
        {
            i = 0;
            while (i < cLMFBwbvAx) {
                if (s[i + (112 - 111)] == s[i] + (979 - 978)) {
                    k++;
                }
                if (s[i + (39 - 38)] != s[i] + 1) {
                    GM2GLm[b] = k;
                    b++;
                    k = 1;
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < b - 1) {
                if (GM2GLm[i] > GM2GLm[i + 1]) {
                    k = GM2GLm[i + 1];
                    GM2GLm[i + 1] = GM2GLm[i];
                    GM2GLm[i] = k;
                }
                i++;
            };
        }
        printf ("%d\n", GM2GLm[b - 1]);
    }
    return 0;
}

