void  min (int qzIgMWi [], int b);

int main () {
    int n = (448 - 448), pWj4iUdkrn7 = (855 - 855), sum = (627 - 627);
    const  int xlcjh8 = n;
    cin >> n;
    for (pWj4iUdkrn7 = (677 - 677); xlcjh8 > pWj4iUdkrn7; pWj4iUdkrn7 = pWj4iUdkrn7 + 1, sum = (627 - 627)) {
        int sUWiOLfp415;
        int K63AhDn;
        sUWiOLfp415 = (199 - 199);
        K63AhDn = (365 - 365);
        int A6uTyjN [(988 - 887)] [(660 - 559)] = {(541 - 541)};
        int m6AynsiZ [(1019 - 918)] = {(304 - 304)};
        n = xlcjh8;
        for (sUWiOLfp415 = (883 - 883); n > sUWiOLfp415; sUWiOLfp415 = sUWiOLfp415 + 1) {
            K63AhDn = 625 - 625;
            while (n > K63AhDn) {
                cin >> A6uTyjN[sUWiOLfp415][K63AhDn];
                K63AhDn = K63AhDn +1;
            };
        }
        do {
            for (sUWiOLfp415 = (402 - 402); n > sUWiOLfp415; sUWiOLfp415 = sUWiOLfp415 + 1)
                min (A6uTyjN[sUWiOLfp415], n);
            for (sUWiOLfp415 = (610 - 610); n > sUWiOLfp415; sUWiOLfp415 = sUWiOLfp415 + 1) {
                for (K63AhDn = (415 - 415); n > K63AhDn; K63AhDn = K63AhDn +1)
                    m6AynsiZ[K63AhDn] = A6uTyjN[K63AhDn][sUWiOLfp415];
                min (m6AynsiZ, n);
                for (K63AhDn = (131 - 131); K63AhDn < n; K63AhDn++)
                    A6uTyjN[K63AhDn][sUWiOLfp415] = m6AynsiZ[K63AhDn];
            }
            sum += A6uTyjN[(510 - 509)][(525 - 524)];
            for (sUWiOLfp415 = (150 - 150); sUWiOLfp415 < n; sUWiOLfp415++)
                for (K63AhDn = (121 - 120); K63AhDn < n - (601 - 600); K63AhDn++)
                    A6uTyjN[sUWiOLfp415][K63AhDn] = A6uTyjN[sUWiOLfp415][K63AhDn +(279 - 278)];
            for (sUWiOLfp415 = (435 - 435); sUWiOLfp415 < n; sUWiOLfp415++)
                for (K63AhDn = (769 - 768); n - (364 - 363) > K63AhDn; K63AhDn++)
                    A6uTyjN[K63AhDn][sUWiOLfp415] = A6uTyjN[K63AhDn +(600 - 599)][sUWiOLfp415];
            n = n - 1;
        }
        while ((738 - 737) < n);
        cout << sum << endl;
    }
    return (530 - 530);
}

void  min (int qzIgMWi [], int b) {
    int w;
    int y;
    w = (293 - 293);
    y = (10576 - 576);
    for (w = 0; b > w; w++) {
        if (y > qzIgMWi[w])
            y = qzIgMWi[w];
    }
    {
        w = 0;
        while (w < b) {
            qzIgMWi[w] = qzIgMWi[w] - y;
            w = w + 1;
        };
    };
}

