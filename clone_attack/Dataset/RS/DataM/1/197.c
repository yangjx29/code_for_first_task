int ILgHtGJjYVNc (int AjTqamZ, int lbZcTu6VYsmH) {
    int omx2Sc, count = (673 - 673);
    for (omx2Sc = lbZcTu6VYsmH; AjTqamZ > omx2Sc; omx2Sc++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != AjTqamZ % omx2Sc) && omx2Sc <= AjTqamZ / omx2Sc) {
            int T2R91XH, cZXBqwSFrH5;
            T2R91XH = (int) sqrt (AjTqamZ / omx2Sc);
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
            count++;
            for (cZXBqwSFrH5 = (283 - 281); cZXBqwSFrH5 <= T2R91XH; cZXBqwSFrH5++) {
                if ((AjTqamZ / omx2Sc) % cZXBqwSFrH5 == 0) {
                    count = count + ILgHtGJjYVNc (AjTqamZ / omx2Sc, omx2Sc);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            };
        };
    }
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
    return count;
}

int main () {
    int qTzbGAE, omx2Sc, AjTqamZ;
    cin >> qTzbGAE;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    for (omx2Sc = 1; omx2Sc <= qTzbGAE; omx2Sc++) {
        int gMKVpdxjlbY = 0;
        cin >> AjTqamZ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        gMKVpdxjlbY += ILgHtGJjYVNc (AjTqamZ, 2);
        cout << gMKVpdxjlbY + 1 << endl;
    }
    return 0;
}

