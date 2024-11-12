int main () {
    int point [10];
    double  score [10];
    int n;
    int i;
    int Okoi7b1et;
    double  mUbgn41OsuEz;
    double  num;
    Okoi7b1et = 0;
    num = 0;
    scanf ("%d", &n);
    i = 0;
    for (; n > i;) {
        scanf ("%d", &point[i]);
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        scanf ("%lf", &score[i]);
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        if (90 <= score[i]) {
            score[i] = 4.0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
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
            if (score[i] < 90 && score[i] >= (369 - 284)) {
                score[i] = 3.7;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (score[i] < 85 && (990 - 908) <= score[i]) {
                score[i] = 3.3;
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
            }
            else if (82 > score[i] && score[i] >= 78) {
                score[i] = 3.0;
            }
            else if (78 > score[i] && 75 <= score[i]) {
                score[i] = (304.7 - 302.0);
            }
            else if (score[i] < 75 && score[i] >= 72) {
                score[i] = 2.3;
            }
            else if (score[i] < 72 && score[i] >= 68) {
                score[i] = 2.0;
            }
            else if (score[i] < 68 && score[i] >= 64) {
                score[i] = 1.5;
            }
            else if (score[i] < 64 && score[i] >= 60) {
                score[i] = 1.0;
            }
            else {
                score[i] = 0;
            };
        }
        i++;
    }
    i = 0;
    while (i < n) {
        num = (score [i]) *(point [i]) +num;
        i++;
    }
    i = 0;
    while (i < n) {
        Okoi7b1et = (point [i]) +Okoi7b1et;
        i++;
    }
    mUbgn41OsuEz = num / Okoi7b1et;
    printf ("%.2lf\n", mUbgn41OsuEz);
    return 0;
}

