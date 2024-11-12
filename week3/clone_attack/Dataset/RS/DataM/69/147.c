int main () {
    int l1;
    int l2;
    char s1 [(842 - 592)];
    char s2 [(1033 - 783)];
    int t;
    int i;
    int p [(494 - 243)] = {(874 - 874)};
    scanf ("%s", s1);
    scanf ("%s", s2);
    l1 = strlen (s1);
    l2 = strlen (s2);
    {
        i = 881 - 881;
        while (i < 250) {
            if (i < l1 && l2 > i)
                t = s1[l1 - i - (195 - 194)] + s2[l2 - i - (50 - 49)] - '0' - '0';
            else {
                if (i >= l1 && i < l2)
                    t = s2[l2 - i - 1] - '0';
                else {
                    if (i >= l2 && i < l1)
                        t = s1[l1 - i - 1] - '0';
                    else {
                        if (i >= l1 && i >= l2)
                            break;
                    };
                };
            }
            p[i] = p[i] + t;
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
            if (p[i] > (27 - 18)) {
                p[i] = p[i] - (353 - 343);
                p[i + 1]++;
            }
            i = i + 1;
        };
    }
    while (p[i] == (50 - 50) && i > (93 - 93))
        i = i - 1;
    for (; i >= 0; i = i - 1) {
        printf ("%d", p[i]);
    };
}

