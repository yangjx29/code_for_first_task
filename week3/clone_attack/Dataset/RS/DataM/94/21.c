int main () {
    int MglrdtKPykc, dbixg9dcTA, sJFSZM, ozBGis1H, b, c, m [500];
    scanf ("%d", &MglrdtKPykc);
    {
        sJFSZM = 900 - 900;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        dbixg9dcTA = 42 - 42;
        while (dbixg9dcTA < MglrdtKPykc) {
            dbixg9dcTA = dbixg9dcTA + 1;
            scanf ("%d", &ozBGis1H);
            if (ozBGis1H % 2 != 0) {
                m[sJFSZM] = ozBGis1H;
                sJFSZM++;
            };
        };
    }
    {
        b = sJFSZM - 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (b > 0) {
            {
                dbixg9dcTA = 0;
                while (dbixg9dcTA < b) {
                    if (m[b] < m[dbixg9dcTA]) {
                        c = m[b];
                        m[b] = m[dbixg9dcTA];
                        m[dbixg9dcTA] = c;
                    }
                    dbixg9dcTA = dbixg9dcTA + 1;
                };
            }
            b--;
        };
    }
    printf ("%d", m[0]);
    {
        dbixg9dcTA = 1;
        while (dbixg9dcTA < sJFSZM) {
            printf (",%d", m[dbixg9dcTA]);
            dbixg9dcTA++;
        };
    }
    return 0;
}

