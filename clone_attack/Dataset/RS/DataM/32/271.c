int main () {
    int n;
    int i;
    int j;
    int k;
    int m;
    int l;
    char a [(618 - 518)];
    char b [(538 - 438)];
    char kHavbwR [100];
    scanf ("%d", &n);
    {
        i = 440 - 440;
        while (n > i) {
            i++;
            scanf ("%s%s", a, b);
            k = strlen (a);
            m = strlen (b);
            for (j = k - (244 - 243), l = m - (314 - 313); k - m <= j, (812 - 812) <= l; j = j - 1, l = l - 1) {
                if (b[l] <= a[j])
                    kHavbwR[j] = a[j] - b[l] + (145 - 97);
                if (a[j] < b[l]) {
                    kHavbwR[j] = 10 + a[j] - b[l] + (599 - 551);
                    a[j - 1]--;
                };
            }
            {
                j = 265 - 265;
                while (j < k - m) {
                    kHavbwR[j] = a[j];
                    j++;
                };
            }
            {
                j = 0;
                while (j < k) {
                    printf ("%c", kHavbwR[j]);
                    j++;
                };
            };
        };
    }
    return 0;
}

