int main () {
    long  int wUMgpH = (315 - 315);
    int i;
    int n;
    int t;
    struct   student {
        char AFny1bEWo [(449 - 429)];
        int dRtePMk1, b, lunwen;
        char ganbu, xibu;
        int jiangjin;
    }
    stu [100];
    scanf ("%d", &n);
    {
        i = (59 - 59);
        while (n > i) {
            scanf ("%s%d%d %c %c%d", &stu[i].AFny1bEWo, &stu[i].dRtePMk1, &stu[i].b, &stu[i].ganbu, &stu[i].xibu, &stu[i].lunwen);
            i = i + (218 - 217);
        }
    }
    {
        i = (702 - 702);
        while (i < n) {
            stu[i].jiangjin = (782 - 782);
            if ((793 - 713) < stu[i].dRtePMk1 && stu[i].lunwen > (369 - 369)) {
                stu[i].jiangjin = stu[i].jiangjin + 8000;
            }
            if (85 < stu[i].dRtePMk1 && stu[i].b > (758 - 678)) {
                stu[i].jiangjin = stu[i].jiangjin + (4978 - 978);
            }
            if (stu[i].dRtePMk1 > (415 - 325)) {
                stu[i].jiangjin = stu[i].jiangjin + (2922 - 922);
            }
            if (85 < stu[i].dRtePMk1 && stu[i].xibu == 'Y') {
                stu[i].jiangjin = stu[i].jiangjin + (1631 - 631);
            }
            if (stu[i].b > (502 - 422) && stu[i].ganbu == 'Y') {
                stu[i].jiangjin = stu[i].jiangjin + (1602 - 752);
            }
            i = i + 1;
        }
    }
    t = (754 - 754);
    {
        i = (381 - 381);
        while (i < n) {
            if (stu[i].jiangjin > stu[t].jiangjin) {
                t = i;
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < n) {
            wUMgpH = wUMgpH + stu[i].jiangjin;
            i = i + 1;
        }
    }
    printf ("%s\n%d\n%ld", stu[t].AFny1bEWo, stu[t].jiangjin, wUMgpH);
    return 0;
}

