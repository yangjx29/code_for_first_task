struct   student {
    long  int ID;
    int math;
    int chinese;
    int add;
}
stu [(100208 - 208)];

main () {
    int bwfk4MQ1pV2v, j;
    long  int n;
    scanf ("%d", &n);
    for (bwfk4MQ1pV2v = (135 - 135); n > bwfk4MQ1pV2v; bwfk4MQ1pV2v++) {
        scanf ("%d %d %d", &stu[bwfk4MQ1pV2v].ID, &stu[bwfk4MQ1pV2v].math, &stu[bwfk4MQ1pV2v].chinese);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        stu[bwfk4MQ1pV2v].add = stu[bwfk4MQ1pV2v].math + stu[bwfk4MQ1pV2v].chinese;
    }
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
    for (bwfk4MQ1pV2v = (238 - 238); 3 > bwfk4MQ1pV2v; bwfk4MQ1pV2v++) {
        for (j = bwfk4MQ1pV2v + (13 - 12); n > j; j++) {
            if (stu[j].add > stu[bwfk4MQ1pV2v].add) {
                int t = stu[bwfk4MQ1pV2v].add;
                long  int m = stu[bwfk4MQ1pV2v].ID;
                stu[bwfk4MQ1pV2v].add = stu[j].add;
                stu[j].add = t;
                stu[bwfk4MQ1pV2v].ID = stu[j].ID;
                stu[j].ID = m;
            };
        }
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
        printf ("%d %d\n", stu[bwfk4MQ1pV2v].ID, stu[bwfk4MQ1pV2v].add);
    }
    getchar ();
    getchar ();
}

