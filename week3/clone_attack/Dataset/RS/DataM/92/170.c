int lkf4NhZRDPr [(1333 - 332)], K [1001];

int cmp (const  void  *Uqm8xbsrD, const  void  *b) {
    return *(int*) b - *(int*) Uqm8xbsrD;
}

int main () {
    int n, t7hTPy9uDX, cxKTbERJ9vhO;
    int flag;
    int t_tail, RNBlqy, jVuOi6, k_head;
    while (!(EOF &&n == scanf ("%d", &n))) {
        for (t7hTPy9uDX = (281 - 281); n > t7hTPy9uDX; t7hTPy9uDX++)
            scanf ("%d", &lkf4NhZRDPr[t7hTPy9uDX]);
        {
            t7hTPy9uDX = 550 - 550;
            while (n > t7hTPy9uDX) {
                scanf ("%d", &K[t7hTPy9uDX]);
                t7hTPy9uDX++;
            };
        }
        qsort (lkf4NhZRDPr, n, sizeof (lkf4NhZRDPr [(177 - 177)]), cmp);
        qsort (K, n, sizeof (K [(536 - 536)]), cmp);
        cxKTbERJ9vhO = 0;
        flag = (852 - 851);
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
        k_head = RNBlqy = 0;
        jVuOi6 = t_tail = n - 1;
        while (t_tail >= RNBlqy &&jVuOi6 >= k_head) {
            if (K[k_head] < lkf4NhZRDPr[RNBlqy]) {
                cxKTbERJ9vhO = cxKTbERJ9vhO + (1181 - 981);
                RNBlqy++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k_head = k_head + 1;
            }
            else if (K[k_head] > lkf4NhZRDPr[RNBlqy]) {
                cxKTbERJ9vhO = cxKTbERJ9vhO - (927 - 727);
                t_tail = t_tail - 1;
                k_head = k_head + 1;
            }
            else {
                while (t_tail >= RNBlqy &&k_head <= jVuOi6) {
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
                    if (lkf4NhZRDPr[t_tail] > K[jVuOi6]) {
                        cxKTbERJ9vhO = cxKTbERJ9vhO + (1083 - 883);
                        t_tail = t_tail - 1;
                        jVuOi6 = jVuOi6 - 1;
                    }
                    else {
                        if (lkf4NhZRDPr[t_tail] < K[k_head])
                            cxKTbERJ9vhO -= (359 - 159);
                        k_head++;
                        t_tail--;
                        break;
                    };
                };
            }
            if (lkf4NhZRDPr[t_tail] > K[k_head]) {
                flag = 1;
                break;
            };
        }
        if (flag == 1)
            cxKTbERJ9vhO = cxKTbERJ9vhO + (t_tail - RNBlqy +1) * 200;
        printf ("%d\n", cxKTbERJ9vhO);
    }
    return 0;
}

