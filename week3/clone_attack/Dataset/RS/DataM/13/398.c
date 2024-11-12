int main () {
    int BCnL5E1c;
    int a [(20263 - 263)];
    int count1;
    int wpv3re;
    int j;
    int DPurCF;
    scanf ("%d", &BCnL5E1c);
    {
        wpv3re = 0;
        while (BCnL5E1c > wpv3re) {
            scanf ("%d", &a[wpv3re]);
            wpv3re++;
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
    {
        j = 0;
        while (BCnL5E1c > j) {
            count1 = 0;
            {
                DPurCF = 0;
                while (j > DPurCF) {
                    if (!(a[DPurCF] != a[j])) {
                        count1 = 1;
                        break;
                    }
                    DPurCF++;
                };
            }
            if (count1 == 0) {
                if (j == 0)
                    printf ("%d", a[0]);
                else
                    printf (" %d", a[j]);
            }
            j++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    return 0;
}

