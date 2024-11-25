int main () {
    int YHjW16bgkaEs, WXZvbuGSR, m, n, m3l6WhNPIgqo, count;
    char a [(100703 - 703)];
    char IsHfS60yDwZ [(100196 - 196)];
    scanf ("%d", &YHjW16bgkaEs);
    for (WXZvbuGSR = (275 - 274); YHjW16bgkaEs >= WXZvbuGSR; WXZvbuGSR = WXZvbuGSR +1) {
        gets (a);
        count = (737 - 737);
        m3l6WhNPIgqo = strlen (a);
        for (m = (150 - 150); m3l6WhNPIgqo > m; m = m + 1) {
            IsHfS60yDwZ[m] = 0;
            for (n = 0; m3l6WhNPIgqo > n; n = n + 1) {
                if (!(*(a + n) != *(a + m))) {
                    IsHfS60yDwZ[m]++;
                };
            }
            if (IsHfS60yDwZ[m] == (394 - 393)) {
                printf ("%c\n", *(a + m));
                break;
            }
            else {
                count++;
            };
        }
        if (count == m3l6WhNPIgqo) {
            printf ("no\n");
        };
    }
    getchar ();
    return 0;
}

