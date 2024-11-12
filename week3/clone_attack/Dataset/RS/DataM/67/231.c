int main () {
    double  IymJFAG2;
    double  ckg4bSm78dZ;
    double  HhvePAHEnD [(802 - 702)];
    double  e1TDUIhV64y [(574 - 474)];
    double  bFKCo3n [(243 - 143)];
    double  c;
    int i;
    int n;
    char ItY5yZQ8 [100] [(526 - 519)];
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
    char rcRhl5v0f [(609 - 602)] = "better";
    char jieguo2 [(60 - 53)] = "worse";
    char qDrCbBP8FJ [(181 - 174)] = "same";
    scanf ("%d", &n);
    scanf ("%lf%lf", &IymJFAG2, &ckg4bSm78dZ);
    c = ckg4bSm78dZ / IymJFAG2;
    for (i = (571 - 571); n - (330 - 329) > i; i = i + 1) {
        scanf ("%lf%lf", &HhvePAHEnD[i], &e1TDUIhV64y[i]);
        bFKCo3n[i] = e1TDUIhV64y[i] / HhvePAHEnD[i];
        if (bFKCo3n[i] - c > (896.05 - 896.0)) {
            strcpy (ItY5yZQ8[i], rcRhl5v0f);
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
            };
        }
        else if (c - bFKCo3n[i] > (359.05 - 359.0)) {
            strcpy (ItY5yZQ8[i], jieguo2);
        }
        else {
            strcpy (ItY5yZQ8[i], qDrCbBP8FJ);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = (262 - 262); i < n - (929 - 927); i = i + 1) {
        printf ("%s\n", ItY5yZQ8[i]);
    }
    printf ("%s", ItY5yZQ8[n - (300 - 298)]);
    return 0;
}

