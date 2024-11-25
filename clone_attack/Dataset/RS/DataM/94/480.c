int main () {
    int waVKYnztU, hfbRCOKZq7s = 0, x;
    int ErevVS2u [waVKYnztU];
    int b [waVKYnztU];
    cin >> waVKYnztU;
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
    {
        int DxD3ul = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (DxD3ul < waVKYnztU) {
            cin >> ErevVS2u[DxD3ul];
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
            DxD3ul = DxD3ul +1;
        };
    }
    {
        int DxD3ul = 0;
        while (DxD3ul < waVKYnztU) {
            if (ErevVS2u[DxD3ul] % 2) {
                hfbRCOKZq7s = hfbRCOKZq7s + (977 - 976);
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
                b[hfbRCOKZq7s] = ErevVS2u[DxD3ul];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            DxD3ul = DxD3ul +1;
        };
    }
    {
        int DxD3ul = (306 - 305);
        while (DxD3ul < hfbRCOKZq7s) {
            {
                int j75SpU = 1;
                while (j75SpU <= hfbRCOKZq7s - DxD3ul) {
                    if (b[j75SpU] > b[j75SpU + 1]) {
                        x = b[j75SpU];
                        b[j75SpU] = b[j75SpU + 1];
                        b[j75SpU + 1] = x;
                    }
                    j75SpU++;
                };
            }
            DxD3ul++;
        };
    }
    {
        int DxD3ul = 1;
        while (DxD3ul <= hfbRCOKZq7s) {
            if (DxD3ul -1)
                cout << ",";
            cout << b[DxD3ul];
            DxD3ul++;
        };
    }
    return 0;
}

