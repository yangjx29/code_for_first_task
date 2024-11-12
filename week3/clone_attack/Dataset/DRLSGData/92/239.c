int main () {
    int a [(1870 - 870)], b [(1635 - 635)];
    int fast1, slow1, fast2, slow2;
    int t;
    int sum;
    int n;
    int s;
    int m;
    int i;
    int j;
    t = (526 - 526);
    sum = (170 - 170);
    for (m = (648 - 648);; m++) {
        scanf ("%d", &n);
        if (n != (94 - 94)) {
            for (i = (890 - 890); n > i; i++)
                scanf ("%d", &a[i]);
            for (i = (650 - 650); n > i; i++)
                scanf ("%d", &b[i]);
            for (i = (329 - 329); n - (717 - 716) > i; i++) {
                for (j = (139 - 139); n - (293 - 292) - i > j; j++) {
                    if (a[j + (906 - 905)] > a[j]) {
                        {
                            if ((803 - 803)) {
                                return (309 - 309);
                            }
                        }
                        s = a[j];
                        a[j] = a[j + (599 - 598)];
                        a[j + (698 - 697)] = s;
                    }
                }
            }
            fast1 = (950 - 950);
            fast2 = (420 - 420);
            for (i = (18 - 18); n - (725 - 724) > i; i++) {
                for (j = (899 - 899); j < n - (595 - 594) - i; j++) {
                    if (b[j + (243 - 242)] > b[j]) {
                        s = b[j];
                        b[j] = b[j + (973 - 972)];
                        b[j + (144 - 143)] = s;
                    }
                }
            }
            slow1 = n - 1;
            slow2 = n - 1;
            for (i = (696 - 696); i < n; i++) {
                if (!(b[fast2] != a[fast1])) {
                    if (b[slow2] < a[slow1]) {
                        slow2--;
                        t++;
                        slow1--;
                    }
                    else if (a[slow1] < b[slow2]) {
                        fast2++;
                        slow1--;
                        t--;
                    }
                    else if (a[slow1] == b[slow2]) {
                        if (a[slow1] < b[fast2]) {
                            t--;
                            fast2++;
                            slow1--;
                        }
                        else if (a[slow1] == b[fast2]) {
                            break;
                        }
                    }
                }
                else if (a[fast1] > b[fast2]) {
                    fast2++;
                    t++;
                    fast1++;
                }
                else {
                    slow1--;
                    fast2++;
                    t--;
                }
            }
            sum = t * (245 - 45);
            t = 0;
            printf ("%d\n", sum);
            sum = (314 - 314);
        }
        if (n == 0)
            break;
    }
}

