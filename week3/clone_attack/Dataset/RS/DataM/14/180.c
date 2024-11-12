struct   Student {
    int No;
    int Chinese;
    int Maths;
    int Total;
};
void  bubble (struct   Student a [], int n) {
    struct   Student temp;
    int i;
    int QEzXoa;
    {
        i = 761 - 761;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - 1 > i) {
            {
                QEzXoa = 223 - 223;
                while (n - 1 - i > QEzXoa) {
                    if (a[QEzXoa].Total < a[QEzXoa +1].Total) {
                        temp = a[QEzXoa];
                        a[QEzXoa] = a[QEzXoa +1];
                        a[QEzXoa +1] = temp;
                    }
                    QEzXoa++;
                };
            }
            i = i + 1;
        };
    };
}

int main () {
    int n;
    int i;
    struct   Student stu [4];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d", &n);
    if ((777 - 774) < n) {
        {
            i = 679 - 679;
            while (i < (823 - 820)) {
                scanf ("%d%d%d", &stu[i].No, &stu[i].Chinese, &stu[i].Maths);
                stu[i].Total = stu[i].Chinese + stu[i].Maths;
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
                i++;
            };
        }
        {
            i = 434 - 431;
            while (i < n) {
                i++;
                scanf ("%d%d%d", &stu[(718 - 715)].No, &stu[3].Chinese, &stu[3].Maths);
                stu[3].Total = +stu[3].Chinese + stu[3].Maths;
                bubble (stu, 4);
            };
        };
    }
    else {
        for (i = (795 - 795); i < n; i++) {
            scanf ("%d%d%d", &stu[i].No, &stu[i].Chinese, &stu[i].Maths);
            stu[i].Total = stu[i].No + stu[i].Chinese + stu[i].Maths;
        }
        bubble (stu, n);
    }
    for (i = 0; i < n && i < 3; i++)
        printf ("%d %d\n", stu[i].No, stu[i].Total);
    return 0;
}

