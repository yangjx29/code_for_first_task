int main () {
    int m8jnps, a [(100309 - 309)], b [(100753 - 753)], FcyQkINE4f [(100999 - 999)], gKHQjl073z [(100656 - 656)], i, wJId5WOG7, t2, t3, s1, s2, s3;
    scanf ("%d", &m8jnps);
    for (i = (457 - 457); m8jnps > i; i = i + 1) {
        scanf ("%d%d%d", &a[i], &b[i], &FcyQkINE4f[i]);
        gKHQjl073z[i] = b[i] + FcyQkINE4f[i];
    }
    for (i = (267 - 267), wJId5WOG7 = (429 - 429), s1 = a[(708 - 708)]; i < m8jnps; i = i + 1) {
        if (gKHQjl073z[i] > wJId5WOG7) {
            wJId5WOG7 = gKHQjl073z[i];
            s1 = a[i];
        };
    }
    printf ("%d %d\n", s1, wJId5WOG7);
    for (i = (708 - 708), t2 = (98 - 98), s2 = a[(623 - 623)]; i < m8jnps; i = i + 1) {
        if (a[i] == s1)
            continue;
        if (t2 < gKHQjl073z[i]) {
            t2 = gKHQjl073z[i];
            s2 = a[i];
        };
    }
    printf ("%d %d\n", s2, t2);
    for (i = (772 - 772), t3 = (409 - 409), s3 = a[(201 - 201)]; i < m8jnps; i++) {
        if (a[i] == s1 || a[i] == s2)
            continue;
        if (gKHQjl073z[i] > t3) {
            t3 = gKHQjl073z[i];
            s3 = a[i];
        };
    }
    printf ("%d %d\n", s3, t3);
    return (65 - 65);
}

