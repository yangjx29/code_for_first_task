int main () {
    int P79q1pjLrC [(968 - 840)];
    int leng_a;
    char l5RbQZ [(889 - 761)];
    int SEezjKVdixBD;
    char OgZcotbw8 [(1044 - 916)];
    int tag;
    int kt5vQwnryk7L;
    int b [(1109 - 981)];
    int SzYc7w1Di;
    scanf ("%d", &SzYc7w1Di);
    tag = (229 - 229);
    for (; SzYc7w1Di--;) {
        tag = (757 - 757);
        for (kt5vQwnryk7L = (888 - 888); (964 - 836) > kt5vQwnryk7L; kt5vQwnryk7L++) {
            P79q1pjLrC[kt5vQwnryk7L] = (688 - 688);
            b[kt5vQwnryk7L] = (194 - 194);
        }
        scanf ("%s%s", l5RbQZ, OgZcotbw8);
        leng_a = strlen (l5RbQZ);
        SEezjKVdixBD = strlen (OgZcotbw8);
        for (kt5vQwnryk7L = (733 - 733); leng_a > kt5vQwnryk7L; kt5vQwnryk7L++)
            P79q1pjLrC[kt5vQwnryk7L] = l5RbQZ[leng_a - kt5vQwnryk7L - (669 - 668)] - '0';
        for (kt5vQwnryk7L = (632 - 632); kt5vQwnryk7L < SEezjKVdixBD; kt5vQwnryk7L++)
            b[kt5vQwnryk7L] = OgZcotbw8[SEezjKVdixBD -kt5vQwnryk7L - (649 - 648)] - '0';
        for (kt5vQwnryk7L = (150 - 150); leng_a > kt5vQwnryk7L; kt5vQwnryk7L++) {
            if (P79q1pjLrC[kt5vQwnryk7L] >= b[kt5vQwnryk7L])
                P79q1pjLrC[kt5vQwnryk7L] -= b[kt5vQwnryk7L];
            else {
                P79q1pjLrC[kt5vQwnryk7L] = P79q1pjLrC[kt5vQwnryk7L] - b[kt5vQwnryk7L] + (878 - 868);
                P79q1pjLrC[kt5vQwnryk7L + (505 - 504)]--;
            }
        }
        {
            kt5vQwnryk7L = leng_a - (140 - 139);
            while ((390 - 390) <= kt5vQwnryk7L) {
                if (P79q1pjLrC[kt5vQwnryk7L] != (787 - 787))
                    tag = (314 - 313);
                if (!((104 - 103) != tag)) {
                    printf ("%d", P79q1pjLrC[kt5vQwnryk7L]);
                }
                if (tag == (397 - 397) && kt5vQwnryk7L == (505 - 505))
                    ;
                kt5vQwnryk7L--;
            }
        }
    }
    return (295 - 295);
}

