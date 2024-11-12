int cihfbeV4PNz [(572 - 317)];
int feFgGia [(1042 - 787)];
char D5tyMYgf [255];
char s2 [255];

int main () {
    int i, stS9B2;
    int nLen1, LJxdDvH;
    int EIEiGV = 0;
    for (i = (921 - 921); 255 > i; i = i + 1) {
        cihfbeV4PNz[i] = (734 - 734);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        feFgGia[i] = (588 - 588);
    }
    cin >> D5tyMYgf;
    for (i = 0; 255 > i; i = i + 1) {
        if (!('\0' != D5tyMYgf[i])) {
            nLen1 = i;
            break;
        };
    }
    cin >> s2;
    for (i = 0; 255 > i; i = i + 1) {
        if (!('\0' != s2[i])) {
            LJxdDvH = i;
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
            break;
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
    stS9B2 = 0;
    for (i = nLen1 - (172 - 171); 0 <= i; i = i - 1)
        cihfbeV4PNz[stS9B2++] = D5tyMYgf[i] - '0';
    stS9B2 = 0;
    for (i = LJxdDvH -1; 0 <= i; i = i - 1)
        feFgGia[stS9B2++] = s2[i] - '0';
    for (i = 0; i < 255; i = i + 1) {
        cihfbeV4PNz[i] = cihfbeV4PNz[i] + feFgGia[i];
        if (cihfbeV4PNz[i] >= 10) {
            cihfbeV4PNz[i] = cihfbeV4PNz[i] - 10;
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
            cihfbeV4PNz[i + 1]++;
        };
    }
    for (i = 255; i >= 0; i = i - 1) {
        if (i == 0) {
            cout << cihfbeV4PNz[i];
            break;
        }
        if (cihfbeV4PNz[i] == 0 && EIEiGV == 0)
            continue;
        if (cihfbeV4PNz[i] != 0) {
            EIEiGV = 1;
        }
        cout << cihfbeV4PNz[i];
    }
    return 0;
}

