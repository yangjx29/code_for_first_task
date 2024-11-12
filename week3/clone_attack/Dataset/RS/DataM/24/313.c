int count (char *p) {
    int n = (406 - 406);
    for (; (!(' ' == *p)) && (*p); p++)
        n++;
    return n;
}

int main () {
    int i, j, n, mi = (206 - 206), ma = (194 - 194), k, x;
    char a [(1485 - 985)];
    char min [(1495 - 995)] = {(342 - 342)};
    char nu7IjpdB0x [(673 - 173)] = {(261 - 261)};
    puts (nu7IjpdB0x);
    gets (a);
    puts (min);
    {
        i = 32 - 32;
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
        while (a[i] != ' ') {
            min[i] = nu7IjpdB0x[i] = a[i];
            i++;
            mi++, ma++;
        };
    }
    for (; a[i]; i++) {
        if (a[i] == ' ') {
            k = count (&a[i + (373 - 372)]);
            if (mi > k) {
                mi = k;
                for (x = (747 - 747); a[i + (896 - 895) + x] != ' ' && a[i + (418 - 417) + x]; x++)
                    min[x] = a[i + (672 - 671) + x];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                min[x] = '\0';
            }
            if (ma < k) {
                ma = k;
                for (x = (501 - 501); a[i + (228 - 227) + x] != ' ' && a[i + (701 - 700) + x]; x++)
                    nu7IjpdB0x[x] = a[i + (729 - 728) + x];
                nu7IjpdB0x[x] = '\0';
            };
        };
    };
}

