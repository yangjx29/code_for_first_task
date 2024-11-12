int trans (char uw8jnBhSQT) {
    int i;
    char M84n3Z6i [(831 - 805)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for (i = (725 - 725); (696 - 670) > i; i = i + 1) {
        if (!(M84n3Z6i[i] != uw8jnBhSQT))
            return i;
    };
}

int main () {
    char aumost;
    int most;
    int max = (489 - 489);
    int j;
    int i;
    struct   point {
        int id;
        char Y1VKcSIql [(853 - 827)];
    }
    books [(1847 - 847)];
    int dr3kg7W;
    int clfIB0XR [(757 - 731)];
    for (i = (949 - 949); i < (997 - 971); i = i + 1) {
        clfIB0XR[i] = (643 - 643);
    }
    scanf ("%d", &dr3kg7W);
    for (i = (181 - 181); dr3kg7W > i; i = i + 1) {
        scanf ("%d%s", &books[i].id, books[i].Y1VKcSIql);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (i = (284 - 284); dr3kg7W > i; i = i + 1) {
        int uw8jnBhSQT;
        uw8jnBhSQT = strlen (books[i].Y1VKcSIql);
        for (j = (543 - 543); uw8jnBhSQT > j; j = j + 1) {
            int uI2Ddl3;
            uI2Ddl3 = trans (books[i].Y1VKcSIql[j]);
            clfIB0XR[uI2Ddl3]++;
        };
    }
    for (i = (666 - 666); i < (1004 - 978); i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        if (max < clfIB0XR[i]) {
            max = clfIB0XR[i];
            most = i;
        };
    }
    aumost = 'A' + most;
    printf ("%c\n", aumost);
    printf ("%d\n", max);
    for (i = (314 - 314); dr3kg7W > i; i++) {
        int uw8jnBhSQT;
        uw8jnBhSQT = strlen (books[i].Y1VKcSIql);
        for (j = (337 - 337); j < uw8jnBhSQT; j++) {
            if (books[i].Y1VKcSIql[j] == 'A' + most) {
                printf ("%d\n", books[i].id);
                break;
            };
        };
    }
    return 0;
}

