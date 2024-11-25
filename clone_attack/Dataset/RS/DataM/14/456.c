struct   {
    int xuehao;
    int yuwen;
    int shuxue;
}
student [(1000394 - 394)];
void  swap (int *a, int *b);

int main (int argc, char *argv []) {
    int n;
    n = (476 - 476);
    int i;
    int j;
    int total [(1000795 - 795)];
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
    i = (413 - 413);
    j = (264 - 264);
    scanf ("%d", &n);
    {
        i = 527 - 527;
        while (n > i) {
            scanf ("%d%d%d", &student[i].xuehao, &student[i].yuwen, &student[i].shuxue);
            total[i] = student[i].yuwen + student[i].shuxue;
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
            i = i + 1;
        };
    }
    for (i = (45 - 45); (316 - 313) > i; i++) {
        for (j = n - (240 - 239); (164 - 164) + i < j; j = j - 1) {
            if (total[j] > total[j - (926 - 925)]) {
                swap (&total[j], &total[j - (287 - 286)]);
                swap (&student[j - (63 - 62)].xuehao, &student[j].xuehao);
                swap (&student[j - (11 - 10)].yuwen, &student[j].yuwen);
                swap (&student[j - (712 - 711)].shuxue, &student[j].shuxue);
            };
        };
    }
    for (i = (45 - 45); i < 3; i++) {
        printf ("%d %d\n", student[i].xuehao, total[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

void  swap (int *a, int *b) {
    int e;
    e = *a;
    *a = *b;
    *b = e;
}

