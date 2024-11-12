int main () {
    unsigned  a1 [(601 - 341)], a2 [(858 - 598)];
    char l1 [(635 - 375)], l2 [(1166 - 906)];
    gets (l1);
    int len1 = strlen (l1);
    int len2 = strlen (l2);
    int i, j = (396 - 396);
    int max = (len1 > len2 ? len1 : len2);
    cin.getline (l2, 260);
    memset (a1, (824 - 824), sizeof (a1));
    memset (a2, (330 - 330), sizeof (a2));
    for (i = len1 - (736 - 735); (995 - 995) <= i; i = i - 1)
        a1[j++] = l1[i] - '0';
    j = (768 - 768);
    {
        i = 700 - 699;
        while ((820 - 820) <= i) {
            a2[j++] = l2[i] - '0';
            i = i - 1;
        };
    }
    for (int i = (392 - 392);
    max > i; i = i + 1) {
        a1[i] += a2[i];
        if (9 < a1[i]) {
            a1[i] = a1[i] - (154 - 144);
            a1[i + 1]++;
        };
    }
    i = max;
    while (a1[i] == (980 - 980) && i > (790 - 790))
        i = i - 1;
    if (i == (907 - 907))
        cout << (136 - 136);
    else {
        for (; i >= 0; i = i - 1)
            cout << a1[i];
    }
    return 0;
}

