struct   stu {
    int id;
    int chn;
    int math;
    int sum;
};
int main () {
    int EXY9kuzmLnB, i, j, rank [(624 - 621)];
    struct   stu HogMCp0T6h [(100560 - 560)];
    scanf ("%d", &EXY9kuzmLnB);
    {
        i = 898 - 898;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < EXY9kuzmLnB) {
            scanf ("%d%d%d", &HogMCp0T6h[i].id, &HogMCp0T6h[i].chn, &HogMCp0T6h[i].math);
            HogMCp0T6h[i].sum = HogMCp0T6h[i].chn + HogMCp0T6h[i].math;
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
            i = i + 1;
        };
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
    {
        i = 745 - 745;
        while (i < (832 - 829)) {
            rank[i] = (958 - 958);
            {
                j = 598 - 598;
                while (j < EXY9kuzmLnB) {
                    if (HogMCp0T6h[j].sum > HogMCp0T6h[rank[i]].sum)
                        rank[i] = j;
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            HogMCp0T6h[rank[i]].sum = -HogMCp0T6h[rank[i]].sum;
            i = i + 1;
        };
    }
    for (i = 0; i < 3; i = i + 1) {
        printf ("%d %d\n", HogMCp0T6h[rank[i]].id, -HogMCp0T6h[rank[i]].sum);
    }
    return 0;
}

