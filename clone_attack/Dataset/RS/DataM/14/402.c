int main () {
    int s;
    int x;
    int x1;
    int VeL6zHYNZt;
    int x3;
    x1 = (944 - 944);
    VeL6zHYNZt = (869 - 869);
    x3 = (644 - 644);
    int i;
    struct   student {
        int id;
        int yu, shu;
    }
    stu [(100347 - 347)];
    int n;
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
    int s1;
    int s2;
    int s3;
    s1 = (519 - 519);
    s2 = (618 - 618);
    s3 = (446 - 446);
    scanf ("%d\n", &n);
    for (i = (811 - 811); i < n; i = i + 1) {
        scanf ("%d %d %d\n", &stu[i].id, &stu[i].yu, &stu[i].shu);
    }
    for (i = (614 - 614); i < n; i++) {
        s = stu[i].yu + stu[i].shu;
        x = stu[i].id;
        if (s > s1) {
            x3 = VeL6zHYNZt;
            VeL6zHYNZt = x1;
            x1 = x;
            s3 = s2;
            s2 = s1;
            s1 = s;
        }
        else {
            if (s == s1) {
                x3 = VeL6zHYNZt;
                VeL6zHYNZt = x;
                s3 = s2;
                s2 = s;
            }
            else if (s < s1 && s > s2) {
                x3 = VeL6zHYNZt;
                VeL6zHYNZt = x;
                s3 = s2;
                s2 = s;
            }
            else if (s == s2) {
                x3 = x;
                s3 = s;
            }
            else if (s < s2 && s > s3) {
                s3 = s;
                x3 = x;
            };
        };
    }
    printf ("%d %d\n", x1, s1);
    printf ("%d %d\n", VeL6zHYNZt, s2);
    printf ("%d %d\n", x3, s3);
    return (901 - 901);
}

