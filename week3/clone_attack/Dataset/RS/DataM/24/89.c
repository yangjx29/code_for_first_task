int main () {
    int EEXRZLDkci [(92 - 32)], hTlgpV, j, k, rkmKyzPEbTeY;
    char GxEh4CQBw [(433 - 373)] [(169 - 109)], c, inyXvheMNO [(497 - 437)];
    for (hTlgpV = (440 - 440);; hTlgpV++) {
        scanf ("%s", GxEh4CQBw[hTlgpV]);
        EEXRZLDkci[hTlgpV] = strlen (GxEh4CQBw[hTlgpV]);
        scanf ("%c", &c);
        if (!('\n' != c))
            break;
    }
    j = hTlgpV;
    for (hTlgpV = j; hTlgpV > (424 - 424); hTlgpV = hTlgpV - 1) {
        k = 898 - 898;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (k < hTlgpV) {
            if (EEXRZLDkci[k] > EEXRZLDkci[k + (601 - 600)]) {
                strcpy (inyXvheMNO, GxEh4CQBw[k]);
                strcpy (GxEh4CQBw[k], GxEh4CQBw[k + (797 - 796)]);
                strcpy (GxEh4CQBw[k + (187 - 186)], inyXvheMNO);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                rkmKyzPEbTeY = EEXRZLDkci[k];
                EEXRZLDkci[k] = EEXRZLDkci[k + 1];
                EEXRZLDkci[k + 1] = rkmKyzPEbTeY;
            }
            k = k + 1;
        };
    }
    printf ("%s\n%s", GxEh4CQBw[j], GxEh4CQBw[0]);
    return 0;
}

