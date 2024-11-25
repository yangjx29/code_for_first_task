int main () {
    int AZA4Lx;
    int n;
    int max;
    int hnfYCj1iqZA;
    char c;
    int OJAlPfCo2br [300];
    AZA4Lx = 1;
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
    scanf ("%d", &OJAlPfCo2br[0]);
    scanf ("%c", &c);
    while (c == ',') {
        scanf ("%d", &OJAlPfCo2br[AZA4Lx]);
        AZA4Lx = AZA4Lx +1;
        scanf ("%c", &c);
    }
    max = OJAlPfCo2br[0];
    n = AZA4Lx;
    AZA4Lx = 1;
    if (n == 1)
        printf ("No");
    else {
        while (AZA4Lx < n) {
            if (max < OJAlPfCo2br[AZA4Lx])
                max = OJAlPfCo2br[AZA4Lx];
            AZA4Lx++;
        }
        AZA4Lx = 0;
        if (!(OJAlPfCo2br[0] != max))
            hnfYCj1iqZA = 0;
        else
            hnfYCj1iqZA = OJAlPfCo2br[0];
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
        while (AZA4Lx < n) {
            if ((hnfYCj1iqZA < OJAlPfCo2br[AZA4Lx]) && (OJAlPfCo2br[AZA4Lx] != max))
                hnfYCj1iqZA = OJAlPfCo2br[AZA4Lx];
            AZA4Lx++;
        }
        if ((max == hnfYCj1iqZA) || (hnfYCj1iqZA == 0))
            printf ("No");
        else
            printf ("%d", hnfYCj1iqZA);
    }
    return 0;
}

