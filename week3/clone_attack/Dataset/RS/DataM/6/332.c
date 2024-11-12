int DOwbycNPqod (int DHbzstrP, int UptdExja) {
    int m = DHbzstrP, n = UptdExja;
    int OGFmSRvAKBOZ, RaP8Oz, sum, wf1PuMiOlU [(566 - 466)] [(1081 - 981)], (*upJ8HUrtZo) [100];
    upJ8HUrtZo = wf1PuMiOlU;
    {
        OGFmSRvAKBOZ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > OGFmSRvAKBOZ) {
            {
                RaP8Oz = 0;
                while (n - 1 > RaP8Oz) {
                    scanf ("%d ", *(upJ8HUrtZo + OGFmSRvAKBOZ) + RaP8Oz);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    RaP8Oz = RaP8Oz +1;
                };
            }
            scanf ("%d", *(upJ8HUrtZo + OGFmSRvAKBOZ) + (n - 1));
            OGFmSRvAKBOZ = OGFmSRvAKBOZ +1;
        };
    }
    sum = (708 - 708);
    {
        RaP8Oz = 0;
        while (n > RaP8Oz) {
            sum = sum + (*(*upJ8HUrtZo + RaP8Oz)) + (*(*(upJ8HUrtZo + m - 1) + RaP8Oz));
            RaP8Oz++;
        };
    }
    for (OGFmSRvAKBOZ = 1; OGFmSRvAKBOZ < m - 1; OGFmSRvAKBOZ++) {
        sum = sum + (*(*(upJ8HUrtZo + OGFmSRvAKBOZ))) + (*(*(upJ8HUrtZo + OGFmSRvAKBOZ) + (n - 1)));
    }
    return sum;
}

void  main () {
    int OGFmSRvAKBOZ, k, m, n, sum [100];
    scanf ("%d\n", &k);
    {
        OGFmSRvAKBOZ = 0;
        while (k > OGFmSRvAKBOZ) {
            scanf ("%d %d", &m, &n);
            sum[OGFmSRvAKBOZ] = DOwbycNPqod (m, n);
            OGFmSRvAKBOZ = OGFmSRvAKBOZ +1;
        };
    }
    {
        OGFmSRvAKBOZ = 0;
        while (k > OGFmSRvAKBOZ) {
            printf ("%d\n", sum[OGFmSRvAKBOZ]);
            OGFmSRvAKBOZ++;
        };
    };
}

