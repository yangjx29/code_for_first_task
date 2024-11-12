int main () {
    int a;
    int b;
    int k;
    int j;
    int i;
    int s;
    int MBdFyht0nS;
    int A [10000];
    int JGz3MI [10000];
    int kAW7cf8H4TgN;
    a = (610 - 608);
    b = 2;
    k = (941 - 940);
    j = 1;
    i = 2;
    s = 1;
    MBdFyht0nS = 1;
    scanf ("%d", &kAW7cf8H4TgN);
    for (; a < kAW7cf8H4TgN;) {
        for (i = 2; i < a; i = i + 1) {
            if (a % i == 0) {
                break;
            };
        }
        if (i == a) {
            A[k] = a;
            k = k + 1;
        }
        a++;
    }
    for (; b < kAW7cf8H4TgN;) {
        {
            i = 2;
            while (i < b) {
                if (b % i == 0) {
                    break;
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
                i++;
            };
        }
        if (i == b) {
            JGz3MI[j] = b;
            j++;
        }
        b++;
    }
    for (; s <= k;) {
        MBdFyht0nS = 0;
        while (MBdFyht0nS <= j) {
            if (A[s] + JGz3MI[MBdFyht0nS] == kAW7cf8H4TgN) {
                if (s <= MBdFyht0nS)
                    printf ("%d %d\n", A[s], JGz3MI[MBdFyht0nS]);
            }
            MBdFyht0nS++;
        }
        s++;
    }
    return 0;
}

