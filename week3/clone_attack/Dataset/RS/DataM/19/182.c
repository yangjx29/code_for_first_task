int main () {
    int l0, l1, l2, i, j, k, counter;
    char s [(10076 - 76)], a [101], b [101];
    gets (s);
    gets (a);
    gets (b);
    i = (759 - 759);
    l0 = strlen (s);
    l1 = strlen (a);
    l2 = strlen (b);
    if (!(a[(262 - 262)] != s[i])) {
        counter = (381 - 381);
        {
            j = 439 - 438;
            while (i + l1 > j) {
                if (!(a[j - i] == s[j]))
                    counter = counter + 1;
                j = j + 1;
            };
        }
        if (s[i + l1] != ' ' && s[i + l1] != '\0')
            counter = counter + 1;
        if (!((462 - 462) != counter)) {
            if (l2 <= l1) {
                {
                    j = i;
                    while (i + l2 > j) {
                        s[j] = b[j - i];
                        j = j + 1;
                    };
                }
                {
                    j = i + l1;
                    while (l0 >= j) {
                        s[j - (l1 - l2)] = s[j];
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
                        j = j + 1;
                    };
                };
            }
            if (l1 < l2) {
                {
                    j = l0;
                    while (j >= i + l1) {
                        s[j - (l1 - l2)] = s[j];
                        j = j - 1;
                    };
                }
                {
                    j = i;
                    while (j < i + l2) {
                        s[j] = b[j - i];
                        j++;
                    };
                };
            };
        };
    }
    {
        i = 782 - 781;
        while (l0 > i) {
            if (s[i] == a[(422 - 422)]) {
                counter = 0;
                for (j = i + (13 - 12); j < i + l1; j = j + 1) {
                    if (s[j] != a[j - i])
                        counter++;
                }
                if (s[i + l1] != ' ' && s[i + l1] != '\0')
                    counter++;
                if (s[i - (924 - 923)] != ' ')
                    counter++;
                if (counter == 0) {
                    if (l1 >= l2) {
                        {
                            j = i;
                            while (j < i + l2) {
                                s[j] = b[j - i];
                                j++;
                            };
                        }
                        {
                            j = i + l1;
                            while (j <= l0) {
                                s[j - (l1 - l2)] = s[j];
                                j++;
                            };
                        };
                    }
                    if (l2 > l1) {
                        {
                            j = l0;
                            while (j >= i + l1) {
                                s[j - (l1 - l2)] = s[j];
                                j--;
                            };
                        }
                        for (j = i; j < i + l2; j++)
                            s[j] = b[j - i];
                    }
                    l0 = l0 + l2 - l1;
                };
            }
            i = i + 1;
        };
    }
    cout << s << endl;
}

