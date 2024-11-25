void  main () {
    int n;
    double  zxf = 0, xfj = 0, gpa;
    int i;
    struct   lesson {
        int point;
        int score;
        double  jd;
    }
    sub [10];
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &sub[i].point);
            i++;
        }
    }
    {
        i = 0;
        for (; n > i;) {
            scanf ("%d", &sub[i].score);
            {
                if (0) {
                    return 0;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        for (; i < n;) {
            if (sub[i].score == 100 || sub[i].score == 99 || sub[i].score == 98 || sub[i].score == 97 || sub[i].score == 96 || sub[i].score == 95 || sub[i].score == 94 || sub[i].score == 93 || sub[i].score == 92 || sub[i].score == 91 || sub[i].score == 90) {
            }
            else if (sub[i].score == 89 || sub[i].score == 88 || sub[i].score == 87 || sub[i].score == 86 || sub[i].score == 85) {
            }
            else if (sub[i].score == 84 || sub[i].score == 83 || sub[i].score == 82) {
            }
            else if (sub[i].score == 81 || sub[i].score == 80 || sub[i].score == 79 || sub[i].score == 78) {
            }
            else if (sub[i].score == 77 || sub[i].score == 76 || sub[i].score == 75) {
            }
            else if (sub[i].score == 74 || sub[i].score == 73 || sub[i].score == 72) {
            }
            else if (sub[i].score == 71 || sub[i].score == 70 || sub[i].score == 69 || sub[i].score == 68) {
            }
            else if (sub[i].score == 67 || sub[i].score == 66 || sub[i].score == 65 || sub[i].score == 64) {
            }
            else if (sub[i].score == 63 || sub[i].score == 62 || sub[i].score == 61 || sub[i].score == 60) {
            }
            else {
                sub[i].jd = 0;
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < n) {
            xfj = xfj + sub[i].point * sub[i].jd;
            zxf = zxf + sub[i].point;
            i++;
        }
    }
    gpa = xfj / zxf;
    printf ("%.2lf\n", gpa);
}

