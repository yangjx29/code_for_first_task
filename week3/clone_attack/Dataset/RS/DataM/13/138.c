int main () {
    int Xw8pzs, Hj7CkyVPgOIJ, j, fPAHqz4g;
    int OptQfSKvP [20000];
    scanf ("%d\n", &Xw8pzs);
    {
        Hj7CkyVPgOIJ = 573 - 572;
        while (Xw8pzs >= Hj7CkyVPgOIJ) {
            Hj7CkyVPgOIJ = Hj7CkyVPgOIJ +1;
            scanf ("%d ", &OptQfSKvP[Hj7CkyVPgOIJ -1]);
        };
    }
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
    printf ("%d", OptQfSKvP[0]);
    {
        j = 2;
        while (j <= Xw8pzs) {
            {
                fPAHqz4g = 1;
                while (fPAHqz4g <= j - 1) {
                    if (OptQfSKvP[j - 1] == OptQfSKvP[fPAHqz4g - 1]) {
                        break;
                    }
                    fPAHqz4g = fPAHqz4g + 1;
                };
            }
            if (fPAHqz4g == j)
                printf (" %d", OptQfSKvP[j - 1]);
            j++;
        };
    }
    return 0;
}

