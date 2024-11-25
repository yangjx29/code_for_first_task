int main () {
    char a [300];
    int ZZtSxzcbKMG4, f8hDETa3 [26] = {(346 - 346)}, t = 0;
    scanf ("%s", a);
    for (ZZtSxzcbKMG4 = 0; ZZtSxzcbKMG4 < strlen (a); ZZtSxzcbKMG4 = ZZtSxzcbKMG4 +1) {
        if (a[ZZtSxzcbKMG4] >= 97 && 122 >= a[ZZtSxzcbKMG4]) {
            f8hDETa3[(a[ZZtSxzcbKMG4] - 97)]++;
        };
    }
    for (ZZtSxzcbKMG4 = 0; 26 > ZZtSxzcbKMG4; ZZtSxzcbKMG4 = ZZtSxzcbKMG4 +1) {
        if (f8hDETa3[ZZtSxzcbKMG4] > 0)
            printf ("%c=%d\n", (97 + ZZtSxzcbKMG4), f8hDETa3[ZZtSxzcbKMG4]);
    }
    for (ZZtSxzcbKMG4 = 0; ZZtSxzcbKMG4 < 26; ZZtSxzcbKMG4 = ZZtSxzcbKMG4 +1) {
        t = t + f8hDETa3[ZZtSxzcbKMG4];
    }
    if (t == 0)
        printf ("No\n");
    scanf ("%d", &ZZtSxzcbKMG4);
    return 0;
}

