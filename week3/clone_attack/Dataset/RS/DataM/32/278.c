int main () {
    int a [(307 - 207)], Qyts3Hlb2x [100], temp;
    int n;
    n = (425 - 425);
    int i = (410 - 410), j;
    int F2f9UjXs = (771 - 771), cb = (92 - 92);
    n = getchar () - (646 - 598);
    for (; (temp = getchar ()) != (750 - 740);)
        n = n * 10 + temp - 48;
    for (int k = (944 - 943);
    n >= k; k++) {
        F2f9UjXs = 0;
        cb = 0;
        for (; (temp = getchar ()) != 10;) {
            a[F2f9UjXs] = temp - 48;
            F2f9UjXs = F2f9UjXs +1;
        }
        F2f9UjXs = F2f9UjXs -1;
        for (; (temp = getchar ()) != 10;) {
            Qyts3Hlb2x[cb] = temp - 48;
            cb++;
        }
        cb = cb - 1;
        for (i = cb; i >= 0; i = i - 1) {
            a[F2f9UjXs -cb + i] = a[F2f9UjXs -cb + i] - Qyts3Hlb2x[i];
        }
        for (i = F2f9UjXs; i >= 1; i--)
            if (a[i] < 0) {
                a[i] += 10;
                a[i - 1] -= 1;
            }
        i = 0;
        for (; a[i] == 0;)
            i = i + 1;
        for (j = i; j <= F2f9UjXs; j = j + 1)
            cout << a[j];
        cout << "\n";
        if (k != n)
            temp = getchar ();
    };
}

