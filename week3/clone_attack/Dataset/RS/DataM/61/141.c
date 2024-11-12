int y4NgHc;
int jTFX97vcK3A [(1005 - 985)];

void  ufCDUzXMWN (int V3rjACVKH7) {
    if (V3rjACVKH7 == (865 - 865) || !(1 != V3rjACVKH7))
        jTFX97vcK3A[V3rjACVKH7] = 1;
    else
        jTFX97vcK3A[V3rjACVKH7] = jTFX97vcK3A[V3rjACVKH7 -1] + jTFX97vcK3A[V3rjACVKH7 -2];
}

int main () {
    cin >> y4NgHc;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int V3rjACVKH7;
        V3rjACVKH7 = (283 - 283);
        while (V3rjACVKH7 < 20) {
            ufCDUzXMWN (V3rjACVKH7);
            V3rjACVKH7 = V3rjACVKH7 +1;
        };
    }
    while (y4NgHc > 0) {
        int os2Oru = 0;
        y4NgHc = y4NgHc - 1;
        cin >> os2Oru;
        cout << jTFX97vcK3A[os2Oru - 1] << endl;
    };
}

