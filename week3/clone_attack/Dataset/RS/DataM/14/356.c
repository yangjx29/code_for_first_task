struct   stu {
    int id;
    int ch;
    int mt;
    int total;
};
struct   stu stu_1 [100000];
struct   stu top1 = {0, 0, 0, 0}, top2 = {0, 0, 0, 0}, top3 = {0, 0, 0, 0};

int main () {
    struct   stu tem;
    int n;
    int i;
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
    for (i = 0; n > i; i++) {
        scanf ("%d %d %d", &(stu_1[i].id), &(stu_1[i].ch), &(stu_1[i].mt));
        stu_1[i].total = stu_1[i].ch + stu_1[i].mt;
        if (top1.total < stu_1[i].total) {
            top3 = top2;
            top2 = top1;
            top1 = stu_1[i];
        }
        else if (top2.total < stu_1[i].total) {
            top3 = top2;
            top2 = stu_1[i];
        }
        else if (stu_1[i].total > top3.total) {
            top3 = stu_1[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else
            ;
    }
    printf ("%d %d\n", top1.id, top1.total);
    if ((top2.id) != 0)
        printf ("%d %d\n", top2.id, top2.total);
    if ((top3.id) != 0)
        printf ("%d %d\n", top3.id, top3.total);
    return 0;
}

