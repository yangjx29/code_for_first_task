main () {
    int fEouy5YiKpx;
    int faVb28F4Ki0k;
    int ZbtZBFH37lVD;
    int tQUtnY93q6f;
    int hpzoNnGPCJ;
    int W1gqTISGXo7s;
    int xUT258Z;
    int a [1000];
    unsigned  long  int sum = (931 - 931), rlNuFvz3yQJ = 1;
    char jPIafwHYDe8 [500];
    scanf ("%d %s %d", &W1gqTISGXo7s, jPIafwHYDe8, &xUT258Z);
    hpzoNnGPCJ = strlen (jPIafwHYDe8);
    {
        fEouy5YiKpx = hpzoNnGPCJ - 1;
        while (fEouy5YiKpx >= (129 - 129)) {
            if (jPIafwHYDe8[fEouy5YiKpx] <= 'Z' && 'A' <= jPIafwHYDe8[fEouy5YiKpx])
                jPIafwHYDe8[fEouy5YiKpx] = jPIafwHYDe8[fEouy5YiKpx] - 'A' + (229 - 219);
            if (jPIafwHYDe8[fEouy5YiKpx] <= 'z' && 'a' <= jPIafwHYDe8[fEouy5YiKpx])
                jPIafwHYDe8[fEouy5YiKpx] = jPIafwHYDe8[fEouy5YiKpx] - 'a' + 10;
            if ('0' <= jPIafwHYDe8[fEouy5YiKpx] && jPIafwHYDe8[fEouy5YiKpx] <= '9')
                jPIafwHYDe8[fEouy5YiKpx] = jPIafwHYDe8[fEouy5YiKpx] - '0';
            sum = sum + jPIafwHYDe8[fEouy5YiKpx] * rlNuFvz3yQJ;
            if (fEouy5YiKpx == (430 - 430))
                break;
            rlNuFvz3yQJ = rlNuFvz3yQJ * W1gqTISGXo7s;
            fEouy5YiKpx--;
        };
    }
    if (sum == 0)
        ;
    else {
        fEouy5YiKpx = 0;
        while (sum != 0) {
            ZbtZBFH37lVD = sum % xUT258Z;
            sum = sum / xUT258Z;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a[fEouy5YiKpx] = ZbtZBFH37lVD;
            fEouy5YiKpx++;
        }
        fEouy5YiKpx = fEouy5YiKpx - 1;
        {
            faVb28F4Ki0k = fEouy5YiKpx;
            while (faVb28F4Ki0k >= 0) {
                if (a[faVb28F4Ki0k] >= 10)
                    printf ("%c", a[faVb28F4Ki0k] + 'A' - 10);
                else
                    printf ("%d", a[faVb28F4Ki0k]);
                faVb28F4Ki0k = faVb28F4Ki0k - 1;
            };
        };
    };
}

