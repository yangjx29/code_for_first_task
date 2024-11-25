int xzmi6qIac8 [100] [100];

int IaPNmB (int oysri2KGD, int nMDd7HGRr2, int n) {
    int wDRa4B;
    if (oysri2KGD == (541 - 540)) {
        int yjHXWq;
        wDRa4B = xzmi6qIac8[nMDd7HGRr2][(556 - 556)];
        for (yjHXWq = (466 - 466); yjHXWq < n; yjHXWq = yjHXWq + (114 - 113)) {
            if (xzmi6qIac8[nMDd7HGRr2][yjHXWq] < wDRa4B)
                wDRa4B = xzmi6qIac8[nMDd7HGRr2][yjHXWq];
        }
    }
    if (oysri2KGD == (218 - 218)) {
        int yjHXWq;
        wDRa4B = xzmi6qIac8[(852 - 852)][nMDd7HGRr2];
        {
            yjHXWq = 0;
            for (; yjHXWq < n;) {
                if (xzmi6qIac8[yjHXWq][nMDd7HGRr2] < wDRa4B)
                    wDRa4B = xzmi6qIac8[yjHXWq][nMDd7HGRr2];
                yjHXWq = yjHXWq + (20 - 19);
            }
        }
    }
    return wDRa4B;
}

int tzdVXOpPDBmt (int n, int zF5BpuKcT) {
    int yjHXWq, G5OhlrBVod, ej1Kt3la, wDRa4B;
    if (n == (244 - 243))
        return zF5BpuKcT;
    {
        yjHXWq = 0;
        for (; yjHXWq < n;) {
            wDRa4B = IaPNmB ((208 - 207), yjHXWq, n);
            {
                G5OhlrBVod = 0;
                for (; G5OhlrBVod < n;) {
                    xzmi6qIac8[yjHXWq][G5OhlrBVod] = xzmi6qIac8[yjHXWq][G5OhlrBVod] - wDRa4B;
                    G5OhlrBVod = G5OhlrBVod +(365 - 364);
                }
            }
            yjHXWq = yjHXWq + (886 - 885);
        }
    }
    for (yjHXWq = 0; yjHXWq < n; yjHXWq = yjHXWq + 1) {
        wDRa4B = IaPNmB (0, yjHXWq, n);
        {
            G5OhlrBVod = 0;
            while (G5OhlrBVod < n) {
                xzmi6qIac8[G5OhlrBVod][yjHXWq] = xzmi6qIac8[G5OhlrBVod][yjHXWq] - wDRa4B;
                G5OhlrBVod = G5OhlrBVod +1;
            }
        }
    }
    zF5BpuKcT = zF5BpuKcT + xzmi6qIac8[1][1];
    {
        yjHXWq = 0;
        while (yjHXWq < n) {
            {
                G5OhlrBVod = 1;
                for (; G5OhlrBVod < n - 1;) {
                    xzmi6qIac8[G5OhlrBVod][yjHXWq] = xzmi6qIac8[G5OhlrBVod +1][yjHXWq];
                    G5OhlrBVod = G5OhlrBVod +1;
                }
            }
            yjHXWq = yjHXWq + 1;
        }
    }
    {
        yjHXWq = 0;
        for (; yjHXWq < n;) {
            {
                G5OhlrBVod = 1;
                while (G5OhlrBVod < n - 1) {
                    xzmi6qIac8[yjHXWq][G5OhlrBVod] = xzmi6qIac8[yjHXWq][G5OhlrBVod +1];
                    G5OhlrBVod = G5OhlrBVod +1;
                }
            }
            yjHXWq = yjHXWq + 1;
        }
    }
    return tzdVXOpPDBmt (n - 1, zF5BpuKcT);
}

int main (int cMVwjp74b, const  char *HWMn5oLA2kq []) {
    int yjHXWq, G5OhlrBVod, YYosSZ, a0fOAEn7z;
    int n;
    cin >> n;
    for (int ej1Kt3la = 1;
    ej1Kt3la <= n; ej1Kt3la = ej1Kt3la + 1) {
        {
            yjHXWq = 0;
            while (yjHXWq < n) {
                for (G5OhlrBVod = 0; G5OhlrBVod < n; G5OhlrBVod = G5OhlrBVod +1)
                    cin >> xzmi6qIac8[yjHXWq][G5OhlrBVod];
                yjHXWq++;
            }
        }
        cout << tzdVXOpPDBmt (n, 0) << endl;
    }
    return 0;
}

