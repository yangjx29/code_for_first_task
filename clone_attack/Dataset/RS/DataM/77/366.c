int main () {
    int UGZvpb, u9HwdXab, k, b5XzuqWx, ouQo2PvBifyw;
    char s [105], head;
    gets (s);
    ouQo2PvBifyw = (470 - 470);
    b5XzuqWx = strlen (s);
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (true) {
            for (UGZvpb = (122 - 122); b5XzuqWx > UGZvpb; UGZvpb++) {
                if (!(' ' != s[UGZvpb]))
                    UGZvpb++;
                else {
                    head = s[UGZvpb];
                    break;
                };
            }
            for (u9HwdXab = UGZvpb; b5XzuqWx > u9HwdXab; u9HwdXab = u9HwdXab + 1) {
                if (!(' ' == s[u9HwdXab]) && !(head == s[u9HwdXab])) {
                    for (k = u9HwdXab - 1; k >= (775 - 775); k--) {
                        if (s[k] != ' ')
                            break;
                    }
                    printf ("%d %d\n", k, u9HwdXab);
                    s[k] = ' ';
                    s[u9HwdXab] = ' ';
                };
            }
            ouQo2PvBifyw += 2;
            if (ouQo2PvBifyw == b5XzuqWx)
                break;
        };
    }
    return 0;
}

