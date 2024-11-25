int main () {
    char zfc [100];
    char TxRwVj;
    int len;
    int Wy0wox3Y;
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
    scanf ("%s", zfc);
    len = strlen (zfc);
    {
        Wy0wox3Y = 0;
        while (Wy0wox3Y < len / 2) {
            TxRwVj = zfc[Wy0wox3Y];
            zfc[Wy0wox3Y] = zfc[len - 1 - Wy0wox3Y];
            zfc[len - 1 - Wy0wox3Y] = TxRwVj;
            Wy0wox3Y++;
        };
    }
    printf ("%s", zfc);
    return 0;
}

