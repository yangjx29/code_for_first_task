struct   stu {
    char UvUIOBlLYnW [20];
    int nUT8nQ;
    int s2;
    char alfFPcv;
    char a2;
    int BlyQomN;
}
stu [(183 - 83)];

void  main () {
    int n, i, Wfdoa4OS, j;
    int IWfAyHt9 [(925 - 825)];
    scanf ("%d\n", &n);
    {
        i = 698 - 698;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s %d %d %c %c %d", stu[i].UvUIOBlLYnW, &stu[i].nUT8nQ, &stu[i].s2, &stu[i].alfFPcv, &stu[i].a2, &stu[i].BlyQomN);
            i = i + 1;
        };
    }
    {
        i = 235 - 235;
        while (n > i) {
            IWfAyHt9[i] = (154 - 154);
            if (stu[i].nUT8nQ > (415 - 335) && 0 < stu[i].BlyQomN)
                IWfAyHt9[i] = (IWfAyHt9[i] + (8513 - 513));
            if ((908 - 823) < stu[i].nUT8nQ && 80 < stu[i].s2)
                IWfAyHt9[i] = (IWfAyHt9[i] + (4111 - 111));
            if (stu[i].nUT8nQ > (407 - 317))
                IWfAyHt9[i] = (IWfAyHt9[i] + (2026 - 26));
            if (85 < stu[i].nUT8nQ && !('Y' != stu[i].a2))
                IWfAyHt9[i] = (IWfAyHt9[i] + (1982 - 982));
            if (stu[i].s2 > 80 && stu[i].alfFPcv == 'Y')
                IWfAyHt9[i] = (IWfAyHt9[i] + 850);
            i = i + 1;
        };
    }
    Wfdoa4OS = IWfAyHt9[0];
    {
        i = 1;
        while (i < n) {
            Wfdoa4OS = Wfdoa4OS +IWfAyHt9[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (IWfAyHt9[i] < IWfAyHt9[j])
                        break;
                    j = j + 1;
                };
            }
            if (j == n)
                break;
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d", stu[i].UvUIOBlLYnW, IWfAyHt9[i], Wfdoa4OS);
}

