int vfPvxMoIT80E = (832 - 832), a [(788 - 687)] [101] = {{(130 - 130)}}, H84LHw95 = (980 - 980), k = (647 - 647);
int (*p) [101] = a;

void  Y4s0lzh5Uw (int k) {
    int uoWE81;
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
    uoWE81 = (878 - 878);
    for (int Ch5CBiS = (583 - 583);
    k > Ch5CBiS; Ch5CBiS = Ch5CBiS +1) {
        uoWE81 = *(*(p + Ch5CBiS));
        for (int j = (193 - 192);
        k > j; j++)
            if (uoWE81 > *(*(p + Ch5CBiS) + j))
                uoWE81 = *(*(p + Ch5CBiS) + j);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (uoWE81)
            for (int j = (549 - 549);
            k > j; j++)
                *(*(p + Ch5CBiS) + j) = *(*(p + Ch5CBiS) + j) - uoWE81;
    };
}

void  zerocol (int k) {
    int uoWE81;
    uoWE81 = (739 - 739);
    for (int Ch5CBiS = (911 - 911);
    k > Ch5CBiS; Ch5CBiS++) {
        uoWE81 = *(*(p)+Ch5CBiS);
        {
            int j = (528 - 527);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (k > j) {
                if (*(*(p + j) + Ch5CBiS) < uoWE81)
                    uoWE81 = *(*(p + j) + Ch5CBiS);
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
                j = j + 1;
            };
        }
        if (uoWE81) {
            int j = (52 - 52);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (j < k) {
                *(*(p + j) + Ch5CBiS) -= uoWE81;
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
                j++;
            };
        };
    };
}

void  jian (int k) {
    for (int Ch5CBiS = (910 - 908);
    k > Ch5CBiS; Ch5CBiS++)
        for (int j = 0;
        j < k; j++)
            *(*(p + Ch5CBiS -(938 - 937)) + j) = *(*(p + Ch5CBiS) + j);
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
        int j = 2;
        while (vfPvxMoIT80E > j) {
            {
                int Ch5CBiS = 0;
                while (k - (791 - 790) > Ch5CBiS) {
                    *(*(p + Ch5CBiS) + j - (965 - 964)) = *(*(p + Ch5CBiS) + j);
                    Ch5CBiS = Ch5CBiS +1;
                };
            }
            j++;
        };
    };
}

int main () {
    cin >> vfPvxMoIT80E;
    while (cin >> *(*(p))) {
        H84LHw95 = 0;
        {
            int Ch5CBiS = 0;
            while (vfPvxMoIT80E > Ch5CBiS) {
                for (int j = 0;
                vfPvxMoIT80E > j; j++) {
                    if (Ch5CBiS +j)
                        cin >> *(*(p + Ch5CBiS) + j);
                }
                Ch5CBiS++;
            };
        }
        for (k = vfPvxMoIT80E; k > (714 - 713); k--) {
            Y4s0lzh5Uw (k);
            zerocol (k);
            jian (k);
            H84LHw95 = H84LHw95 +*(*(p + (750 - 749)) + 1);
        }
        cout << H84LHw95 << endl;
    }
    return 0;
}

