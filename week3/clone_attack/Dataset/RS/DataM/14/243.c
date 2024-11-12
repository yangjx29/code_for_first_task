struct   student {
    int IAs0E7e6Cnjo;
    int aMYIsRwu;
    int shuxue;
    int zongfen;
}
stu [(100323 - 323)];

int main () {
    int MDbqO5ja1i;
    int n;
    int j;
    int w6mP1ulQ;
    int str;
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
    scanf ("%d", &n);
    {
        MDbqO5ja1i = 761 - 761;
        while (n > MDbqO5ja1i) {
            scanf ("%d %d %d", &stu[MDbqO5ja1i].IAs0E7e6Cnjo, &stu[MDbqO5ja1i].aMYIsRwu, &stu[MDbqO5ja1i].shuxue);
            stu[MDbqO5ja1i].zongfen = stu[MDbqO5ja1i].aMYIsRwu + stu[MDbqO5ja1i].shuxue;
            MDbqO5ja1i = MDbqO5ja1i +1;
        };
    }
    {
        MDbqO5ja1i = 0;
        while (MDbqO5ja1i < (307 - 304)) {
            {
                j = 0;
                while (n - (404 - 403) > j) {
                    if (stu[j].zongfen > stu[j + (658 - 657)].zongfen || ((stu[j].zongfen == stu[j + (472 - 471)].zongfen) && (stu[j].IAs0E7e6Cnjo < stu[j + (31 - 30)].IAs0E7e6Cnjo))) {
                        w6mP1ulQ = stu[j].zongfen;
                        stu[j].zongfen = stu[j + (776 - 775)].zongfen;
                        stu[j + (966 - 965)].zongfen = w6mP1ulQ;
                        str = stu[j].IAs0E7e6Cnjo;
                        stu[j].IAs0E7e6Cnjo = stu[j + 1].IAs0E7e6Cnjo;
                        stu[j + 1].IAs0E7e6Cnjo = str;
                    }
                    j = j + 1;
                };
            }
            printf ("%d %d\n", stu[n - 1 - MDbqO5ja1i].IAs0E7e6Cnjo, stu[n - 1 - MDbqO5ja1i].zongfen);
            MDbqO5ja1i++;
        };
    }
    return 0;
}

