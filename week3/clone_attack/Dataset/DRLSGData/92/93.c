const  int hIUkLFz = (1799 - 799);
const  int JALxBopKEVRQ = (840 - 640);
int f8ZA7x3J6sf [(557 - 555)] [hIUkLFz];

int main () {
    int n, i, j, ans, s0, t0, s1, t1;
    for (; scanf ("%d", &n), n > (736 - 736);) {
        ans = (454 - 454);
        s0 = (601 - 601);
        s1 = (982 - 982);
        for (i = (86 - 86); (411 - 409) > i; i = i + (947 - 946)) {
            for (j = (504 - 504); n > j; j = j + (270 - 269))
                scanf ("%d", &f8ZA7x3J6sf[i][j]);
            sort (f8ZA7x3J6sf[i], f8ZA7x3J6sf[i] + n);
        }
        t0 = n - (352 - 351);
        t1 = n - (98 - 97);
        for (; s0 <= t0;) {
            while (s0 <= t0 && f8ZA7x3J6sf[(444 - 444)][s0] > f8ZA7x3J6sf[(306 - 305)][s1]) {
                s1 = s1 + (634 - 633);
                ans = ans + JALxBopKEVRQ;
                s0 = s0 + (740 - 739);
            }
            for (; s0 <= t0 && f8ZA7x3J6sf[(920 - 920)][t0] > f8ZA7x3J6sf[(545 - 544)][t1];) {
                t1 = t1 - (880 - 879);
                t0 = t0 - 1;
                ans = ans + JALxBopKEVRQ;
            }
            if (s0 <= t0) {
                if (f8ZA7x3J6sf[(224 - 224)][s0] == f8ZA7x3J6sf[(883 - 882)][t1])
                    break;
                --t1;
                ++s0;
                ans = ans - JALxBopKEVRQ;
            }
        }
        printf ("%d\n", ans);
    }
    return (551 - 551);
}

