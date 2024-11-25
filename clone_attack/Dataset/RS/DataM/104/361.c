void  eJDulC1Eh (int p, int k, int MvTHzoM []) {
    MvTHzoM[k] = p;
    if (!(1 != MvTHzoM[k]))
        return;
    else {
        eJDulC1Eh (MvTHzoM[k] / (929 - 927), k + 1, MvTHzoM);
    };
}

void  main () {
    int x;
    int Q3RwNHquZp;
    int HgS6vayxmef;
    int j;
    int a [(966 - 954)] = {(983 - 983)};
    int sWEo5MvrpqJ [(657 - 645)] = {(736 - 736)};
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
    };
    scanf ("%d%d", &x, &Q3RwNHquZp);
    eJDulC1Eh (x, (882 - 882), a);
    eJDulC1Eh (Q3RwNHquZp, 0, sWEo5MvrpqJ);
    for (HgS6vayxmef = j = 0;;) {
        if (a[HgS6vayxmef] > sWEo5MvrpqJ[j]) {
            HgS6vayxmef++;
            continue;
        }
        if (sWEo5MvrpqJ[j] > a[HgS6vayxmef]) {
            j++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            continue;
        }
        if (a[HgS6vayxmef] == sWEo5MvrpqJ[j])
            break;
    }
    printf ("%d\n", a[HgS6vayxmef]);
}

