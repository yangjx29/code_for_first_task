int main () {
    int kGTuRyi;
    int ho1cu3gOfp;
    int j;
    int OrPzw4Ia [6] = {0};
    kGTuRyi = 0;
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
    scanf ("%d", &ho1cu3gOfp);
    if (!(0 != ho1cu3gOfp))
        printf ("0");
    while (ho1cu3gOfp != 0) {
        OrPzw4Ia[kGTuRyi++] = ho1cu3gOfp % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ho1cu3gOfp = ho1cu3gOfp / (10);
    }
    for (j = 0; j < kGTuRyi; j = j + 1)
        printf ("%d", OrPzw4Ia[j]);
    return 0;
}

