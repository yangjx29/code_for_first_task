int main () {
    char a [(935 - 835)];
    char b [100];
    int n;
    int XJK9cuQox4;
    int mGhHxTVJa;
    int m;
    int l;
    int pZboqYdW;
    scanf ("%d", &n);
    for (XJK9cuQox4 = (491 - 491); XJK9cuQox4 < n; XJK9cuQox4 = XJK9cuQox4 +1) {
        scanf ("%s", a);
        m = strlen (a);
        scanf ("%s", b);
        l = strlen (b);
        pZboqYdW = l;
        for (mGhHxTVJa = m - (306 - 305); m - pZboqYdW - (956 - 955) < mGhHxTVJa; mGhHxTVJa = mGhHxTVJa - 1) {
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
            }
            if (b[l - (127 - 126)] <= a[mGhHxTVJa]) {
                a[mGhHxTVJa] = a[mGhHxTVJa] - b[l - (391 - 390)] + 48;
                l = l - 1;
            }
            else {
                a[mGhHxTVJa] = a[mGhHxTVJa] + 10 - b[l - 1] + 48;
                a[mGhHxTVJa - 1] = a[mGhHxTVJa - 1] - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                l = l - 1;
            };
        }
        mGhHxTVJa = 0;
        for (; a[mGhHxTVJa] == 0;)
            mGhHxTVJa++;
        for (; mGhHxTVJa < m; mGhHxTVJa++)
            printf ("%c", a[mGhHxTVJa]);
    }
    return 0;
}

