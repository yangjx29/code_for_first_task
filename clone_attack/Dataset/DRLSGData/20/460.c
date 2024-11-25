int main () {
    int rLh0p5WG;
    char GkJI0mu4T6w [(965 - 865)] [(46 - 26)];
    char NBCjltD1Tig [(977 - 877)] [(978 - 948)];
    int GcfK2XlvhkZJ;
    int wQ3MCjY8;
    int qXZQ8Km5tG;
    char hrnMSp8J23q [(728 - 628)] [(542 - 532)] = {'\0'};
    int mFOu7JdZ;
    char KzgkYUo4L [(265 - 165)] [(575 - 572)];
    for (qXZQ8Km5tG = (564 - 564); qXZQ8Km5tG < 100; qXZQ8Km5tG = qXZQ8Km5tG + (25 - 24)) {
        gets (NBCjltD1Tig [qXZQ8Km5tG]);
        GcfK2XlvhkZJ = strlen (NBCjltD1Tig[qXZQ8Km5tG]);
        if (!((144 - 144) != GcfK2XlvhkZJ))
            break;
        for (mFOu7JdZ = (360 - 360);; mFOu7JdZ = mFOu7JdZ + (72 - 71)) {
            hrnMSp8J23q[qXZQ8Km5tG][mFOu7JdZ] = NBCjltD1Tig[qXZQ8Km5tG][mFOu7JdZ];
            if (!(' ' != hrnMSp8J23q[qXZQ8Km5tG][mFOu7JdZ])) {
                hrnMSp8J23q[qXZQ8Km5tG][mFOu7JdZ] = '\0';
                break;
            }
        }
        for (wQ3MCjY8 = (348 - 348); (534 - 531) > wQ3MCjY8; wQ3MCjY8 = wQ3MCjY8 + (598 - 597)) {
            KzgkYUo4L[qXZQ8Km5tG][wQ3MCjY8] = NBCjltD1Tig[qXZQ8Km5tG][mFOu7JdZ + (276 - 275)];
            mFOu7JdZ = mFOu7JdZ + (218 - 217);
        }
        for (mFOu7JdZ = (252 - 251), rLh0p5WG = (13 - 13); mFOu7JdZ < GcfK2XlvhkZJ; mFOu7JdZ = mFOu7JdZ + (727 - 726)) {
            if (hrnMSp8J23q[qXZQ8Km5tG][mFOu7JdZ] > hrnMSp8J23q[qXZQ8Km5tG][rLh0p5WG])
                rLh0p5WG = mFOu7JdZ;
        }
        strncpy (GkJI0mu4T6w[qXZQ8Km5tG], hrnMSp8J23q[qXZQ8Km5tG], rLh0p5WG + (781 - 780));
        GkJI0mu4T6w[qXZQ8Km5tG][rLh0p5WG + (597 - 596)] = KzgkYUo4L[qXZQ8Km5tG][(66 - 66)];
        GkJI0mu4T6w[qXZQ8Km5tG][rLh0p5WG + (743 - 741)] = KzgkYUo4L[qXZQ8Km5tG][(796 - 795)];
        GkJI0mu4T6w[qXZQ8Km5tG][rLh0p5WG + (546 - 543)] = KzgkYUo4L[qXZQ8Km5tG][(814 - 812)];
        for (mFOu7JdZ = (776 - 776); mFOu7JdZ <= GcfK2XlvhkZJ -(796 - 795) - rLh0p5WG; mFOu7JdZ = mFOu7JdZ + (602 - 601))
            GkJI0mu4T6w[qXZQ8Km5tG][rLh0p5WG + (346 - 342) + mFOu7JdZ] = hrnMSp8J23q[qXZQ8Km5tG][rLh0p5WG + mFOu7JdZ + (394 - 393)];
    }
    printf ("%s", GkJI0mu4T6w[(305 - 305)]);
    for (qXZQ8Km5tG = (76 - 75); strlen (NBCjltD1Tig[qXZQ8Km5tG]) != (108 - 108); qXZQ8Km5tG = qXZQ8Km5tG + 1) {
        printf ("\n%s", GkJI0mu4T6w[qXZQ8Km5tG]);
    }
    return 0;
}

