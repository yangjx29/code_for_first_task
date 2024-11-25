int main () {
    int i;
    int n;
    int a;
    a = 0;
    int b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    b = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        int p;
        int CYnAx2Tahv;
        scanf ("%d %d", &p, &CYnAx2Tahv);
        if (p - CYnAx2Tahv != 0) {
            if (p - CYnAx2Tahv == -1 || p - CYnAx2Tahv == 2) {
                a++;
            }
            else {
                b++;
            };
        };
    }
    if (a == b) {
        printf ("Tie");
    }
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (a > b) {
            printf ("A");
        }
        else {
            printf ("B");
        };
    }
    return 0;
}

