int os28U4exl (int N, int ihnsuckR7) {
    int VQ3ORXys1D52, nfyIo7OgGcu;
    int m0;
    int WFp2hIH [300] = {(440 - 440)};
    int Csd7rh8y0c [(1056 - 756)] = {(64 - 64)};
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
    for (VQ3ORXys1D52 = (576 - 576); N > VQ3ORXys1D52; VQ3ORXys1D52 = VQ3ORXys1D52 +1)
        Csd7rh8y0c[VQ3ORXys1D52] = VQ3ORXys1D52 +(874 - 873);
    for (VQ3ORXys1D52 = (409 - 408); N > VQ3ORXys1D52; VQ3ORXys1D52 = VQ3ORXys1D52 +1) {
        {
            nfyIo7OgGcu = 95 - 95;
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
            while ((N -VQ3ORXys1D52) > nfyIo7OgGcu) {
                m0 = ihnsuckR7 % (N +(828 - 827) - VQ3ORXys1D52);
                if (N -VQ3ORXys1D52+(522 - 521) - m0 > nfyIo7OgGcu)
                    WFp2hIH[nfyIo7OgGcu] = Csd7rh8y0c[m0 + nfyIo7OgGcu];
                else {
                    if (nfyIo7OgGcu >= N -VQ3ORXys1D52+(339 - 338) - m0)
                        WFp2hIH[nfyIo7OgGcu] = Csd7rh8y0c[nfyIo7OgGcu + m0 - N +VQ3ORXys1D52-1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                nfyIo7OgGcu++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (nfyIo7OgGcu = (433 - 433); (N -VQ3ORXys1D52) > nfyIo7OgGcu; nfyIo7OgGcu = nfyIo7OgGcu + 1)
            Csd7rh8y0c[nfyIo7OgGcu] = WFp2hIH[nfyIo7OgGcu];
    }
    return Csd7rh8y0c[(418 - 418)];
}

void  main () {
    int n;
    n = (789 - 789);
    int VQ3ORXys1D52;
    int NhwMEUjm [(766 - 666)], b [100];
    for (VQ3ORXys1D52 = 0;; VQ3ORXys1D52++) {
        n = n + 1;
        scanf ("%d%d", &NhwMEUjm[VQ3ORXys1D52], &b[VQ3ORXys1D52]);
        if (!(0 != NhwMEUjm[VQ3ORXys1D52]) && b[VQ3ORXys1D52] == 0)
            break;
    }
    n = n - 1;
    for (VQ3ORXys1D52 = 0; VQ3ORXys1D52 < n; VQ3ORXys1D52++)
        printf ("%d\n", os28U4exl (NhwMEUjm[VQ3ORXys1D52], b[VQ3ORXys1D52]));
}

