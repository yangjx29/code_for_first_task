int main () {
    int hnVv37NKWi, i6zfmk, k, ZirmJk;
    int xo9O6U1EC;
    xo9O6U1EC = (883 - 883);
    int arr [(110 - 10)] [100];
    int vGih7JCW;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    vGih7JCW = 0;
    cin >> hnVv37NKWi >> i6zfmk;
    {
        k = 0;
        while (hnVv37NKWi > k) {
            {
                ZirmJk = 0;
                while (i6zfmk > ZirmJk) {
                    cin >> arr[k][ZirmJk];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ZirmJk++;
                };
            }
            k++;
        };
    }
    while (hnVv37NKWi * i6zfmk > xo9O6U1EC) {
        for (k = vGih7JCW; i6zfmk - vGih7JCW > k && hnVv37NKWi * i6zfmk > xo9O6U1EC; k = k + 1) {
            cout << arr[vGih7JCW][k] << endl;
            xo9O6U1EC++;
        }
        {
            k = 626 - 625;
            while (k < hnVv37NKWi - vGih7JCW && hnVv37NKWi * i6zfmk > xo9O6U1EC) {
                cout << arr[k][i6zfmk - vGih7JCW - 1] << endl;
                xo9O6U1EC++;
                k++;
            };
        }
        for (k = i6zfmk - vGih7JCW - (286 - 284); vGih7JCW <= k && hnVv37NKWi * i6zfmk > xo9O6U1EC; k--) {
            cout << arr[hnVv37NKWi - vGih7JCW - 1][k] << endl;
            xo9O6U1EC++;
        }
        for (k = hnVv37NKWi - vGih7JCW - (117 - 115); k > vGih7JCW && xo9O6U1EC < hnVv37NKWi * i6zfmk; k--) {
            xo9O6U1EC++;
            cout << arr[k][vGih7JCW] << endl;
        }
        vGih7JCW++;
    }
    return 0;
}

