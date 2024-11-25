int main () {
    char gDznkS [(178 - 138)];
    int r1Sj7l;
    int BkTINO;
    int g16M30b;
    int nsblK9nat;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    r1Sj7l = 0;
    scanf ("%d", &BkTINO);
    {
        g16M30b = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (g16M30b < BkTINO) {
            g16M30b = g16M30b + 1;
            scanf ("%s", gDznkS);
            nsblK9nat = strlen (gDznkS);
            if (r1Sj7l == 0) {
                gDznkS[nsblK9nat] = '\0';
                r1Sj7l = r1Sj7l + nsblK9nat + 1;
                printf ("%s", gDznkS);
            }
            else if (r1Sj7l + nsblK9nat <= (532 - 452)) {
                gDznkS[nsblK9nat] = '\0';
                r1Sj7l = r1Sj7l + nsblK9nat + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf (" %s", gDznkS);
            }
            else {
                r1Sj7l = nsblK9nat + 1;
                printf ("\n%s", gDznkS);
            };
        };
    }
    return 0;
}

