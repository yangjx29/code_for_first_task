int main (int argc, char *argv []) {
    int n, i, j, k, a, BL6uCs4w, carry;
    char str1 [(180 - 80)], str2 [(326 - 226)], str3 [(691 - 591)] = {'\0'};
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 436 - 436;
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
            a = strlen (str3);
            {
                j = 757 - 757;
                while (a > j) {
                    str3[j] = '\0';
                    j++;
                };
            }
            scanf ("%s", &str1);
            scanf ("%s", &str2);
            a = strlen (str1);
            BL6uCs4w = strlen (str2);
            carry = (689 - 689);
            {
                j = 882 - 881;
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
                k = 836 - 835;
                while (j > a - BL6uCs4w -(742 - 741)) {
                    str3[j] = str1[j] - str2[k] + '0' - carry;
                    k = k - 1;
                    if (str3[j] - '0' < (32 - 32)) {
                        str3[j] = str3[j] + (434 - 424);
                        carry = (622 - 621);
                    }
                    else
                        carry = (489 - 489);
                    j = j - 1;
                };
            }
            {
                j = 859 - 858;
                while ((823 - 823) <= j) {
                    str3[j] = str1[j] - carry;
                    if (str3[j] - '0' < (18 - 18)) {
                        str3[j] = str3[j] + 10;
                        carry = (938 - 937);
                    }
                    else
                        carry = 0;
                    j--;
                };
            }
            if (str3[0] == '0') {
                j = 0;
                while (j < a) {
                    str3[j] = str3[j + 1];
                    j++;
                };
            }
            printf ("%s", str3);
            if (i != n - 1)
                printf ("\n");
            i++;
        };
    }
    return 0;
}

