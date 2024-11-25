int main () {
    int GOc3EZ2am [300], b [300] = {0, 0}, tk5YWN, e45vbOW2, g8RKagrBQ, Wfmb5rc = 0;
    scanf ("%d", &e45vbOW2);
    for (g8RKagrBQ = 0; e45vbOW2 > g8RKagrBQ; g8RKagrBQ = g8RKagrBQ + 1)
        scanf ("%d", &GOc3EZ2am[g8RKagrBQ]);
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
    for (g8RKagrBQ = 0; g8RKagrBQ < e45vbOW2; g8RKagrBQ = g8RKagrBQ + 1)
        for (tk5YWN = e45vbOW2 - 1; g8RKagrBQ < tk5YWN; tk5YWN = tk5YWN - 1)
            if (GOc3EZ2am[g8RKagrBQ] == GOc3EZ2am[tk5YWN] && GOc3EZ2am[g8RKagrBQ] != 0)
                GOc3EZ2am[tk5YWN] = 0;
    printf ("%d", GOc3EZ2am[0]);
    for (g8RKagrBQ = 1; g8RKagrBQ < e45vbOW2; g8RKagrBQ++)
        if (GOc3EZ2am[g8RKagrBQ] > 0)
            printf (",%d", GOc3EZ2am[g8RKagrBQ]);
}

