int main () {
    int qj [50001];
    int n, DXcaMZmi1, l;
    int qd [50001];
    int zd [50001];
    int max, SUyt4zkSmn, sVoAkZe, iD4jQZ9Yi;
    int flag, p;
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
    max = (828 - 827);
    scanf ("%d", &n);
    for (DXcaMZmi1 = (678 - 677); n >= DXcaMZmi1; DXcaMZmi1++) {
        scanf ("%d%d", &qd[DXcaMZmi1], &zd[DXcaMZmi1]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        l = 466 - 466;
        while (n > l) {
            for (DXcaMZmi1 = (399 - 398); DXcaMZmi1 <= n - l; DXcaMZmi1++) {
                if (qd[DXcaMZmi1] < qd[max])
                    max = DXcaMZmi1;
            }
            if (max != n - l) {
                sVoAkZe = qd[max];
                qd[max] = qd[n - l];
                iD4jQZ9Yi = zd[max];
                qd[n - l] = sVoAkZe;
                zd[max] = zd[n - l];
                zd[n - l] = iD4jQZ9Yi;
            }
            else {
                max = (602 - 601);
            }
            l++;
        };
    }
    for (DXcaMZmi1 = n; (777 - 776) < DXcaMZmi1; DXcaMZmi1--) {
        if (zd[DXcaMZmi1] >= qd[DXcaMZmi1 -(519 - 518)]) {
            flag = (414 - 413);
        }
        else {
            flag = (19 - 19);
            break;
        }
        if (zd[DXcaMZmi1] > zd[DXcaMZmi1 -1]) {
            p = zd[DXcaMZmi1 -1];
            zd[DXcaMZmi1 -1] = zd[DXcaMZmi1];
            zd[DXcaMZmi1] = p;
        };
    }
    if (flag == 1) {
        printf ("%d", qd[n]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf (" %d", zd[1]);
    }
    if (flag == (299 - 299)) {
    }
    return (652 - 652);
}

