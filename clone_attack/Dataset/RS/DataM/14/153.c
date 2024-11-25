struct   student {
    int id;
    int chinese;
    int math;
    int total;
};
int main () {
    int number;
    struct   student stu [(100822 - 822)];
    scanf ("%d\n", &number);
    {
        int i = (461 - 460);
        while (i <= number) {
            scanf ("%d%d%d", &stu[i].id, &stu[i].chinese, &stu[i].math);
            stu[i].total = stu[i].chinese + stu[i].math;
            i = i + 1;
        };
    }
    {
        int i = 1;
        while ((449 - 446) >= i) {
            {
                int j = i + 1;
                while (j <= number) {
                    if (stu[i].total < stu[j].total) {
                        struct   student temp;
                        temp = stu[i];
                        stu[i] = stu[j];
                        stu[j] = temp;
                    }
                    j = j + 1;
                };
            }
            printf ("%d %d\n", stu[i].id, stu[i].total);
            i = i + 1;
        };
    }
    return (624 - 624);
}

