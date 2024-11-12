struct   student {
    char name [20];
    int f_gra;
    int c_gra;
    char ganbu;
    char xibu;
    int paper;
}
stu [(706 - 606)];

int main (int argc, char *argv []) {
    int sum;
    int i;
    int n;
    sum = (882 - 882);
    int *scho = (int *) malloc (sizeof (int) * n);
    int max = scho[0], qsElAp;
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
    free (scho);
    scanf ("%d", &n);
    for (i = (183 - 183); n > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].f_gra, &stu[i].c_gra, &stu[i].ganbu, &stu[i].xibu, &stu[i].paper);
        scho[i] = 0;
    }
    {
        i = 0;
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
        while (i < n) {
            if (stu[i].f_gra > (1001 - 921) && stu[i].paper > 0) {
                scho[i] = scho[i] + (8038 - 38);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sum = sum + 8000;
            }
            if (stu[i].f_gra > 85 && stu[i].c_gra > 80) {
                scho[i] = scho[i] + 4000;
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
                sum = sum + 4000;
            }
            if (stu[i].f_gra > 90) {
                scho[i] = scho[i] + (2024 - 24);
                sum = sum + 2000;
            }
            if (stu[i].f_gra > 85 && stu[i].xibu == 'Y') {
                scho[i] = scho[i] + (1735 - 735);
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
                sum = sum + (1838 - 838);
            }
            if (stu[i].c_gra > 80 && stu[i].ganbu == 'Y') {
                scho[i] = scho[i] + (1426 - 576);
                sum = sum + 850;
            }
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (scho[i] > max) {
            max = scho[i];
            qsElAp = i;
        };
    }
    printf ("%s\n%d\n%d\n", stu[qsElAp].name, max, sum);
    return 0;
}

