struct   Student {
    char EMiUuc0Zv [20];
    int XvU4xrh81yiB;
    int jzTAEHlt3C;
    char office;
    char eKd3WrI5c;
    int paper;
    int money;
    struct   Student *pMt13Lz;
};
int main () {
    struct   Student *head;
    struct   Student *Fp5DIKW;
    struct   Student *RUyzTjDk3;
    int N;
    int tC2xed9B;
    int n8UiHlJS;
    n8UiHlJS = 0;
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
    head = (struct   Student *) malloc (sizeof (struct   Student));
    Fp5DIKW = head;
    scanf ("%d", &N);
    {
        tC2xed9B = 755 - 755;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tC2xed9B < N) {
            tC2xed9B++;
            scanf ("%s %d %d %c %c %d", Fp5DIKW->EMiUuc0Zv, &Fp5DIKW->XvU4xrh81yiB, &Fp5DIKW->jzTAEHlt3C, &Fp5DIKW->office, &Fp5DIKW->eKd3WrI5c, &Fp5DIKW->paper);
            Fp5DIKW->money = 0;
            if (80 < Fp5DIKW->XvU4xrh81yiB && 0 < Fp5DIKW->paper)
                Fp5DIKW->money = Fp5DIKW->money + 8000;
            if (85 < Fp5DIKW->XvU4xrh81yiB && 80 < Fp5DIKW->jzTAEHlt3C)
                Fp5DIKW->money += 4000;
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
            if (Fp5DIKW->XvU4xrh81yiB > 90)
                Fp5DIKW->money = Fp5DIKW->money + 2000;
            if (Fp5DIKW->XvU4xrh81yiB > 85 && Fp5DIKW->eKd3WrI5c == 'Y')
                Fp5DIKW->money = Fp5DIKW->money + 1000;
            if (Fp5DIKW->jzTAEHlt3C > 80 && Fp5DIKW->office == 'Y')
                Fp5DIKW->money = Fp5DIKW->money + 850;
            Fp5DIKW->pMt13Lz = (struct   Student *) malloc (sizeof (struct   Student));
            Fp5DIKW = Fp5DIKW->pMt13Lz;
        };
    }
    Fp5DIKW = head;
    RUyzTjDk3 = head;
    {
        tC2xed9B = 0;
        while (tC2xed9B < N) {
            tC2xed9B++;
            n8UiHlJS += Fp5DIKW->money;
            if (Fp5DIKW->money > RUyzTjDk3->money) {
                RUyzTjDk3 = Fp5DIKW;
            }
            Fp5DIKW = Fp5DIKW->pMt13Lz;
        };
    }
    printf ("%s\n%d\n%d", RUyzTjDk3->EMiUuc0Zv, RUyzTjDk3->money, n8UiHlJS);
    return 0;
}

