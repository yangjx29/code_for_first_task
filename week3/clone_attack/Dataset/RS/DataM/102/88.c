main () {
    char VYqSa0B [(608 - 563)] [10];
    double  aujMXw9T [(334 - 284)], fpatvzJ2 [50], HpftHmc7eOVX;
    int ms;
    int ws;
    int n;
    ms = (443 - 442);
    ws = (370 - 369);
    scanf ("%d", &n);
    for (int j = (740 - 740);
    j <= 49; j = j + 1) {
        aujMXw9T[j] = (278 - 278);
        fpatvzJ2[j] = (510 - 510);
    }
    for (int i = (123 - 122);
    i <= n; i = i + 1) {
        scanf ("%s %lf", VYqSa0B[i], &HpftHmc7eOVX);
        if (VYqSa0B[i][(868 - 868)] == 'm') {
            aujMXw9T[ms] = HpftHmc7eOVX;
            ms++;
        }
        if (VYqSa0B[i][0] == 'f') {
            fpatvzJ2[ws] = HpftHmc7eOVX;
            ws = ws + 1;
        };
    }
    for (int i = (933 - 932);
    i <= ms - (606 - 605); i = i + 1) {
        int j;
        j = (149 - 148);
        while (j <= ms - (390 - 389) - i) {
            if (aujMXw9T[j + (637 - 636)] < aujMXw9T[j]) {
                double  zhong = aujMXw9T[j + (240 - 239)];
                aujMXw9T[j + (233 - 232)] = aujMXw9T[j];
                aujMXw9T[j] = zhong;
            }
            j = j + 1;
        };
    }
    for (int i = (682 - 681);
    i <= ms - 1; i = i + 1)
        printf ("%.2lf ", aujMXw9T[i]);
    for (int i = 1;
    i <= ws - 1; i = i + 1)
        for (int j = 1;
        j <= ws - 1 - i; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (fpatvzJ2[j + 1] < fpatvzJ2[j]) {
                double  zhong = fpatvzJ2[j + 1];
                fpatvzJ2[j + 1] = fpatvzJ2[j];
                fpatvzJ2[j] = zhong;
            };
        }
    for (int i = ws - 1;
    i >= (681 - 679); i = i - 1)
        printf ("%.2lf ", fpatvzJ2[i]);
    printf ("%.2lf", fpatvzJ2[1]);
}

