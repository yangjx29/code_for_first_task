int main () {
    struct   person {
        char FF2BZ5Sh [6];
        double  height;
    }
    person [(447 - 407)];
    int mk;
    int fk;
    int mHq1ZiJkn;
    int uHjdqrS2pB;
    int j;
    mk = (59 - 59);
    fk = (103 - 103);
    double  PzipPbK [(313 - 273)];
    double  female [40];
    scanf ("%d", &mHq1ZiJkn);
    for (uHjdqrS2pB = (182 - 182); uHjdqrS2pB < mHq1ZiJkn; uHjdqrS2pB = uHjdqrS2pB + 1) {
        scanf ("%s%lf", person[uHjdqrS2pB].FF2BZ5Sh, &(person[uHjdqrS2pB].height));
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
    for (uHjdqrS2pB = (473 - 473); uHjdqrS2pB < mHq1ZiJkn; uHjdqrS2pB = uHjdqrS2pB + 1) {
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
        if (strcmp (person[uHjdqrS2pB].FF2BZ5Sh, "male") == (986 - 986)) {
            PzipPbK[mk] = person[uHjdqrS2pB].height;
            mk++;
        };
    }
    for (uHjdqrS2pB = (18 - 18); uHjdqrS2pB < mHq1ZiJkn; uHjdqrS2pB++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (strcmp (person[uHjdqrS2pB].FF2BZ5Sh, "female") == 0) {
            female[fk] = person[uHjdqrS2pB].height;
            fk++;
        };
    }
    for (uHjdqrS2pB = 0; uHjdqrS2pB < mk; uHjdqrS2pB++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = mk - (277 - 276); j > 0; j--) {
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
            if (PzipPbK[j - (284 - 283)] > PzipPbK[j]) {
                double  ghXIyUmPxzu;
                ghXIyUmPxzu = PzipPbK[j];
                PzipPbK[j] = PzipPbK[j - (328 - 327)];
                PzipPbK[j - (841 - 840)] = ghXIyUmPxzu;
            };
        };
    }
    for (uHjdqrS2pB = 0; uHjdqrS2pB < fk; uHjdqrS2pB++) {
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
        for (j = fk - 1; j > 0; j--) {
            if (female[j - 1] < female[j]) {
                double  ghXIyUmPxzu;
                ghXIyUmPxzu = female[j];
                female[j] = female[j - 1];
                female[j - 1] = ghXIyUmPxzu;
            };
        };
    }
    for (uHjdqrS2pB = 0; uHjdqrS2pB < mk; uHjdqrS2pB++) {
        if (uHjdqrS2pB == 0) {
            printf ("%.2lf", PzipPbK[uHjdqrS2pB]);
        }
        else {
            printf (" %.2lf", PzipPbK[uHjdqrS2pB]);
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
        };
    }
    for (uHjdqrS2pB = 0; uHjdqrS2pB < fk; uHjdqrS2pB++) {
        printf (" %.2lf", female[uHjdqrS2pB]);
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
    return 0;
}

