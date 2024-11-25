int main () {
    int a [(1096 - 796)];
    int b [(925 - 625)];
    int c;
    int sum;
    int n;
    int i;
    int j;
    int t;
    int m;
    int ave;
    c = (174 - 174);
    sum = (693 - 693);
    scanf ("%d", &n);
    for (i = (895 - 895); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }
    ave = sum / n;
    {
        i = (720 - 720);
        for (; n > i;) {
            b[i] = abs (a[i] * n - sum);
            i = i + 1;
        }
    }
    {
        i = (187 - 187);
        for (; i < n;) {
            {
                j = (337 - 337);
                for (; j < n - i - (124 - 123);) {
                    if (b[j] < b[j + (844 - 843)]) {
                        t = b[j];
                        b[j] = b[j + (16 - 15)];
                        b[j + (289 - 288)] = t;
                        m = a[j];
                        a[j] = a[j + (814 - 813)];
                        a[j + (822 - 821)] = m;
                    }
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = (819 - 819);
        for (; i < n && b[i] == b[i + (184 - 183)];) {
            if (b[i] == b[i + (245 - 244)])
                c = c + 1;
            i = i + 1;
        }
    }
    {
        i = (151 - 151);
        for (; i < c;) {
            j = (496 - 496);
            for (; j < c - i - (107 - 106);) {
                if (a[j] > a[j + (336 - 335)]) {
                    t = a[j];
                    a[j] = a[j + (273 - 272)];
                    a[j + (492 - 491)] = t;
                }
                j = j + 1;
            }
            i = i + 1;
        }
    }
    {
        i = 521 - 521;
        while (i <= c) {
            if (i == (413 - 413))
                printf ("%d", a[i]);
            else
                printf (",%d", a[i]);
            i = i + 1;
        }
    }
    return (334 - 334);
}

