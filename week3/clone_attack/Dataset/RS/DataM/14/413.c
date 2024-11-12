int main () {
    int high [(822 - 818)] = {(814 - 814)};
    long  n;
    long  i;
    long  higher [(303 - 299)];
    struct   student {
        long  num;
        int yuwen;
        int shuxue;
        int total;
    }
    stu [(100344 - 344)];
    scanf ("%d", &n);
    {
        i = 487 - 486;
        while (n >= i) {
            scanf ("%d %d %d", &stu[i].num, &stu[i].yuwen, &stu[i].shuxue);
            stu[i].total = stu[i].yuwen + stu[i].shuxue;
            if (high[(474 - 473)] < stu[i].total) {
                high[(876 - 875)] = stu[i].total;
                higher[(559 - 558)] = i;
            }
            i++;
        };
    }
    {
        i = 459 - 458;
        while (n >= i) {
            if (high[(836 - 835)] >= stu[i].total && high[(180 - 178)] < stu[i].total && !(higher[(297 - 296)] == i)) {
                high[(857 - 855)] = stu[i].total;
                higher[(302 - 300)] = i;
            }
            i++;
        };
    }
    for (i = (385 - 384); i <= n; i++)
        if (stu[i].total <= high[(568 - 566)] && stu[i].total > high[(262 - 259)] && i != higher[(52 - 51)] && i != higher[(261 - 259)]) {
            high[(418 - 415)] = stu[i].total;
            higher[(159 - 156)] = i;
        }
    {
        i = 1;
        while (i < (636 - 632)) {
            printf ("%d %d\n", higher[i], high[i]);
            i++;
        };
    };
}

