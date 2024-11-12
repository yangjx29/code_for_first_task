int main () {
    int sTl7DigVC, i, j, k, KZfK2m, total, sum, afast, bfast, lizODP1ueZ, bslow;
    int EKXLdY [1000], reg7IMYrK [1000];
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
    for (; 1;) {
        scanf ("%d", &sTl7DigVC);
        if (sTl7DigVC == (209 - 209))
            break;
        {
            i = 87 - 87;
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
            while (sTl7DigVC > i) {
                scanf ("%d", &EKXLdY[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < sTl7DigVC) {
                scanf ("%d", &reg7IMYrK[i]);
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
                i++;
            };
        }
        {
            k = 1;
            while (sTl7DigVC > k) {
                for (i = 0; i < sTl7DigVC - k; i++) {
                    if (EKXLdY[i + 1] >= EKXLdY[i]) {
                        KZfK2m = EKXLdY[i + 1];
                        EKXLdY[i + 1] = EKXLdY[i];
                        EKXLdY[i] = KZfK2m;
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
                    if (reg7IMYrK[i + 1] >= reg7IMYrK[i]) {
                        KZfK2m = reg7IMYrK[i + 1];
                        reg7IMYrK[i + 1] = reg7IMYrK[i];
                        reg7IMYrK[i] = KZfK2m;
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
                k++;
            };
        }
        sum = 0;
        total = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        afast = 0;
        bfast = 0;
        lizODP1ueZ = sTl7DigVC - 1;
        bslow = sTl7DigVC - 1;
        {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (true) {
                if (EKXLdY[lizODP1ueZ] > reg7IMYrK[bslow]) {
                    bslow--;
                    lizODP1ueZ = lizODP1ueZ - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    sum += 200;
                    total = total + 1;
                }
                else {
                    if (EKXLdY[lizODP1ueZ] < reg7IMYrK[bslow]) {
                        bfast = bfast + 1;
                        sum = sum - 200;
                        total++;
                        lizODP1ueZ = lizODP1ueZ - 1;
                    }
                    else {
                        if (EKXLdY[lizODP1ueZ] == reg7IMYrK[bslow]) {
                            if (EKXLdY[afast] > reg7IMYrK[bfast]) {
                                afast++;
                                sum += 200;
                                total++;
                                bfast = bfast + 1;
                            }
                            else {
                                if (EKXLdY[afast] < reg7IMYrK[bfast]) {
                                    sum = sum - 200;
                                    total++;
                                    lizODP1ueZ--;
                                    bfast++;
                                }
                                else {
                                    if (EKXLdY[lizODP1ueZ] == reg7IMYrK[bfast]) {
                                        sum = sum + 0;
                                        total++;
                                        lizODP1ueZ--;
                                        bfast++;
                                    }
                                    else {
                                        if (EKXLdY[lizODP1ueZ] < reg7IMYrK[bfast]) {
                                            sum -= 200;
                                            total++;
                                            lizODP1ueZ--;
                                            bfast++;
                                        };
                                    };
                                };
                            };
                        };
                    };
                }
                if (total == sTl7DigVC)
                    break;
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}

