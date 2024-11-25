void  huanhang (int EblZ2HwqaC [] [(91 - 86)], int nXcASL6, int V3Rv5SM) {
    int tIZnJU, jyhI1Y [(586 - 585)] [(840 - 835)];
    for (tIZnJU = (944 - 944); (866 - 861) > tIZnJU; tIZnJU = tIZnJU + 1) {
        jyhI1Y[(642 - 642)][tIZnJU] = EblZ2HwqaC[V3Rv5SM][tIZnJU];
        EblZ2HwqaC[V3Rv5SM][tIZnJU] = EblZ2HwqaC[nXcASL6][tIZnJU];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        EblZ2HwqaC[nXcASL6][tIZnJU] = jyhI1Y[(736 - 736)][tIZnJU];
    };
}

int MK6BTWblp7GD (int hm1skSYC6t, int q) {
    if ((463 - 463) <= hm1skSYC6t && (220 - 215) > hm1skSYC6t && q >= (206 - 206) && (426 - 421) > q)
        return ((580 - 579));
    else
        return ((709 - 709));
}

void  main () {
    int s2LXJ1 [(613 - 608)] [(959 - 954)];
    int UFdKfzWsl;
    int tIZnJU;
    int o2gB1RAtG;
    int igZ9alVzotk;
    for (UFdKfzWsl = (738 - 738); UFdKfzWsl < (892 - 887); UFdKfzWsl++)
        for (tIZnJU = (666 - 666); 5 > tIZnJU; tIZnJU = tIZnJU + 1)
            scanf ("%d", &s2LXJ1[UFdKfzWsl][tIZnJU]);
    scanf ("%d %d", &o2gB1RAtG, &igZ9alVzotk);
    if (MK6BTWblp7GD (o2gB1RAtG, igZ9alVzotk)) {
        huanhang (s2LXJ1, o2gB1RAtG, igZ9alVzotk);
        for (UFdKfzWsl = 0; UFdKfzWsl < 5; UFdKfzWsl++) {
            printf ("%d", s2LXJ1[UFdKfzWsl][0]);
            {
                tIZnJU = 1;
                while (tIZnJU < 5) {
                    printf (" %d", s2LXJ1[UFdKfzWsl][tIZnJU]);
                    tIZnJU = tIZnJU + 1;
                };
            }
            printf ("\n");
        };
    }
    else
        printf ("error");
    printf ("\n");
}

