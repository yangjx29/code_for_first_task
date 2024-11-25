int main () {
    char s [33], wP5LNp2CSeO [33];
    int SbLC6Y2OgIQ;
    int rBv4XQ;
    int zGWYUC;
    int l;
    scanf ("%d", &rBv4XQ);
    for (SbLC6Y2OgIQ = 0; SbLC6Y2OgIQ < rBv4XQ; SbLC6Y2OgIQ = SbLC6Y2OgIQ +1) {
        scanf ("%s", s);
        l = strlen (s);
        {
            zGWYUC = 0;
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
            while (s[zGWYUC]) {
                wP5LNp2CSeO[zGWYUC] = s[zGWYUC];
                zGWYUC = zGWYUC + 1;
            };
        }
        {
            zGWYUC = 0;
            while (s[zGWYUC]) {
                if (s[zGWYUC] == 'e' && s[zGWYUC + 1] == 'r' && zGWYUC == l - 1 - 1)
                    wP5LNp2CSeO[zGWYUC] = '\0';
                if (s[zGWYUC] == 'l' && s[zGWYUC + 1] == 'y' && zGWYUC == l - 1 - 1)
                    wP5LNp2CSeO[zGWYUC] = '\0';
                if (s[zGWYUC] == 'i' && s[zGWYUC + 1] == 'n' && s[zGWYUC + (710 - 708)] == 'g' && zGWYUC == l - 1 - 2)
                    wP5LNp2CSeO[zGWYUC] = '\0';
                zGWYUC++;
            };
        }
        printf ("%s\n", wP5LNp2CSeO);
    }
    return 0;
}

