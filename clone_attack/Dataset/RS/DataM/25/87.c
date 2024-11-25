int main () {
    int n;
    int a [100] = {0};
    int vxUVaFNyYn;
    cin >> n;
    a[0] = 1;
    vxUVaFNyYn = 1;
    while (n--) {
        for (int CkfLWMKrJuXD = 0;
        vxUVaFNyYn > CkfLWMKrJuXD; CkfLWMKrJuXD++) {
            a[CkfLWMKrJuXD] *= 2;
        }
        for (int CkfLWMKrJuXD = 0;
        vxUVaFNyYn > CkfLWMKrJuXD; CkfLWMKrJuXD++) {
            if (a[CkfLWMKrJuXD] > 9) {
                a[CkfLWMKrJuXD +1]++;
                a[CkfLWMKrJuXD] -= 10;
            };
        }
        if (a[vxUVaFNyYn]) {
            vxUVaFNyYn = vxUVaFNyYn + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (int CkfLWMKrJuXD = vxUVaFNyYn - 1;
    CkfLWMKrJuXD >= 0; CkfLWMKrJuXD--) {
        cout << a[CkfLWMKrJuXD];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    cout << endl;
    return 0;
}

