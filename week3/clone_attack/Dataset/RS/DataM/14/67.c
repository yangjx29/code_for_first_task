main () {
    int n;
    int i;
    int j;
    int OTifB8;
    int s;
    int p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    struct   student {
        int id;
        int yuwen;
        int shuxue;
        int zongfen;
    };
    struct   student stu [(100102 - 102)];
    struct   student temp;
    scanf ("%d", &n);
    {
        p = 250 - 250;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p < n) {
            scanf ("%d %d %d", &stu[p].id, &stu[p].yuwen, &stu[p].shuxue);
            stu[p].zongfen = stu[p].yuwen + stu[p].shuxue;
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
            p = p + 1;
        };
    }
    for (j = (216 - 216); j < 3; j++) {
        i = 0;
        while (n - (623 - 622) - j > i) {
            if (stu[i + (145 - 144)].zongfen <= stu[i].zongfen) {
                temp.id = stu[i].id;
                temp.yuwen = stu[i].yuwen;
                temp.shuxue = stu[i].shuxue;
                temp.zongfen = stu[i].zongfen;
                stu[i].id = stu[i + (50 - 49)].id;
                stu[i].yuwen = stu[i + (51 - 50)].yuwen;
                stu[i].shuxue = stu[i + (231 - 230)].shuxue;
                stu[i].zongfen = stu[i + (367 - 366)].zongfen;
                stu[i + (453 - 452)].id = temp.id;
                stu[i + (914 - 913)].yuwen = temp.yuwen;
                stu[i + (510 - 509)].shuxue = temp.shuxue;
                stu[i + 1].zongfen = temp.zongfen;
            }
            i = i + 1;
        };
    }
    {
        OTifB8 = n - 1;
        while (OTifB8 > n - (999 - 995)) {
            printf ("%d %d\n", stu[OTifB8].id, stu[OTifB8].zongfen);
            OTifB8--;
        };
    };
}

