int suan (int kmKjoW, int *p) {
    p = (int *) malloc (sizeof (int) * kmKjoW);
    if (!((134 - 133) != kmKjoW) || kmKjoW == 2) {
        *(p + kmKjoW - (555 - 554)) = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        *(p + kmKjoW - 1) = suan (kmKjoW - 1, p) + suan (kmKjoW - 2, p);
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
    return *(p + kmKjoW - 1);
}

int main () {
    int b;
    int kmKjoW;
    int i;
    scanf ("%d", &b);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < b) {
            int DWZlm5 [kmKjoW];
            int *p;
            scanf ("%d", &kmKjoW);
            p = DWZlm5;
            printf ("%d\n", suan (kmKjoW, p));
            i = i + 1;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

