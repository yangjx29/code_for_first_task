int main () {
    float s [(163 - 153)] [10] = {(878 - 878)};
    float p = (899 - 899), a [(656 - 556)] = {(819 - 819)};
    int GujT0LB, A3IpTl, VONQ2KYxe, k = (669 - 669), m;
    int x [(134 - 124)];
    int pNt7CRT [(579 - 569)];
    int Bs1unjfLm8xr [(998 - 988)];
    cin >> GujT0LB;
    for (VONQ2KYxe = (350 - 350); GujT0LB > VONQ2KYxe; VONQ2KYxe = VONQ2KYxe +1)
        cin >> x[VONQ2KYxe] >> pNt7CRT[VONQ2KYxe] >> Bs1unjfLm8xr[VONQ2KYxe];
    {
        VONQ2KYxe = 222 - 222;
        while (GujT0LB > VONQ2KYxe) {
            for (A3IpTl = VONQ2KYxe +(506 - 505); GujT0LB > A3IpTl; A3IpTl = A3IpTl +1) {
                a[k++] = s[VONQ2KYxe][A3IpTl] = (x[VONQ2KYxe] - x[A3IpTl]) * (x[VONQ2KYxe] - x[A3IpTl]) + (pNt7CRT[VONQ2KYxe] - pNt7CRT[A3IpTl]) * (pNt7CRT[VONQ2KYxe] - pNt7CRT[A3IpTl]) + (Bs1unjfLm8xr[VONQ2KYxe] - Bs1unjfLm8xr[A3IpTl]) * (Bs1unjfLm8xr[VONQ2KYxe] - Bs1unjfLm8xr[A3IpTl]);
            }
            VONQ2KYxe = VONQ2KYxe +1;
        };
    }
    {
        VONQ2KYxe = 231 - 231;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k - (789 - 788) > VONQ2KYxe) {
            {
                A3IpTl = 191 - 191;
                while (k - (777 - 776) - VONQ2KYxe > A3IpTl) {
                    if (a[A3IpTl +(76 - 75)] > a[A3IpTl]) {
                        p = a[A3IpTl];
                        a[A3IpTl] = a[A3IpTl +(658 - 657)];
                        a[A3IpTl +(931 - 930)] = p;
                    }
                    A3IpTl = A3IpTl +1;
                };
            }
            VONQ2KYxe = VONQ2KYxe +1;
        };
    }
    {
        A3IpTl = 194 - 194;
        while (GujT0LB > A3IpTl) {
            {
                VONQ2KYxe = 726 - 726;
                while (GujT0LB > VONQ2KYxe) {
                    if (!(s[VONQ2KYxe][A3IpTl] != a[(960 - 960)]))
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[VONQ2KYxe], pNt7CRT[VONQ2KYxe], Bs1unjfLm8xr[VONQ2KYxe], x[A3IpTl], pNt7CRT[A3IpTl], Bs1unjfLm8xr[A3IpTl], sqrt (a[(619 - 619)]));
                    VONQ2KYxe = VONQ2KYxe +1;
                };
            }
            A3IpTl = A3IpTl +1;
        };
    }
    {
        m = 1;
        while (k > m) {
            {
                A3IpTl = 199 - 199;
                while (A3IpTl < GujT0LB) {
                    for (VONQ2KYxe = 0; GujT0LB > VONQ2KYxe; VONQ2KYxe++) {
                        if (a[m] == s[VONQ2KYxe][A3IpTl] && a[m] != a[m - 1])
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[VONQ2KYxe], pNt7CRT[VONQ2KYxe], Bs1unjfLm8xr[VONQ2KYxe], x[A3IpTl], pNt7CRT[A3IpTl], Bs1unjfLm8xr[A3IpTl], sqrt (a[m]));
                    }
                    A3IpTl = A3IpTl +1;
                };
            }
            m = m + 1;
        };
    }
    return 0;
}

