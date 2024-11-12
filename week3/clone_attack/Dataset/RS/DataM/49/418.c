int main () {
    char hd5gKHMTxehC [(801 - 301)];
    gets (hd5gKHMTxehC);
    int vLpYSIm, agmlAro5CFi, k, x;
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
    for (vLpYSIm = 2; strlen (hd5gKHMTxehC) >= vLpYSIm; vLpYSIm = vLpYSIm + 1) {
        for (agmlAro5CFi = (431 - 431); (strlen (hd5gKHMTxehC) - vLpYSIm) >= agmlAro5CFi; agmlAro5CFi = agmlAro5CFi + 1) {
            x = 0;
            for (k = 0; k < vLpYSIm; k = k + 1) {
                if (hd5gKHMTxehC[agmlAro5CFi + k] != hd5gKHMTxehC[agmlAro5CFi + vLpYSIm - 1 - k]) {
                    x = 1;
                    break;
                };
            }
            if (x == 0) {
                k = agmlAro5CFi;
                while (k < agmlAro5CFi + vLpYSIm) {
                    printf ("%c", hd5gKHMTxehC[k]);
                    k = k + 1;
                };
            };
        };
    }
    return 0;
}

