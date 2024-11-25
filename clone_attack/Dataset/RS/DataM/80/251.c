int main () {
    int year1;
    int VMXN6feE2T8i;
    int cDq6StV9GJAv;
    int pHTaQ1hZ;
    int Z8NfHqSk4P;
    int day2;
    int VHXqcsQtibn [13];
    int xn9StQ;
    int kJCtRTwBd;
    int El3eBb;
    xn9StQ = 0;
    El3eBb = 0;
    VHXqcsQtibn[(524 - 524)] = 0;
    VHXqcsQtibn[1] = 1;
    scanf ("%d %d %d\n", &year1, &cDq6StV9GJAv, &Z8NfHqSk4P);
    scanf ("%d %d %d", &VMXN6feE2T8i, &pHTaQ1hZ, &day2);
    VHXqcsQtibn[2] = -2;
    VHXqcsQtibn[3] = 1;
    VHXqcsQtibn[4] = 0;
    VHXqcsQtibn[5] = 1;
    VHXqcsQtibn[(624 - 618)] = 0;
    VHXqcsQtibn[7] = 1;
    VHXqcsQtibn[8] = 1;
    VHXqcsQtibn[9] = 0;
    VHXqcsQtibn[10] = 1;
    VHXqcsQtibn[11] = 0;
    VHXqcsQtibn[12] = 1;
    if (!(VMXN6feE2T8i != year1)) {
        if (cDq6StV9GJAv == pHTaQ1hZ) {
            xn9StQ = day2 - Z8NfHqSk4P;
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
            };
        }
        else {
            for (kJCtRTwBd = cDq6StV9GJAv; pHTaQ1hZ > kJCtRTwBd; kJCtRTwBd = kJCtRTwBd + 1) {
                El3eBb = El3eBb +VHXqcsQtibn[kJCtRTwBd];
                if (!(0 != year1 % 4) && !(0 == year1 % 100) || !(0 != year1 % 400))
                    El3eBb = El3eBb +1;
                xn9StQ = (pHTaQ1hZ - cDq6StV9GJAv - 1) * 30 + day2 + 30 - Z8NfHqSk4P +El3eBb;
            };
        };
    }
    else {
        El3eBb = 30 + VHXqcsQtibn[cDq6StV9GJAv] - Z8NfHqSk4P;
        {
            kJCtRTwBd = cDq6StV9GJAv + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (12 >= kJCtRTwBd) {
                El3eBb = El3eBb +30 + VHXqcsQtibn[kJCtRTwBd];
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
                kJCtRTwBd = kJCtRTwBd + 1;
            };
        }
        El3eBb = El3eBb +day2;
        {
            kJCtRTwBd = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (pHTaQ1hZ > kJCtRTwBd) {
                El3eBb = El3eBb +30 + VHXqcsQtibn[kJCtRTwBd];
                kJCtRTwBd = kJCtRTwBd + 1;
            };
        }
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
        if ((year1 % 4 == 0 && !(0 == year1 % 100) || year1 % 400 == 0) && cDq6StV9GJAv <= 2)
            El3eBb = El3eBb +1;
        if ((VMXN6feE2T8i % 4 == 0 && VMXN6feE2T8i % 100 != 0 || VMXN6feE2T8i % 400 == 0) && pHTaQ1hZ > 2)
            El3eBb = El3eBb +1;
        {
            kJCtRTwBd = year1 + 1;
            while (kJCtRTwBd < VMXN6feE2T8i) {
                if (kJCtRTwBd % 4 == 0 && kJCtRTwBd % 100 != 0 || kJCtRTwBd % 400 == 0) {
                    xn9StQ = xn9StQ + (1209 - 843);
                }
                else
                    xn9StQ = xn9StQ + 365;
                kJCtRTwBd = kJCtRTwBd + 1;
            };
        }
        xn9StQ = xn9StQ + El3eBb;
    }
    printf ("%d\n", xn9StQ);
    return 0;
}

