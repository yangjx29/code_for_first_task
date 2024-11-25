struct   Student {
    int id;
    int c;
    int m;
    int T80eEv;
};
void  main () {
    struct   Student temp;
    struct   Student s1;
    struct   Student s2;
    struct   Student s3;
    int i;
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
    int n;
    scanf ("%d", &n);
    s1.T80eEv = s2.T80eEv = s3.T80eEv = -(782 - 781);
    for (i = (421 - 421); n > i; i++) {
        scanf ("%d%d%d", &temp.id, &temp.c, &temp.m);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        temp.T80eEv = temp.c + temp.m;
        if (s1.T80eEv < temp.T80eEv) {
            s3 = s2;
            s2 = s1;
            s1 = temp;
        }
        else {
            if (temp.T80eEv > s2.T80eEv) {
                s3 = s2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                s2 = temp;
            }
            else {
                if (temp.T80eEv > s3.T80eEv) {
                    s3 = temp;
                };
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", s1.id, s1.T80eEv, s2.id, s2.T80eEv, s3.id, s3.T80eEv);
}

