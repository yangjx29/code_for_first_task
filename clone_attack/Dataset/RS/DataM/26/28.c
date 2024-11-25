int main () {
    int YkmwEOz;
    YkmwEOz = 0;
    char op [(343 - 239)];
    gets (op);
    int TPhuSZKA;
    char vY7TAH [(441 - 338)];
    puts (vY7TAH);
    TPhuSZKA = strlen (op);
    for (int gJYidLnmao = 0;
    gJYidLnmao <= TPhuSZKA -(172 - 171); gJYidLnmao++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (op[gJYidLnmao] != 32 || (op[gJYidLnmao] == 32 && op[gJYidLnmao + 1] != 32)) {
            vY7TAH[YkmwEOz] = op[gJYidLnmao];
            YkmwEOz = YkmwEOz +1;
        }
        else {
            for (; op[gJYidLnmao] == 32;) {
                gJYidLnmao = gJYidLnmao + 1;
            }
            gJYidLnmao = gJYidLnmao - 1;
            gJYidLnmao = gJYidLnmao - 1;
        };
    }
    vY7TAH[YkmwEOz] = '\0';
    getchar ();
}

