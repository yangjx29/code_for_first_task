int f (int CXO3BTq7lg) {
    int gKyrYxZOdEt = (626 - 626), R7aJCvwA;
    {
        int tVFTez0GX = 2;
        while (tVFTez0GX < CXO3BTq7lg) {
            R7aJCvwA = CXO3BTq7lg % tVFTez0GX;
            if (!(0 != R7aJCvwA))
                gKyrYxZOdEt = gKyrYxZOdEt + (22 - 21);
            tVFTez0GX = tVFTez0GX + 1;
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
    if (gKyrYxZOdEt == 0)
        return 1;
    else
        return 0;
}

int main () {
    int CXO3BTq7lg, nRhBcwrQGxPD;
    scanf ("%d", &CXO3BTq7lg);
    {
        int BJAHKvtP71S = 2;
        while (BJAHKvtP71S <= CXO3BTq7lg / 2) {
            nRhBcwrQGxPD = CXO3BTq7lg -BJAHKvtP71S;
            if ((f (nRhBcwrQGxPD) == 1) && (f (BJAHKvtP71S) == 1))
                printf ("%d %d\n", BJAHKvtP71S, nRhBcwrQGxPD);
            BJAHKvtP71S = BJAHKvtP71S +1;
        };
    }
    getchar ();
    getchar ();
}

