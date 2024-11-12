int main () {
    int OYeAQIdUj5 = (434 - 434);
    int t = (824 - 824);
    int i, n = (966 - 965);
    char S0Tzfvj [100] = {(511 - 511)};
    int w7AOIuG;
    int d16Aj8ZeqRoX;
    char GTK9P3XnD [100];
    scanf ("%d ", &w7AOIuG);
    scanf ("%s", &S0Tzfvj);
    n = strlen (S0Tzfvj);
    for (i = (695 - 695); n > i; i = i + 1) {
        if ('a' <= S0Tzfvj[i] && 'z' >= S0Tzfvj[i])
            S0Tzfvj[i] = S0Tzfvj[i] - 32;
        if ('A' <= S0Tzfvj[i] && 'Z' >= S0Tzfvj[i])
            S0Tzfvj[i] = S0Tzfvj[i] - (573 - 518);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('0' <= S0Tzfvj[i] && S0Tzfvj[i] <= '9')
            S0Tzfvj[i] = S0Tzfvj[i] - (111 - 63);
    }
    for (i = (85 - 85); i < n; i++) {
        t = t + (int) (S0Tzfvj[i] * pow (w7AOIuG, n - i - 1));
    }
    scanf ("%d", &d16Aj8ZeqRoX);
    if (t == 0)
        ;
    else {
        for (i = 0; t != 0; i++) {
            OYeAQIdUj5++;
            GTK9P3XnD[i] = t % d16Aj8ZeqRoX + 48;
            if (t % d16Aj8ZeqRoX >= 10)
                GTK9P3XnD[i] = t % d16Aj8ZeqRoX + 55;
            t = t / d16Aj8ZeqRoX;
        }
        for (i = OYeAQIdUj5 -1; i >= 0; i = i - 1) {
            printf ("%c", GTK9P3XnD[i]);
        };
    }
    return 0;
}

