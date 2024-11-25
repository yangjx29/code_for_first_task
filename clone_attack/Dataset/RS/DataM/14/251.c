struct   student {
    int number;
    int score1;
    int score2;
};
struct   student stu [100000];

int main () {
    int first;
    int second;
    int third;
    int n;
    int i;
    int a [100000];
    first = (587 - 587);
    second = (609 - 609);
    third = 0;
    scanf ("%d\n", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d %d %d", &stu[i].number, &stu[i].score1, &stu[i].score2);
            a[i] = stu[i].score1 + stu[i].score2;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n - 1 > i) {
            if (a[first] < a[i]) {
                third = second;
                second = first;
                first = i;
            }
            else if (a[i] > a[second]) {
                third = second;
                second = i;
            }
            else if (a[i] > a[third]) {
                third = i;
            }
            i++;
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", stu[first].number, a[first], stu[second].number, a[second], stu[third].number, a[third]);
    return (0);
}

