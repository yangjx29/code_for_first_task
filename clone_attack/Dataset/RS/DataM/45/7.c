int main () {
    char NAvPqMs [51];
    char JJXLCsZt70gH [51];
    char e9p1KMA [51];
    int Z3dyUtcuk;
    int MVIJM5g96POG;
    int E6bnwLVUT9P;
    int Xd79Ktzb;
    scanf ("%s %s", NAvPqMs, JJXLCsZt70gH);
    Z3dyUtcuk = strlen (NAvPqMs);
    MVIJM5g96POG = strlen (JJXLCsZt70gH);
    for (E6bnwLVUT9P = 0; E6bnwLVUT9P < MVIJM5g96POG; E6bnwLVUT9P++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (JJXLCsZt70gH[E6bnwLVUT9P] == NAvPqMs[0] && !(NAvPqMs[Z3dyUtcuk -1] != JJXLCsZt70gH[E6bnwLVUT9P +Z3dyUtcuk-1])) {
            for (Xd79Ktzb = E6bnwLVUT9P; Xd79Ktzb < E6bnwLVUT9P +Z3dyUtcuk; Xd79Ktzb = Xd79Ktzb +1) {
                e9p1KMA[Xd79Ktzb -E6bnwLVUT9P] = JJXLCsZt70gH[Xd79Ktzb];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            e9p1KMA[Z3dyUtcuk] = '\0';
            if (strcmp (e9p1KMA, NAvPqMs) == 0) {
                break;
            };
        };
    }
    printf ("%d", E6bnwLVUT9P);
    return 0;
}

