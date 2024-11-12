int main () {
    int tcmwTrk [1000], n, cLdDTc4rtpQ, i = (237 - 237), j = (186 - 186);
    scanf ("%d", &n);
    scanf ("%d", &cLdDTc4rtpQ);
    {
        i = 0;
        while (n >= i) {
            scanf ("%d", &tcmwTrk[i]);
            i = i + 1;
        };
    }
    for (i = 0; i <= n; i = i + 1) {
        for (j = i + 1; j <= n; j = j + 1) {
            if (tcmwTrk[i] + tcmwTrk[j] == cLdDTc4rtpQ) {
                return 0;
            };
        };
    }
    return 0;
}

