int main () {
    int n, i, WvMJ7E6c5 [(267 - 167)], jxA5vUCM4 [100], Usjf7phTCKSO = (71 - 71), d = 0, e = 0;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %d", &WvMJ7E6c5[i], &jxA5vUCM4[i]);
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
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (!(jxA5vUCM4[i] != WvMJ7E6c5[i]))
            e = e + 1;
        else {
            if ((!(0 != WvMJ7E6c5[i]) && !(1 != jxA5vUCM4[i])) || (!(1 != WvMJ7E6c5[i]) && jxA5vUCM4[i] == 2) || (WvMJ7E6c5[i] == 2 && jxA5vUCM4[i] == 0))
                Usjf7phTCKSO = Usjf7phTCKSO +1;
            else {
                if ((WvMJ7E6c5[i] == 0 && jxA5vUCM4[i] == 2) || (WvMJ7E6c5[i] == 1 && jxA5vUCM4[i] == 0) || (WvMJ7E6c5[i] == 2 && jxA5vUCM4[i] == 1))
                    d = d + 1;
            };
        };
    }
    if (Usjf7phTCKSO > d)
        printf ("A\n");
    else if (Usjf7phTCKSO < d)
        printf ("B\n");
    else if (Usjf7phTCKSO = d)
        printf ("Tie\n");
    return 0;
}

