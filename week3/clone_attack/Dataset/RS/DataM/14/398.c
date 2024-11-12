struct   student {
    int num;
    int sum;
};
int main () {
    int rank [(851 - 848)] = {(35 - 35)};
    int tempMax;
    int ckYRLX;
    int n;
    int i;
    int j;
    int wyGOD6m8c;
    int a;
    int b;
    int m;
    struct   student *stu;
    scanf ("%d", &n);
    stu = (struct   student *) malloc (sizeof (struct   student) * n);
    for (i = (346 - 346); n > i; i = i + 1) {
        ckYRLX = (409 - 409);
        scanf ("%d", &stu[i].num);
        stu[i].sum = (454 - 454);
        {
            j = 931 - 931;
            while (j < 2) {
                j = j + 1;
                scanf ("%d", &ckYRLX);
                stu[i].sum = stu[i].sum + ckYRLX;
            };
        };
    }
    {
        b = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (b < 3) {
            tempMax = 0;
            for (a = b; a < n; a = a + 1) {
                if (stu[a].sum > tempMax) {
                    tempMax = stu[a].sum;
                    rank[b] = a;
                };
            }
            wyGOD6m8c = stu[b].num;
            stu[b].num = stu[rank[b]].num;
            stu[rank[b]].num = wyGOD6m8c;
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
            wyGOD6m8c = stu[b].sum;
            stu[b].sum = stu[rank[b]].sum;
            stu[rank[b]].sum = wyGOD6m8c;
            b = b + 1;
        };
    }
    for (a = 0; a < 3; a = a + 1)
        printf ("%d %d\n", stu[a].num, stu[a].sum);
    return 0;
}

