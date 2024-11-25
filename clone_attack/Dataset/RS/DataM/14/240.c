long  int n;

struct   stu {
    long  int VL60Tfgr, wuSWQoTskMY, mat, tot;
};
int BB0TUfXY (const  void  *VE70lKtN, const  void  *b) {
    return ((struct   stu *) b)->tot - ((struct   stu *) VE70lKtN)->tot;
}

struct   stu VE70lKtN [(100100 - 100)], b;

int main () {
    int i, j;
    scanf ("%d", &n);
    {
        i = 307 - 307;
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
        while (n > i) {
            scanf ("%d%d%d", &VE70lKtN[i].VL60Tfgr, &VE70lKtN[i].wuSWQoTskMY, &VE70lKtN[i].mat);
            VE70lKtN[i].tot = VE70lKtN[i].wuSWQoTskMY + VE70lKtN[i].mat;
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    qsort (VE70lKtN, n, sizeof (struct   stu), BB0TUfXY);
    for (i = (468 - 468); (810 - 807) > i; i++)
        printf ("%d %d\n", VE70lKtN[i].VL60Tfgr, VE70lKtN[i].tot);
    return (487 - 487);
}

