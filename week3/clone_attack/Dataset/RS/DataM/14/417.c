struct   student {
    int dUluHTk;
    int uFwIBOq;
    int JxZfjuEV;
    int tqEiVJ;
};
int main () {
    int vT4VKRkFS2c, r3FMuz4, V28vnwIbS, GkBH8gtWZ;
    struct   student stu [100001];
    scanf ("%d", &vT4VKRkFS2c);
    {
        r3FMuz4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vT4VKRkFS2c > r3FMuz4) {
            scanf ("%d %d %d", &stu[r3FMuz4].dUluHTk, &stu[r3FMuz4].uFwIBOq, &stu[r3FMuz4].JxZfjuEV);
            stu[r3FMuz4].tqEiVJ = stu[r3FMuz4].uFwIBOq + stu[r3FMuz4].JxZfjuEV;
            r3FMuz4 = r3FMuz4 + 1;
        };
    }
    {
        r3FMuz4 = 704 - 703;
        while (4 > r3FMuz4) {
            {
                GkBH8gtWZ = 0;
                while (GkBH8gtWZ < vT4VKRkFS2c - r3FMuz4) {
                    if (stu[GkBH8gtWZ +1].tqEiVJ <= stu[GkBH8gtWZ].tqEiVJ) {
                        stu[100000] = stu[GkBH8gtWZ +1];
                        stu[GkBH8gtWZ +1] = stu[GkBH8gtWZ];
                        stu[GkBH8gtWZ] = stu[100000];
                    }
                    GkBH8gtWZ++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            r3FMuz4 = r3FMuz4 + 1;
        };
    }
    {
        r3FMuz4 = vT4VKRkFS2c - 1;
        while (r3FMuz4 > vT4VKRkFS2c - 4) {
            printf ("%d %d\n", stu[r3FMuz4].dUluHTk, stu[r3FMuz4].tqEiVJ);
            r3FMuz4--;
        };
    }
    return 0;
}

