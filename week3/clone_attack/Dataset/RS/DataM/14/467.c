struct   stu1 {
    long  num;
    int mLb7c6QRG;
    int score2;
    struct   stu1 *omvaI7ThyVzc;
};
struct   stu1 *J2qPb15FZT (void ) {
    struct   stu1 *t5z0asK;
    struct   stu1 *JFqg1rHXRs;
    struct   stu1 *SAIfZv0HRSle;
    int n, i = 1;
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
    SAIfZv0HRSle = JFqg1rHXRs = (struct   stu1 *) malloc (LEN1);
    scanf ("%d", &n);
    t5z0asK = NULL;
    while (i <= n) {
        scanf ("%ld %d %d", &JFqg1rHXRs->num, &JFqg1rHXRs->mLb7c6QRG, &JFqg1rHXRs->score2);
        if (i == 1) {
            t5z0asK = JFqg1rHXRs;
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
        else {
            SAIfZv0HRSle = JFqg1rHXRs;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i != n) {
            JFqg1rHXRs = SAIfZv0HRSle->omvaI7ThyVzc = (struct   stu1 *) malloc (LEN1);
        }
        else {
            JFqg1rHXRs->omvaI7ThyVzc = NULL;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        i = i + 1;
    }
    return (t5z0asK);
}

struct   stu1 *fyCGkBgWa (struct   stu1 *t5z0asK) {
    int sCk5McEq, n, w;
    int t;
    t = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    struct   stu1 *D21Z8uqeDoEX, *b5q9Eas;
    {
        t = 1;
        D21Z8uqeDoEX = t5z0asK;
        while (D21Z8uqeDoEX->omvaI7ThyVzc != NULL, t <= 3) {
            t = t + 1;
            b5q9Eas = D21Z8uqeDoEX->omvaI7ThyVzc;
            while (b5q9Eas != NULL) {
                if ((D21Z8uqeDoEX->mLb7c6QRG + D21Z8uqeDoEX->score2) < (b5q9Eas->mLb7c6QRG + b5q9Eas->score2)) {
                    sCk5McEq = D21Z8uqeDoEX->num;
                    n = D21Z8uqeDoEX->mLb7c6QRG;
                    w = D21Z8uqeDoEX->score2;
                    D21Z8uqeDoEX->num = b5q9Eas->num;
                    D21Z8uqeDoEX->mLb7c6QRG = b5q9Eas->mLb7c6QRG;
                    D21Z8uqeDoEX->score2 = b5q9Eas->score2;
                    b5q9Eas->num = sCk5McEq;
                    b5q9Eas->mLb7c6QRG = n;
                    b5q9Eas->score2 = w;
                }
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
                b5q9Eas = b5q9Eas->omvaI7ThyVzc;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            printf ("%ld %d\n", D21Z8uqeDoEX->num, (D21Z8uqeDoEX->mLb7c6QRG + D21Z8uqeDoEX->score2));
            D21Z8uqeDoEX = D21Z8uqeDoEX->omvaI7ThyVzc;
        };
    }
    return (t5z0asK);
}

void  main () {
    struct   stu1 *XYHfv14ADCsd;
    fyCGkBgWa (XYHfv14ADCsd);
    XYHfv14ADCsd = J2qPb15FZT ();
}

