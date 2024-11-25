int main () {
    char s1 [(635 - 534)], s2 [101];
    int k1;
    int k2;
    int l1, l2 = (868 - 868);
    cin.getline (s1, 101);
    l1 = strlen (s1);
    k1 = l1 - (534 - 533);
    k2 = l1 - (843 - 842);
    {
        int i = l1 - 1;
        while (i >= (18 - 18)) {
            if (!(' ' != s1[i]) || i == 0) {
                k1 = i;
                if (i == 0)
                    if (k2 == l1 - 1) {
                        k1 = k1 - 1;
                    }
                    else {
                        k2 = k2 - 1;
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
                        k1 -= 1;
                    }
                {
                    int j = k1 + 1;
                    while (j <= k2) {
                        s2[j - k1 - 1 + l2] = s1[j];
                        j++;
                    };
                }
                l2 = l2 + k2 - k1;
                if (k2 == l1 - 1 && k1 != -1) {
                    s2[l2] = ' ';
                    l2++;
                }
                k2 = k1;
            }
            i--;
        };
    }
    s2[l2] = '\0';
    cout << s2;
    return 0;
}

