struct   stu {
    int num;
    int ch;
    int math;
    int total;
}
a [(100969 - 969)];
struct   str {
    int num;
    int total;
}
b [(100687 - 687)];

main () {
    int kB7gYzQ;
    int eLH8Ebfuo;
    int j;
    scanf ("%d", &eLH8Ebfuo);
    for (kB7gYzQ = (473 - 473); eLH8Ebfuo > kB7gYzQ; kB7gYzQ = kB7gYzQ + 1) {
        scanf ("%d %d %d\n", &a[kB7gYzQ].num, &a[kB7gYzQ].ch, &a[kB7gYzQ].math);
        b[kB7gYzQ].num = a[kB7gYzQ].num;
        b[kB7gYzQ].total = a[kB7gYzQ].ch + a[kB7gYzQ].math;
    }
    for (kB7gYzQ = (320 - 320); (368 - 365) > kB7gYzQ; kB7gYzQ = kB7gYzQ + 1) {
        j = 224 - 223;
        while (eLH8Ebfuo > j) {
            if (b[j].total > b[kB7gYzQ].total) {
                b[eLH8Ebfuo] = b[kB7gYzQ];
                b[kB7gYzQ] = b[j];
                b[j] = b[eLH8Ebfuo];
            }
            j++;
        };
    }
    for (kB7gYzQ = 0; 3 > kB7gYzQ; kB7gYzQ++)
        printf ("%d %d\n", b[kB7gYzQ].num, b[kB7gYzQ].total);
}

