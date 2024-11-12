int main () {
    struct   student {
        int num, ch, ma, grade;
    }
    sum [100000], h, m, t;
    int i;
    int Xz7TF1gVGt;
    scanf ("%d", &Xz7TF1gVGt);
    {
        i = 0;
        while (Xz7TF1gVGt > i) {
            scanf ("%d%d%d", &sum[i].num, &sum[i].ch, &sum[i].ma);
            sum[i].grade = sum[i].ch + sum[i].ma;
            i++;
        };
    }
    h.grade = m.grade = t.grade = 0;
    for (i = 0; Xz7TF1gVGt > i; i = i + 1) {
        if (h.grade < sum[i].grade) {
            t = m;
            m = h;
            h = sum[i];
        }
        else {
            if (sum[i].grade > m.grade) {
                t = m;
                m = sum[i];
            }
            else {
                if (sum[i].grade > t.grade)
                    t = sum[i];
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", h.num, h.grade, m.num, m.grade, t.num, t.grade);
    return 0;
}

