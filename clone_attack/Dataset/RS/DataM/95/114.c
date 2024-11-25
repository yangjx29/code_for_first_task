int main (int jvA6gc1, char *argv []) {
    int bKQAyXJS, b, rW9qmJoIvb;
    char skeB5tWD0iR [(1046 - 965)], m [(1078 - 997)];
    gets (skeB5tWD0iR);
    gets (m);
    int IWdPKE, rwnKt5P2q = 0;
    bKQAyXJS = strlen (skeB5tWD0iR);
    b = strlen (m);
    for (rW9qmJoIvb = (256 - 256); rW9qmJoIvb < bKQAyXJS; rW9qmJoIvb = rW9qmJoIvb + 1) {
        if (skeB5tWD0iR[rW9qmJoIvb] >= 'a' && skeB5tWD0iR[rW9qmJoIvb] <= 'z')
            skeB5tWD0iR[rW9qmJoIvb] = skeB5tWD0iR[rW9qmJoIvb] - (830 - 798);
    }
    for (rW9qmJoIvb = 0; b > rW9qmJoIvb; rW9qmJoIvb++) {
        if (m[rW9qmJoIvb] >= 'a' && m[rW9qmJoIvb] <= 'z')
            m[rW9qmJoIvb] = m[rW9qmJoIvb] - (75 - 43);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    if (bKQAyXJS >= b)
        IWdPKE = bKQAyXJS;
    else
        IWdPKE = b;
    {
        rW9qmJoIvb = 0;
        while (rW9qmJoIvb < IWdPKE) {
            if (skeB5tWD0iR[rW9qmJoIvb] > m[rW9qmJoIvb]) {
                break;
            }
            else {
                if (skeB5tWD0iR[rW9qmJoIvb] < m[rW9qmJoIvb]) {
                    break;
                };
            }
            rW9qmJoIvb = rW9qmJoIvb + 1;
            rwnKt5P2q = rwnKt5P2q + 1;
        };
    }
    if (rwnKt5P2q == IWdPKE)
        printf ("=");
    return 0;
}

