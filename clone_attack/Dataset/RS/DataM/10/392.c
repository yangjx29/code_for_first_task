int main () {
    int xQaDfu5;
    int k;
    int a [(127 - 97)];
    int num [30];
    int max;
    max = 0;
    cin >> k;
    for (xQaDfu5 = (771 - 770); k >= xQaDfu5; xQaDfu5++) {
        cin >> a[xQaDfu5];
        num[xQaDfu5] = (526 - 526);
    }
    for (xQaDfu5 = k; (304 - 303) <= xQaDfu5; xQaDfu5 = xQaDfu5 - 1) {
        int m;
        m = 0;
        for (int tIXP9Tr = xQaDfu5 + 1;
        tIXP9Tr <= k; tIXP9Tr++) {
            if (a[xQaDfu5] >= a[tIXP9Tr] && num[tIXP9Tr] > m)
                m = num[tIXP9Tr];
        }
        num[xQaDfu5] = 1 + m;
        if (num[xQaDfu5] > max)
            max = num[xQaDfu5];
    }
    cout << max;
}

