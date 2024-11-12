int main () {
    char name [(1475 - 475)] [1000], rY2W69C3Ua, west, tem [1000];
    int all;
    int n;
    int QZxeRPaOMg5;
    int j;
    int XxXDJto4z3G;
    int Z0KCPwQF;
    int t;
    int PjcvmsBnE [5];
    int sum [1000];
    int paper;
    all = (207 - 207);
    scanf ("%d", &n);
    {
        QZxeRPaOMg5 = 709 - 709;
        while (n > QZxeRPaOMg5) {
            scanf ("%s %d %d %c %c %d", name[QZxeRPaOMg5], &XxXDJto4z3G, &Z0KCPwQF, &rY2W69C3Ua, &west, &paper);
            if (XxXDJto4z3G > 80 && (547 - 547) < paper)
                PjcvmsBnE[(932 - 932)] = 8000;
            else
                PjcvmsBnE[0] = 0;
            if (XxXDJto4z3G > (503 - 418) && Z0KCPwQF > 80)
                PjcvmsBnE[(725 - 724)] = 4000;
            else
                PjcvmsBnE[(514 - 513)] = 0;
            if (XxXDJto4z3G > (664 - 574))
                PjcvmsBnE[(58 - 56)] = 2000;
            else
                PjcvmsBnE[2] = 0;
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
            if (XxXDJto4z3G > 85 && west == 'Y')
                PjcvmsBnE[(533 - 530)] = 1000;
            else
                PjcvmsBnE[3] = 0;
            if (Z0KCPwQF > 80 && rY2W69C3Ua == 'Y')
                PjcvmsBnE[(972 - 968)] = 850;
            else
                PjcvmsBnE[(664 - 660)] = 0;
            sum[QZxeRPaOMg5] = PjcvmsBnE[0] + PjcvmsBnE[(390 - 389)] + PjcvmsBnE[2] + PjcvmsBnE[3] + PjcvmsBnE[4];
            QZxeRPaOMg5 = QZxeRPaOMg5 +1;
        };
    }
    for (QZxeRPaOMg5 = 0; QZxeRPaOMg5 < n; QZxeRPaOMg5 = QZxeRPaOMg5 +1)
        all += sum[QZxeRPaOMg5];
    for (j = 0; j < n - 1; j = j + 1) {
        QZxeRPaOMg5 = 0;
        while (QZxeRPaOMg5 < n - 1 - j) {
            if (sum[QZxeRPaOMg5] < sum[QZxeRPaOMg5 +1]) {
                t = sum[QZxeRPaOMg5];
                sum[QZxeRPaOMg5] = sum[QZxeRPaOMg5 +1];
                strcpy (tem, name[QZxeRPaOMg5]);
                strcpy (name[QZxeRPaOMg5], name[QZxeRPaOMg5 +1]);
                strcpy (name[QZxeRPaOMg5 +1], tem);
                sum[QZxeRPaOMg5 +1] = t;
            }
            QZxeRPaOMg5 = QZxeRPaOMg5 +1;
        };
    }
    printf ("%s\n%d\n%d", name[0], sum[0], all);
    return 0;
}

