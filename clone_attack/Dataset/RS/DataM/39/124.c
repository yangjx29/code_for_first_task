struct   student {
    int avescore, classscore, paper, nkJC9aG7gf;
    char name [21], lead [(804 - 802)], west [2];
}
stu [100];

main () {
    int max;
    int nkJC9aG7gf;
    int n;
    int Vm5s6Lfy;
    max = 0;
    nkJC9aG7gf = 0;
    char output [21];
    scanf ("%d", &n);
    {
        Vm5s6Lfy = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > Vm5s6Lfy) {
            stu[Vm5s6Lfy].nkJC9aG7gf = 0;
            scanf ("%s%d%d%s%s%d", &stu[Vm5s6Lfy].name, &stu[Vm5s6Lfy].avescore, &stu[Vm5s6Lfy].classscore, &stu[Vm5s6Lfy].lead, &stu[Vm5s6Lfy].west, &stu[Vm5s6Lfy].paper);
            if (stu[Vm5s6Lfy].avescore > 80 && stu[Vm5s6Lfy].paper >= 1) {
                stu[Vm5s6Lfy].nkJC9aG7gf += 8000;
            }
            if (stu[Vm5s6Lfy].avescore > 85 && stu[Vm5s6Lfy].classscore > 80) {
                stu[Vm5s6Lfy].nkJC9aG7gf += 4000;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (stu[Vm5s6Lfy].avescore > 90) {
                stu[Vm5s6Lfy].nkJC9aG7gf += 2000;
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
            if (stu[Vm5s6Lfy].avescore > 85 && stu[Vm5s6Lfy].west[0] == 'Y') {
                stu[Vm5s6Lfy].nkJC9aG7gf += 1000;
            }
            if (stu[Vm5s6Lfy].classscore > 80 && stu[Vm5s6Lfy].lead[0] == 'Y') {
                stu[Vm5s6Lfy].nkJC9aG7gf = stu[Vm5s6Lfy].nkJC9aG7gf + 850;
            }
            nkJC9aG7gf = nkJC9aG7gf + stu[Vm5s6Lfy].nkJC9aG7gf;
            if (max < stu[Vm5s6Lfy].nkJC9aG7gf) {
                max = stu[Vm5s6Lfy].nkJC9aG7gf;
                strcpy (output, stu[Vm5s6Lfy].name);
            }
            Vm5s6Lfy = Vm5s6Lfy +1;
        };
    }
    printf ("%s\n%d\n%d\n", output, max, nkJC9aG7gf);
    return 0;
}

