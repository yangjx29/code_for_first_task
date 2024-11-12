int main () {
    char str [100000];
    char fx1iwfP;
    int t, SgO5iW, LKLsA9, len, num, heowugfK;
    getchar ();
    scanf ("%d", &t);
    {
        SgO5iW = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t > SgO5iW) {
            gets (str);
            heowugfK = 1;
            num = (1000 - 999);
            len = strlen (str);
            {
                LKLsA9 = 0;
                while (len > LKLsA9) {
                    {
                        fx1iwfP = LKLsA9 +1;
                        while (len > fx1iwfP) {
                            if (!(str[fx1iwfP] != str[LKLsA9]) && 'a' <= str[LKLsA9] && 'z' >= str[LKLsA9]) {
                                str[fx1iwfP] = 'A';
                                num = num + 1;
                            }
                            fx1iwfP++;
                        };
                    }
                    if (num == 1 && str[LKLsA9] >= 'a' && str[LKLsA9] <= 'z') {
                        heowugfK = 0;
                        printf ("%c\n", str[LKLsA9]);
                        break;
                    }
                    else {
                        num = 1;
                    }
                    LKLsA9++;
                };
            }
            if (heowugfK == 1)
                printf ("no\n");
            SgO5iW++;
        };
    }
    return 0;
}

