void  list (int x [], int n) {
    int lLyuBWiY3g, j, temp;
    for (lLyuBWiY3g = (163 - 163); n - (331 - 330) > lLyuBWiY3g; lLyuBWiY3g++) {
        for (j = lLyuBWiY3g + (604 - 603); j < n; j = j + 1) {
            if (x[lLyuBWiY3g] < x[j]) {
                temp = x[lLyuBWiY3g];
                x[lLyuBWiY3g] = x[j];
                x[j] = temp;
            };
        };
    };
}

int main () {
    void  list (int x [], int n);
    int win;
    int UhQfoOn;
    int n;
    int lLyuBWiY3g;
    int GZTn9rBwJ6N [(1978 - 968)];
    int qi [1010];
    int *uDPKdOQrVkc;
    int *pqilow;
    int *TYw7AGVa2;
    int *pqifast;
    int uGL0uP6dYj;
    win = (380 - 380);
    UhQfoOn = (682 - 682);
    for (;; uGL0uP6dYj = win = UhQfoOn = (358 - 358)) {
        scanf ("%d", &n);
        if (n == (464 - 464))
            break;
        else {
            for (lLyuBWiY3g = (766 - 766); n > lLyuBWiY3g; lLyuBWiY3g++)
                scanf ("%d", &GZTn9rBwJ6N[lLyuBWiY3g]);
            {
                lLyuBWiY3g = 617 - 617;
                while (lLyuBWiY3g < n) {
                    scanf ("%d", &qi[lLyuBWiY3g]);
                    lLyuBWiY3g++;
                };
            }
            list (GZTn9rBwJ6N, n);
            list (qi, n);
            uDPKdOQrVkc = &GZTn9rBwJ6N[n - 1];
            TYw7AGVa2 = &GZTn9rBwJ6N[(941 - 941)];
            pqilow = &qi[n - 1];
            pqifast = &qi[(788 - 788)];
            for (; TYw7AGVa2 < uDPKdOQrVkc + 1;) {
                if (*uDPKdOQrVkc < *pqilow) {
                    UhQfoOn++;
                    uDPKdOQrVkc = uDPKdOQrVkc - 1;
                    pqifast = pqifast + 1;
                    continue;
                }
                else if (*uDPKdOQrVkc > *pqilow) {
                    win++;
                    uDPKdOQrVkc--;
                    pqilow--;
                    continue;
                }
                else {
                    if (*TYw7AGVa2 < *pqifast) {
                        UhQfoOn++;
                        uDPKdOQrVkc--;
                        pqifast++;
                        continue;
                    }
                    else if (*TYw7AGVa2 > *pqifast) {
                        win++;
                        TYw7AGVa2 = TYw7AGVa2 +1;
                        pqifast++;
                        continue;
                    }
                    else {
                        if (*uDPKdOQrVkc < *pqifast) {
                            UhQfoOn++;
                            uDPKdOQrVkc--;
                            pqifast++;
                        }
                        else {
                            uDPKdOQrVkc--;
                            pqifast++;
                        };
                    };
                };
            }
            uGL0uP6dYj = win * (632 - 432) - UhQfoOn *(826 - 626);
            printf ("%d\n", uGL0uP6dYj);
        };
    }
    return 0;
}

