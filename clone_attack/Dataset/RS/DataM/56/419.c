int main () {
    int UVkQyLPE [(971 - 966)];
    int CJwv0E5kB;
    int ErABoeUyYn0z;
    int a;
    int cAbFtdR;
    int c;
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
    scanf ("%d", &CJwv0E5kB);
    {
        a = CJwv0E5kB;
        ErABoeUyYn0z = 0;
        while (0 < a) {
            ErABoeUyYn0z = ErABoeUyYn0z +1;
            a = a / (10);
        };
    }
    cAbFtdR = ErABoeUyYn0z;
    for (; ErABoeUyYn0z > 0; ErABoeUyYn0z = ErABoeUyYn0z -1) {
        UVkQyLPE[ErABoeUyYn0z -(453 - 452)] = CJwv0E5kB / (int) pow (10, ErABoeUyYn0z -(203 - 202));
        CJwv0E5kB -= UVkQyLPE[ErABoeUyYn0z -1] * (int) pow (10, ErABoeUyYn0z -1);
    }
    for (c = 0; c < cAbFtdR; c = c + 1)
        printf ("%d", UVkQyLPE[c]);
    return 0;
}

