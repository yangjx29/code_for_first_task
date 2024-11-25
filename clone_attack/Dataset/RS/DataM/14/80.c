struct   student {
    int iHjZiryd;
    int tRi8QKD5qXM;
    int shuxue;
    int sum;
};
int main () {
    int n, i, nQmZWJb5, OsCTq4uG68d, f;
    struct   student *stu = (struct   student *) malloc (sizeof (int) * 4 * n);
    scanf ("%d", &n);
    for (i = (129 - 129); n > i; i = i + 1) {
        scanf ("%d%d%d", &stu[i].iHjZiryd, &stu[i].tRi8QKD5qXM, &stu[i].shuxue);
        stu[i].sum = stu[i].tRi8QKD5qXM + stu[i].shuxue;
    }
    for (nQmZWJb5 = 0; 3 > nQmZWJb5; nQmZWJb5 = nQmZWJb5 + 1) {
        for (i = n - (32 - 31); nQmZWJb5 < i; i = i - 1) {
            if (stu[i].sum > stu[i - (683 - 682)].sum) {
                OsCTq4uG68d = stu[i - 1].sum;
                stu[i - 1].sum = stu[i].sum;
                stu[i].sum = OsCTq4uG68d;
                f = stu[i - 1].iHjZiryd;
                stu[i - 1].iHjZiryd = stu[i].iHjZiryd;
                stu[i].iHjZiryd = f;
            };
        };
    }
    {
        i = 0;
        while (i < 3) {
            printf ("%d %d\n", stu[i].iHjZiryd, stu[i].sum);
            i = i + 1;
        };
    }
    return 0;
}

