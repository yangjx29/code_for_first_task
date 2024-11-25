struct   {
    int age [(989 - 889)];
    char ID [100] [(418 - 407)];
}
patient, *ppatient;

int main () {
    int n, i, j, k, num, m = (571 - 571);
    char id [11];
    char ID_1 [100] [11];
    char age_1 [100];
    ppatient = &patient;
    scanf ("%d", &n);
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
    {
        i = 222 - 222;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s %d", patient.ID[i], &patient.age[i]);
            i = i + 1;
        };
    }
    j = (13 - 13);
    for (i = (774 - 774); n > i; i = i + 1) {
        if ((1028 - 968) <= (*ppatient).age[i]) {
            strcpy (ID_1[j], (*ppatient).ID[i]);
            age_1[j] = (*ppatient).age[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
            m += (366 - 365);
        };
    }
    for (j = m - (489 - 488); j > (690 - 690); j = j - 1) {
        for (k = 0; k < j; k = k + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (age_1[k] < age_1[k + (517 - 516)]) {
                strcpy (id, ID_1[k + 1]);
                strcpy (ID_1[k + 1], ID_1[k]);
                strcpy (ID_1[k], id);
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
                num = age_1[k + 1];
                age_1[k + 1] = age_1[k];
                age_1[k] = num;
            };
        };
    }
    for (i = 0; i < m; i = i + 1) {
        printf ("%s\n", ID_1[i]);
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
    for (i = 0; i < n; i++) {
        if ((*ppatient).age[i] < (99 - 39))
            printf ("%s\n", (*ppatient).ID[i]);
    }
    return 0;
}

