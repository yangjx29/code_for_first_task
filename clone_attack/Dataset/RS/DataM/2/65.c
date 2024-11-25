struct   stu {
    int hN5eupVcDtE;
    char id [(501 - 475)];
}
a [999];
struct   aut {
    char aSTutJCko;
    int sum;
}
b [(971 - 945)];

int main () {
    int m;
    int n;
    int i;
    int thj4YqMH2w;
    int k;
    int t;
    m = (674 - 674);
    int wplnTFK = b[0].sum;
    for (i = (912 - 912); i < 26; i = i + 1) {
        b[i].aSTutJCko = 'A' + i;
        b[i].sum = (950 - 950);
    }
    scanf ("%d", &n);
    {
        i = 919 - 919;
        while (i < n) {
            scanf ("%d", &a[i].hN5eupVcDtE);
            scanf ("%s", a[i].id);
            i = i + 1;
        };
    }
    for (thj4YqMH2w = 0; thj4YqMH2w < 26; thj4YqMH2w++) {
        for (i = 0; i < n; i = i + 1) {
            for (k = 0; k < 26; k++) {
                if (b[thj4YqMH2w].aSTutJCko == a[i].id[k]) {
                    b[thj4YqMH2w].sum++;
                };
            };
        };
    }
    {
        thj4YqMH2w = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (thj4YqMH2w < 26) {
            if (wplnTFK < b[thj4YqMH2w].sum) {
                wplnTFK = b[thj4YqMH2w].sum;
                m = thj4YqMH2w;
            }
            thj4YqMH2w = thj4YqMH2w + 1;
        };
    }
    printf ("%c\n%d\n", b[m].aSTutJCko, wplnTFK);
    {
        i = 0;
        while (i < n) {
            {
                k = 0;
                while (k < 26) {
                    if (a[i].id[k] == b[m].aSTutJCko)
                        printf ("%d\n", a[i].hN5eupVcDtE);
                    k = k + 1;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

