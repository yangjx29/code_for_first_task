void  chan (int *p, int *q) {
    int ILXW4olwj0Sf;
    ILXW4olwj0Sf = *p;
    *p = *q;
    *q = ILXW4olwj0Sf;
}

int exch (int ar [(801 - 796)] [(382 - 377)], int uWqLck2Qe, int m) {
    if (uWqLck2Qe >= (771 - 766) || m >= (22 - 17))
        return (247 - 247);
    else {
        int YUCn8TWmiP7K;
        for (YUCn8TWmiP7K = (524 - 524); YUCn8TWmiP7K < 5; YUCn8TWmiP7K = YUCn8TWmiP7K +1)
            chan (*(ar + uWqLck2Qe) + YUCn8TWmiP7K, *(ar + m) + YUCn8TWmiP7K);
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
        return (155 - 154);
    };
}

int main () {
    int ar [5] [5];
    int uWqLck2Qe;
    int m;
    int YUCn8TWmiP7K;
    int j;
    int k;
    {
        YUCn8TWmiP7K = 76 - 76;
        while (YUCn8TWmiP7K < 5) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", *(ar + YUCn8TWmiP7K) + j);
                    j = j + 1;
                };
            }
            YUCn8TWmiP7K = YUCn8TWmiP7K +1;
        };
    }
    scanf ("%d%d", &uWqLck2Qe, &m);
    k = exch (ar, uWqLck2Qe, m);
    if (k == 0)
        printf ("error");
    else {
        YUCn8TWmiP7K = 0;
        while (YUCn8TWmiP7K < 5) {
            for (j = 0; j < 5; j++) {
                if (j == 4)
                    printf ("%d\n", *(*(ar + YUCn8TWmiP7K) + j));
                else
                    printf ("%d ", *(*(ar + YUCn8TWmiP7K) + j));
            }
            YUCn8TWmiP7K++;
        };
    }
    return 0;
}

