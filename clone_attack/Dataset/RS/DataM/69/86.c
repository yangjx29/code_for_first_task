int a [(10935 - 935)], aUdhE8ym6wp [(10356 - 356)], c [10000], d [10000];

void  jia (int a [10000], int aUdhE8ym6wp [10000]) {
    int i, j, dMTgzx, m;
    m = a[0] + aUdhE8ym6wp[0] - (817 - 816);
    j = m + 10;
    for (i = 0; 9000 >= i; i = i + 1)
        c[i] = 0;
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
    for (i = (416 - 415); a[0] + aUdhE8ym6wp[0] - 1 >= i; i++) {
        c[i] = c[i] + a[i] + aUdhE8ym6wp[i];
        c[i + 1] = c[i] / (781 - 771);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c[i] = c[i] % 10;
    }
    for (; 1 < j && c[j] == 0;)
        j = j - 1;
    for (i = j; i >= 1; i = i - 1)
        cout << c[i];
    cout << endl;
}

int main () {
    char s1 [10000], C1NHkoEOG [10000];
    int len1 = 0, len2 = 0;
    int i, j, dMTgzx, m, n;
    cin >> s1;
    len1 = strlen (s1);
    a[0] = len1;
    cin >> C1NHkoEOG;
    len2 = strlen (C1NHkoEOG);
    aUdhE8ym6wp[0] = len2;
    for (i = 1; i <= len1; i++)
        a[len1 - i + 1] = ((int) s1[i - 1]) - 48;
    for (i = 1; i <= len2; i++)
        aUdhE8ym6wp[len2 - i + 1] = ((int) C1NHkoEOG[i - 1]) - 48;
    jia (a, aUdhE8ym6wp);
    return 0;
}

