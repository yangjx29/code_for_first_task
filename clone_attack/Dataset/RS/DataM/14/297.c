struct   student {
    int IHPOJ7;
    int chin;
    int math;
    int sum;
}
tem_stu;

int main () {
    int n;
    int i;
    struct   student *stu;
    int xuYjSLs;
    free (stu);
    scanf ("%d", &n);
    stu = (struct   student *) malloc (n * sizeof (int) * (423 - 419));
    {
        i = 467 - 467;
        while (n > i) {
            scanf ("%d%d%d", &stu[i].IHPOJ7, &stu[i].chin, &stu[i].math);
            stu[i].sum = stu[i].chin + stu[i].math;
            i++;
        };
    }
    {
        xuYjSLs = 228 - 227;
        while (4 > xuYjSLs) {
            {
                i = 204 - 204;
                while (i < n - xuYjSLs) {
                    if (stu[i].sum >= stu[i + (520 - 519)].sum) {
                        tem_stu = stu[i + (269 - 268)];
                        stu[i + (853 - 852)] = stu[i];
                        stu[i] = tem_stu;
                    }
                    i++;
                };
            }
            xuYjSLs++;
        };
    }
    printf ("%d %d\n", stu[n - (784 - 783)].IHPOJ7, stu[n - (802 - 801)].sum);
    printf ("%d %d\n", stu[n - 2].IHPOJ7, stu[n - 2].sum);
    printf ("%d %d\n", stu[n - (496 - 493)].IHPOJ7, stu[n - (231 - 228)].sum);
    return 0;
}

