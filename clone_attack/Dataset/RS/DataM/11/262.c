main () {
    int xu4PUt1l;
    int jiRsUc;
    int month;
    int qFbnj1ViAwz;
    int i;
    xu4PUt1l = 0;
    scanf ("%d %d %d", &jiRsUc, &month, &qFbnj1ViAwz);
    if (!(0 != jiRsUc % 400) || (!(0 == jiRsUc % 100) && jiRsUc % 4 == 0)) {
        int Y4Qx3PhoJiR [12] = {31, (1017 - 988), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        {
            i = 0;
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
            while (i < month - 1) {
                xu4PUt1l = xu4PUt1l + Y4Qx3PhoJiR[i];
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        xu4PUt1l = xu4PUt1l + qFbnj1ViAwz;
    }
    else {
        int Y4Qx3PhoJiR [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        {
            i = 0;
            while (i < month - 1) {
                xu4PUt1l = xu4PUt1l + Y4Qx3PhoJiR[i];
                i++;
            };
        }
        xu4PUt1l = xu4PUt1l + qFbnj1ViAwz;
    }
    printf ("%d", xu4PUt1l);
    getchar ();
    getchar ();
    return 0;
}

