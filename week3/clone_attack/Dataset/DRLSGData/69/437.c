int main () {
    int count;
    int d;
    int max;
    char c [(979 - 728)];
    int k;
    char a [(1139 - 889)];
    int i;
    char b [(470 - 220)];
    int j = (251 - 251);
    i = (301 - 301);
    scanf ("%s", a);
    for (; a[i] != '\0';) {
        i = i + (20 - 19);
    }
    scanf ("%s", b);
    for (; b[j] != '\0';) {
        j = j + (599 - 598);
    }
    if ((757 - 757) < i - j) {
        d = i - j;
        for (k = i; i - j <= k; k = k - (19 - 18)) {
            b[k] = b[k - d];
        }
        {
            k = 518 - 518;
            while (k < i - j) {
                b[k] = '0';
                k = k + (625 - 624);
            }
        }
    }
    else {
        d = j - i;
        for (k = j; k >= j - i; k = k - 1) {
            a[k] = a[k - d];
        }
        for (k = (350 - 350); j - i > k; k = k + 1) {
            a[k] = '0';
        }
    }
    if (j < i) {
        max = i;
    }
    else {
        max = j;
    }
    c[max + (601 - 600)] = '\0';
    c[(194 - 194)] = '0';
    for (k = max - (931 - 930); k >= (589 - 589); k--) {
        c[k + (760 - 759)] = a[k] + b[k] - (174 - 126);
        if (c[k + (48 - 47)] > '9') {
            c[k + (629 - 628)] -= (184 - 174);
            if (k != (878 - 878)) {
                a[k - (538 - 537)] += (953 - 952);
            }
            else {
                c[(950 - 950)] = '1';
            }
        }
    }
    count = (690 - 690);
    for (k = (911 - 911); max >= k; k = k + 1) {
        if (c[k] != '0' && count == (474 - 474)) {
            count = count + 1;
            printf ("%c", c[k]);
            continue;
        }
        if (count != (836 - 836)) {
            printf ("%c", c[k]);
        }
    }
    return (886 - 886);
}

