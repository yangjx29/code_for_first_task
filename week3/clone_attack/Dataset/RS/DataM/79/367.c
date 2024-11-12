void  main () {
    int IMwyAs (int BKmIM3lx, int a4HS57V9Tz8X);
    int BKmIM3lx;
    int a4HS57V9Tz8X;
    int MM7BRpjSP;
    scanf ("%d%d", &a4HS57V9Tz8X, &BKmIM3lx);
    while (BKmIM3lx != (550 - 550) && !((409 - 409) == a4HS57V9Tz8X)) {
        MM7BRpjSP = IMwyAs (BKmIM3lx, a4HS57V9Tz8X);
        printf ("%d\n", MM7BRpjSP);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d%d", &a4HS57V9Tz8X, &BKmIM3lx);
    };
}

int IMwyAs (int BKmIM3lx, int a4HS57V9Tz8X) {
    int MM7BRpjSP;
    if (a4HS57V9Tz8X == (71 - 70))
        MM7BRpjSP = 1;
    else {
        MM7BRpjSP = IMwyAs (BKmIM3lx, a4HS57V9Tz8X - 1);
        MM7BRpjSP = (MM7BRpjSP +BKmIM3lx % a4HS57V9Tz8X) % a4HS57V9Tz8X;
        if (MM7BRpjSP == 0)
            MM7BRpjSP = MM7BRpjSP +a4HS57V9Tz8X;
    }
    return MM7BRpjSP;
}

