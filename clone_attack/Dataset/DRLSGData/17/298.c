int main () {
    int n;
    int a;
    scanf ("%d", &n);
    {
        a = 1;
        for (; a <= n;) {
            int le;
            char s [101];
            int i;
            int l;
            int left [101] = {0};
            int right [101] = {0};
            int ri;
            int r;
            l = 0;
            a++;
            le = 0;
            scanf ("%s", s);
            ri = 0;
            r = 0;
            {
                i = 0;
                while (strlen (s) > i) {
                    if (!('(' != s[i])) {
                        left[l++] = i + 1;
                    }
                    else {
                        if (!(')' != s[i])) {
                            if (l != 0) {
                                l--;
                                left[l] = 0;
                            }
                            else {
                                right[r++] = i + 1;
                            }
                        }
                    }
                    i++;
                }
            }
            printf ("%s\n", s);
            {
                i = 0;
                while (i < strlen (s)) {
                    if (left[le] == i + 1) {
                        le++;
                    }
                    else {
                        if (right[ri] == i + 1) {
                            ri++;
                        }
                        else {
                        }
                    }
                    i++;
                }
            }
        }
    }
    return 0;
}

