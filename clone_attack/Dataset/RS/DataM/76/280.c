struct   point {
    int x86W5u0LON;
    int G5XZ1iTM;
};
int main () {
    int n, Ewvz2m, j = 0, AUOV8HeF1n, B, al51jqah4x;
    struct   point range [n];
    scanf ("%d", &n);
    {
        Ewvz2m = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Ewvz2m) {
            scanf ("%d%d\n", &(range[Ewvz2m].x86W5u0LON), &(range[Ewvz2m].G5XZ1iTM));
            Ewvz2m = Ewvz2m +1;
        };
    }
    AUOV8HeF1n = range[0].x86W5u0LON;
    B = range[0].G5XZ1iTM;
    for (al51jqah4x = 0; n > al51jqah4x; al51jqah4x = al51jqah4x + 1) {
        Ewvz2m = 1;
        while (n > Ewvz2m) {
            if (!(range[Ewvz2m].G5XZ1iTM < AUOV8HeF1n || B < range[Ewvz2m].x86W5u0LON)) {
                if (range[Ewvz2m].G5XZ1iTM > B) {
                    B = range[Ewvz2m].G5XZ1iTM;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (AUOV8HeF1n > range[Ewvz2m].x86W5u0LON) {
                    AUOV8HeF1n = range[Ewvz2m].x86W5u0LON;
                };
            }
            Ewvz2m = Ewvz2m +1;
        };
    }
    {
        Ewvz2m = 0;
        while (n > Ewvz2m) {
            if (AUOV8HeF1n > range[Ewvz2m].G5XZ1iTM || B < range[Ewvz2m].x86W5u0LON) {
                j = j + 1;
            }
            Ewvz2m = Ewvz2m +1;
        };
    }
    if (j == 0) {
        printf ("%d %d", AUOV8HeF1n, B);
    }
    else {
        printf ("no");
    }
    return 0;
}

