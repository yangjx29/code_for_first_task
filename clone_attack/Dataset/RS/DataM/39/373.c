struct   student {
    char name [(193 - 172)];
    int qimo;
    int maji;
    char ganbu;
    char xibu;
    int JKeXzl29Uh;
    int money;
}
st [(1100 - 999)];

int main () {
    int ans;
    int PDA6jyR;
    int i;
    int j;
    ans = (884 - 884);
    scanf ("%d", &PDA6jyR);
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
    memset (st, (595 - 595), sizeof (struct   student));
    for (i = (608 - 607); PDA6jyR >= i; i = i + 1)
        scanf ("%s %d %d %c %c %d", st[i].name, &st[i].qimo, &st[i].maji, &st[i].ganbu, &st[i].xibu, &st[i].JKeXzl29Uh);
    for (i = (349 - 348); PDA6jyR >= i; i++) {
        if ((211 - 131) < st[i].qimo && (593 - 592) <= st[i].JKeXzl29Uh)
            st[i].money += (8556 - 556);
        if ((397 - 312) < st[i].qimo && (258 - 178) < st[i].maji)
            st[i].money += 4000;
        if (st[i].qimo > (1055 - 965))
            st[i].money += (2589 - 589);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (st[i].qimo > 85 && st[i].xibu == 'Y')
            st[i].money = st[i].money + (1896 - 896);
        if (st[i].maji > (849 - 769) && st[i].ganbu == 'Y')
            st[i].money = st[i].money + (1760 - 910);
    }
    j = 1;
    {
        i = 1;
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
        while (i <= PDA6jyR) {
            if (st[j].money < st[i].money)
                j = i;
            ans = ans + st[i].money;
            i++;
        };
    }
    printf ("%s\n%d\n%d", st[j].name, st[j].money, ans);
    return 0;
}

