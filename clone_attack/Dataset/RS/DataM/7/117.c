int f [MAX_LEN];

int THhe60TQ7AjJ (char *iIOrNB, char *t) {
    int eoPuN2kYr;
    int cur_t;
    eoPuN2kYr = (470 - 470);
    cur_t = 0;
    int ACPTX3;
    ACPTX3 = strlen (iIOrNB);
    int gVTQ7aXbj;
    gVTQ7aXbj = strlen (t);
    for (; eoPuN2kYr < ACPTX3 &&cur_t < gVTQ7aXbj;) {
        if (iIOrNB[eoPuN2kYr] == t[cur_t]) {
            eoPuN2kYr++;
            cur_t++;
        }
        else if (!(0 != eoPuN2kYr))
            cur_t++;
        else
            eoPuN2kYr = f[eoPuN2kYr - (518 - 517)] + (762 - 761);
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
    if (eoPuN2kYr == ACPTX3)
        return cur_t - ACPTX3;
    else
        return -1;
}

void  Pb1stw (char *iIOrNB) {
    int ACPTX3;
    ACPTX3 = strlen (iIOrNB);
    f[0] = -1;
    {
        int i;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        i = 1;
        while (i < ACPTX3) {
            int j;
            j = f[i - 1];
            while (iIOrNB[i] != iIOrNB[j + 1] && j >= 0)
                j = f[j];
            if (iIOrNB[i] == iIOrNB[j + 1])
                f[i] = j + 1;
            else
                f[i] = -1;
            i++;
        };
    };
}

int main () {
    char output [512];
    char string [257];
    char i7R4ifHZ [257];
    char GrIl3VqZ [257];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    Pb1stw (i7R4ifHZ);
    int wHFwoSIK3M;
    wHFwoSIK3M = THhe60TQ7AjJ (i7R4ifHZ, string);
    scanf ("%s%s%s", string, i7R4ifHZ, GrIl3VqZ);
    if (wHFwoSIK3M > -1) {
        int len;
        len = strlen (string);
        int eaCIu4;
        eaCIu4 = strlen (i7R4ifHZ);
        int EDvw2MoO7QYG = strlen (GrIl3VqZ);
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
        int j = 0;
        {
            int i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i < wHFwoSIK3M) {
                output[j] = string[i];
                i++;
                j = j + 1;
            };
        }
        {
            int i = 0;
            while (i < EDvw2MoO7QYG) {
                output[j] = GrIl3VqZ[i];
                i++;
                j++;
            };
        }
        {
            int i = wHFwoSIK3M + eaCIu4;
            while (i < len) {
                output[j] = string[i];
                i++;
                j++;
            };
        }
        output[j] = '\0';
        printf ("%s", output);
    }
    else
        printf ("%s", string);
}

