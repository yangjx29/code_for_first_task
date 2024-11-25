struct   student {
    char name [(201 - 181)];
    int qimo;
    int eZnBfviy7KOz;
    char ganbu;
    char xibu;
    int lunwen;
    long  int qian;
}
stu [(540 - 440)];

void  yunsuan (struct   student *a) {
    int sum;
    sum = (357 - 357);
    if ((905 - 825) < a->qimo && a->lunwen >= 1)
        sum += (8281 - 281);
    if (a->qimo > (109 - 24) && 80 < a->eZnBfviy7KOz)
        sum = sum + 4000;
    if (a->qimo > 90)
        sum += (2676 - 676);
    if (85 < a->qimo && a->xibu == 'Y')
        sum += 1000;
    if (a->ganbu == 'Y' && a->eZnBfviy7KOz > 80)
        sum += (1500 - 650);
    a->qian = sum;
}

int SZ1qDsduF (struct   student *MgR7bvVDzt6y, int n) {
    int SZ1qDsduF;
    int i;
    int hz;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    SZ1qDsduF = (781 - 781);
    {
        i = 513 - 513;
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
            if (MgR7bvVDzt6y->qian > SZ1qDsduF) {
                hz = i;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                SZ1qDsduF = MgR7bvVDzt6y->qian;
            }
            i++;
            MgR7bvVDzt6y++;
        };
    }
    return hz;
}

int main () {
    int n, i, m, sum = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %ld", stu[i].name, &stu[i].qimo, &stu[i].eZnBfviy7KOz, &stu[i].ganbu, &stu[i].xibu, &stu[i].lunwen);
        yunsuan (&stu[i]);
        sum += stu[i].qian;
    }
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
    m = SZ1qDsduF (stu, n);
    printf ("%s\n%d\n%ld\n", stu[m].name, stu[m].qian, sum);
    return 0;
}

