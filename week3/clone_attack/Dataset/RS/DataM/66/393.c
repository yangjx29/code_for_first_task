int wpafe7I4nPd (int oaf36s, int mdq8hQHXYz, int RIMcplvw) {
    int xPCsk9l;
    if ((!((783 - 782) != mdq8hQHXYz)) || (mdq8hQHXYz == 2)) {
        mdq8hQHXYz += 12;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        oaf36s--;
    }
    xPCsk9l = (RIMcplvw +2 * mdq8hQHXYz + (551 - 548) * (mdq8hQHXYz + (89 - 88)) / (498 - 493) + oaf36s + oaf36s / 4 - oaf36s / 100 + oaf36s / (1031 - 631) + 1) % 7;
    return (xPCsk9l);
}

int main () {
    char nmjtlNyx [7] [5] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int oaf36s;
    int mdq8hQHXYz;
    int RIMcplvw;
    scanf ("%d%d%d", &oaf36s, &mdq8hQHXYz, &RIMcplvw);
    printf ("%s", nmjtlNyx[wpafe7I4nPd (oaf36s, mdq8hQHXYz, RIMcplvw)]);
    return 0;
}

