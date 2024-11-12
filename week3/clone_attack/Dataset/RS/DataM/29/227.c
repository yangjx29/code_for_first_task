int main () {
    double  aiDXdb3 [500];
    int Kuj4LghEK [500], zmUwhOj, mHGjmc4sw, Ay5cu2tvEq1, xKfDS1PgdW [500];
    xKfDS1PgdW[0] = 1;
    xKfDS1PgdW[1] = 2;
    scanf ("%d", &Ay5cu2tvEq1);
    for (zmUwhOj = 0; Ay5cu2tvEq1 > zmUwhOj; zmUwhOj = zmUwhOj + 1) {
        scanf ("%d", &Kuj4LghEK[zmUwhOj]);
    }
    {
        zmUwhOj = 2;
        while (500 > zmUwhOj) {
            xKfDS1PgdW[zmUwhOj] = xKfDS1PgdW[zmUwhOj - 1] + xKfDS1PgdW[zmUwhOj - 2];
            zmUwhOj++;
        };
    }
    {
        zmUwhOj = 0;
        while (Ay5cu2tvEq1 > zmUwhOj) {
            aiDXdb3[zmUwhOj] = 0;
            {
                mHGjmc4sw = 0;
                while (Kuj4LghEK[zmUwhOj] > mHGjmc4sw) {
                    aiDXdb3[zmUwhOj] = aiDXdb3[zmUwhOj] + xKfDS1PgdW[mHGjmc4sw + 1] * 1.0 / xKfDS1PgdW[mHGjmc4sw];
                    mHGjmc4sw++;
                };
            }
            printf ("%.3lf\n", aiDXdb3[zmUwhOj]);
            zmUwhOj++;
        };
    }
    return 0;
}

