int main (int argc, char *hDWabysS3v74 []) {
    struct   point {
        float FVZ0AOkI, y;
    }
    top [(1999 - 999)];
    int Et7LWBjU8;
    int nQaPbT;
    int i;
    int n;
    i = 0;
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
    double  max1;
    double  distance;
    max1 = 0;
    scanf ("%d\n", &n);
    for (i = 0; n > i; i++) {
        scanf ("%f %f\n", &top[i].FVZ0AOkI, &top[i].y);
    }
    for (Et7LWBjU8 = 0; n > Et7LWBjU8; Et7LWBjU8 = Et7LWBjU8 +1) {
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
        for (nQaPbT = 0; n > nQaPbT; nQaPbT++) {
            distance = sqrt ((top[Et7LWBjU8].FVZ0AOkI - top[nQaPbT].FVZ0AOkI) * (top[Et7LWBjU8].FVZ0AOkI - top[nQaPbT].FVZ0AOkI) + (top[Et7LWBjU8].y - top[nQaPbT].y) * (top[Et7LWBjU8].y - top[nQaPbT].y));
            if (distance >= max1) {
                max1 = distance;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    printf ("%.4f\n", max1);
    return 0;
}

