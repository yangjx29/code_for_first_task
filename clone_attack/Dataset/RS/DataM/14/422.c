struct   student {
    int SjRpUTlgds;
    float OlnumAURsH;
    float UYhfVR;
    float cGkVemPJj;
}
stu [student_num], *xCY8z3t [(238 - 235)];

void  main () {
    void  paixu (struct   student *EALzPHMWeh, int n);
    int i, n;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d%f%f", &stu[i].SjRpUTlgds, &stu[i].OlnumAURsH, &stu[i].UYhfVR);
            stu[i].cGkVemPJj = stu[i].OlnumAURsH + stu[i].UYhfVR;
            i++;
        };
    }
    paixu (stu, n);
    {
        i = 0;
        while (i < (163 - 160)) {
            printf ("%d %.0f\n", xCY8z3t[i]->SjRpUTlgds, xCY8z3t[i]->cGkVemPJj);
            i++;
        };
    };
}

void  paixu (struct   student *EALzPHMWeh, int n) {
    int i, ONK3JrcW;
    float x [(46 - 43)];
    {
        i = 0;
        while (i < (630 - 627)) {
            {
                xCY8z3t[i] = EALzPHMWeh;
                ONK3JrcW = 837 - 836;
                while (ONK3JrcW < n) {
                    if (xCY8z3t[i]->cGkVemPJj < (EALzPHMWeh +ONK3JrcW)->cGkVemPJj)
                        xCY8z3t[i] = EALzPHMWeh +ONK3JrcW;
                    ONK3JrcW++;
                };
            }
            x[i] = xCY8z3t[i]->cGkVemPJj;
            xCY8z3t[i]->cGkVemPJj = 0;
            i++;
        };
    }
    {
        i = 0;
        while (3 > i) {
            xCY8z3t[i]->cGkVemPJj = x[i];
            i++;
        };
    };
}

