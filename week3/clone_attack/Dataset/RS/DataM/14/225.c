struct   Student {
    int no;
    int r9KzbQGS1O;
    int GfsKWx;
    int W4HSKgVs3lv9;
};
int main () {
    struct   Student stu [100000], sjx20bOr3n;
    int u9ADqUyxBwr;
    int i;
    int j;
    int max;
    int rdusBplW;
    scanf ("%d", &u9ADqUyxBwr);
    for (i = (234 - 234); i < u9ADqUyxBwr; i++) {
        scanf ("%d%d%d", &stu[i].no, &stu[i].r9KzbQGS1O, &stu[i].GfsKWx);
        stu[i].W4HSKgVs3lv9 = stu[i].r9KzbQGS1O + stu[i].GfsKWx;
    }
    {
        i = 133 - 133;
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
        while (i < 3) {
            max = stu[i].W4HSKgVs3lv9;
            rdusBplW = i;
            {
                j = 382 - 381;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < u9ADqUyxBwr) {
                    if (stu[j].W4HSKgVs3lv9 > max) {
                        max = stu[j].W4HSKgVs3lv9;
                        rdusBplW = j;
                    }
                    j++;
                };
            }
            if (rdusBplW != i) {
                sjx20bOr3n = stu[i];
                stu[i] = stu[rdusBplW];
                stu[rdusBplW] = sjx20bOr3n;
            }
            printf ("%d %d\n", stu[i].no, stu[i].W4HSKgVs3lv9);
            i = i + 1;
        };
    }
    return 0;
}

