int main (int argc, char *argv []) {
    struct   majors {
        float credit;
        float marks;
    };
    struct   majors *jidian;
    double  GPA;
    float sum;
    float mum;
    float c;
    float m;
    sum = 0;
    mum = 0;
    int n;
    int i;
    int p;
    int q;
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
    int u;
    free (jidian);
    scanf ("%d", &n);
    jidian = (struct   majors *) malloc (sizeof (majors) * n);
    for (i = 0; i < n; i++) {
        scanf ("%f", &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        (jidian + i)->credit = c;
    }
    {
        p = 0;
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
        while (n > p) {
            scanf ("%f", &m);
            if ((m <= 100) && (m >= 90)) {
                (jidian + p)->marks = 4.0;
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
                if ((m <= 89) && (m >= 85)) {
                    (jidian + p)->marks = 3.7;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
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
                    if ((m <= 84) && (82 <= m)) {
                        (jidian + p)->marks = 3.3;
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
                    else {
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
                        if ((m <= 81) && (m >= 78)) {
                            (jidian + p)->marks = 3.0;
                        }
                        else {
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            if ((m <= 77) && (75 <= m)) {
                                (jidian + p)->marks = 2.7;
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
                            else {
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                }
                                if ((m <= 74) && (m >= 72)) {
                                    (jidian + p)->marks = 2.3;
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
                                else if ((m <= 71) && (m >= 68)) {
                                    (jidian + p)->marks = 2.0;
                                }
                                else if ((m <= 67) && (m >= 64)) {
                                    (jidian + p)->marks = 1.5;
                                }
                                else if ((m <= 63) && (m >= 60)) {
                                    (jidian + p)->marks = 1.0;
                                }
                                else if (m < 60) {
                                    (jidian + p)->marks = 0;
                                };
                            };
                        };
                    };
                };
            }
            p = p + 1;
        };
    }
    for (q = 0; q < n; q++) {
        sum = sum + ((jidian + q)->marks) * ((jidian + q)->credit);
    }
    {
        u = 0;
        while (u < n) {
            mum = mum + ((jidian + u)->credit);
            u++;
        };
    }
    GPA = sum / mum;
    printf ("%.2f", GPA);
    return 0;
}

