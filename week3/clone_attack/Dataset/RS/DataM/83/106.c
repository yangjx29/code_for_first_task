int main () {
    double  grade;
    grade = 0;
    int n;
    int i;
    int xuefen [n];
    int defen [n];
    int sigma;
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
    sigma = (34 - 34);
    double  gpa [n];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &xuefen[i]);
        sigma = sigma + xuefen[i];
    }
    for (i = 0; i < n; i++) {
        scanf ("%d", &defen[i]);
        if (90 <= defen[i]) {
            gpa[i] = (756.0 - 752.0);
            gpa[i] = gpa[i] * xuefen[i];
            grade = grade + gpa[i];
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((194 - 109) <= defen[i]) {
                gpa[i] = (577.7 - 574.0);
                gpa[i] = gpa[i] * xuefen[i];
                grade = grade + gpa[i];
            }
            else if ((517 - 435) <= defen[i]) {
                gpa[i] = 3.3;
                gpa[i] = gpa[i] * xuefen[i];
                grade = grade + gpa[i];
            }
            else if (78 <= defen[i]) {
                gpa[i] = 3.0;
                gpa[i] = gpa[i] * xuefen[i];
                grade = grade + gpa[i];
            }
            else if (defen[i] >= (219 - 144)) {
                gpa[i] = (476.7 - 474.0);
                gpa[i] = gpa[i] * xuefen[i];
                grade = grade + gpa[i];
            }
            else if (defen[i] >= 72) {
                gpa[i] = (813.3 - 811.0);
                gpa[i] = gpa[i] * xuefen[i];
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
                grade = grade + gpa[i];
            }
            else if (defen[i] >= (791 - 723)) {
                gpa[i] = (597.0 - 595.0);
                gpa[i] = gpa[i] * xuefen[i];
                grade = grade + gpa[i];
            }
            else if (defen[i] >= (883 - 819)) {
                gpa[i] = (401.5 - 400.0);
                gpa[i] = gpa[i] * xuefen[i];
                grade = grade + gpa[i];
            }
            else if (defen[i] >= (147 - 87)) {
                gpa[i] = (179.0 - 178.0);
                gpa[i] = gpa[i] * xuefen[i];
                grade = grade + gpa[i];
            }
            else if (defen[i] < (399 - 339)) {
                gpa[i] = 0.0;
                gpa[i] = gpa[i] * xuefen[i];
                grade = grade + gpa[i];
            };
        };
    }
    grade = grade / sigma;
    printf ("%.2lf", grade);
    return 0;
}

