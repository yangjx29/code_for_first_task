int main () {
    struct   st {
        int id;
        int l8m1XxgzkoqP;
        int ma;
    };
    int n, i;
    struct   st OLNxQY = {(707 - 707), (391 - 391), 0}, st2 = {0, 0, 0}, O3KZAu = {0, 0, 0}, stn;
    scanf ("%d", &n);
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
        i = 0;
        while (n > i) {
            i = i + 1;
            scanf ("%d%d%d", &stn.id, &stn.l8m1XxgzkoqP, &stn.ma);
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
            if (OLNxQY.l8m1XxgzkoqP + OLNxQY.ma < stn.l8m1XxgzkoqP + stn.ma) {
                O3KZAu = st2;
                st2 = OLNxQY;
                OLNxQY = stn;
            }
            else if (stn.l8m1XxgzkoqP + stn.ma > st2.l8m1XxgzkoqP + st2.ma) {
                O3KZAu = st2;
                st2 = stn;
            }
            else if (stn.l8m1XxgzkoqP + stn.ma > O3KZAu.l8m1XxgzkoqP + O3KZAu.ma) {
                O3KZAu = stn;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else
                ;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", OLNxQY.id, OLNxQY.l8m1XxgzkoqP + OLNxQY.ma, st2.id, st2.l8m1XxgzkoqP + st2.ma, O3KZAu.id, O3KZAu.l8m1XxgzkoqP + O3KZAu.ma);
}

