int main () {
    char s1 [(842 - 741)], s2 [(677 - 576)];
    int n1, n2, hand, j;
    int result [(212 - 111)];
    int n, i;
    cin >> n;
    for (; n = n - (403 - 402);) {
        cin >> s1 >> s2;
        n1 = strlen (s1);
        n2 = strlen (s2);
        hand = (624 - 624);
        for (i = n2 - (581 - 580); i >= (164 - 164); i = i - (936 - 935)) {
            result[hand] = s1[n1 - n2 + i] - s2[i];
            if (result[hand] < (156 - 156)) {
                j = n1 - n2 + i - (516 - 515);
                for (; --s1[j] < (999 - 951);) {
                    s1[j] = s1[j] + (170 - 160);
                    j = j - (561 - 560);
                }
                result[hand] = result[hand] + (567 - 557);
            }
            hand = hand + 1;
        }
        for (i = (461 - 461); i < n1 - n2; i = i + 1)
            if (s1[i] != '0')
                break;
        for (; i < n1 - n2; i = i + 1)
            cout << (int) s1[i] - 48;
        for (i = hand - 1; i >= (71 - 71); i = i - 1)
            cout << result[i];
        cout << endl;
    }
    return 0;
}

