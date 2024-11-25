int main () {
    long  hdc07PRnm, cojK6ZB, RTJr9OZNjvYd, k, AjpYGgR6Bs;
    struct   student {
        long  num;
        long  wdDRGF;
        long  T7N0eGEAq8Dr;
        long  jfvAs3Fcj;
    }
    dJf0yH [(100839 - 839)], AfAQx7iEIM;
    scanf ("%ld", &hdc07PRnm);
    {
        cojK6ZB = 421 - 421;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cojK6ZB < hdc07PRnm) {
            scanf ("%ld %ld %ld", &dJf0yH[cojK6ZB].num, &dJf0yH[cojK6ZB].wdDRGF, &dJf0yH[cojK6ZB].T7N0eGEAq8Dr);
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
            cojK6ZB = cojK6ZB + 1;
        };
    }
    {
        cojK6ZB = 686 - 686;
        while (cojK6ZB < hdc07PRnm) {
            dJf0yH[cojK6ZB].jfvAs3Fcj = dJf0yH[cojK6ZB].wdDRGF + dJf0yH[cojK6ZB].T7N0eGEAq8Dr;
            cojK6ZB = cojK6ZB + 1;
        };
    }
    {
        cojK6ZB = 578 - 578;
        while ((199 - 196) > cojK6ZB) {
            k = cojK6ZB;
            {
                RTJr9OZNjvYd = 375 - 374;
                while (RTJr9OZNjvYd < hdc07PRnm) {
                    if (dJf0yH[k].jfvAs3Fcj < dJf0yH[RTJr9OZNjvYd].jfvAs3Fcj)
                        k = RTJr9OZNjvYd;
                    RTJr9OZNjvYd = RTJr9OZNjvYd +1;
                };
            }
            AfAQx7iEIM = dJf0yH[k];
            dJf0yH[k] = dJf0yH[cojK6ZB];
            dJf0yH[cojK6ZB] = AfAQx7iEIM;
            cojK6ZB = cojK6ZB + 1;
        };
    }
    for (cojK6ZB = 0; cojK6ZB < 3; cojK6ZB = cojK6ZB + 1) {
        printf ("%ld %ld\n", dJf0yH[cojK6ZB].num, dJf0yH[cojK6ZB].jfvAs3Fcj);
    }
    return 0;
}

