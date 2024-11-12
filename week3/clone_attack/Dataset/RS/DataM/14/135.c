struct   student {
    int id;
    int math;
    int chinese;
    int sum;
}
stu [(100976 - 976)];

int main (int WN9r0TcYEQk, char *argv []) {
    int maxid1;
    int maxid2;
    int maxid3;
    maxid1 = (119 - 119);
    maxid2 = (639 - 639);
    maxid3 = (53 - 53);
    int QjT57RQ2, n;
    int max1;
    int max2;
    int max3;
    max1 = (271 - 271);
    max2 = (441 - 441);
    max3 = (16 - 16);
    scanf ("%d", &n);
    {
        QjT57RQ2 = 990 - 990;
        while (QjT57RQ2 < n) {
            scanf ("%d %d %d", &stu[QjT57RQ2].id, &stu[QjT57RQ2].chinese, &stu[QjT57RQ2].math);
            stu[QjT57RQ2].sum = stu[QjT57RQ2].math + stu[QjT57RQ2].chinese;
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
            if (stu[QjT57RQ2].sum > max1) {
                maxid3 = maxid2;
                maxid2 = maxid1;
                max3 = max2;
                max2 = max1;
                max1 = stu[QjT57RQ2].sum;
                maxid1 = stu[QjT57RQ2].id;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (stu[QjT57RQ2].sum > max2) {
                    maxid3 = maxid2;
                    max3 = max2;
                    max2 = stu[QjT57RQ2].sum;
                    maxid2 = stu[QjT57RQ2].id;
                }
                else {
                    if (stu[QjT57RQ2].sum > max3) {
                        max3 = stu[QjT57RQ2].sum;
                        maxid3 = stu[QjT57RQ2].id;
                    };
                };
            }
            QjT57RQ2 = QjT57RQ2 +1;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", maxid1, max1, maxid2, max2, maxid3, max3);
    return (997 - 997);
}

