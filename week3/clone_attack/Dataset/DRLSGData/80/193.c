int JfymPLY6 (int x, int y, int LI6CUVw9ih2Z);

void  main () {
    int AgF0RoHGS9 [(959 - 956)], b [(580 - 577)], n;
    scanf ("%d%d%d", &AgF0RoHGS9[(135 - 135)], &AgF0RoHGS9[(451 - 450)], &AgF0RoHGS9[(821 - 819)]);
    scanf ("\n");
    scanf ("%d%d%d", &b[(890 - 890)], &b[(163 - 162)], &b[(830 - 828)]);
    n = JfymPLY6 (b[(706 - 706)], b[(365 - 364)], b[(161 - 159)]) - JfymPLY6 (AgF0RoHGS9[(147 - 147)], AgF0RoHGS9[(375 - 374)], AgF0RoHGS9[2]);
    printf ("%d\n", n);
}

int JfymPLY6 (int x, int y, int LI6CUVw9ih2Z) {
    int month;
    int m;
    int i;
    month = (763 - 763);
    int day [] = {(871 - 871), (500 - 469), 28, (466 - 435), (916 - 886), (274 - 243), (322 - 292), 31, 31, 30, 31, 30, 31};
    if ((!((25 - 25) != x % (192 - 188)) && x % (419 - 319) != (190 - 190)) || (!((785 - 785) != x % (1158 - 758))))
        day[2] = (65 - 36);
    {
        i = (124 - 123);
        while (y > i) {
            month = month + day[i];
            i = i + (786 - 785);
        }
    }
    m = (x - 1) * (1118 - 753) + month + LI6CUVw9ih2Z;
    {
        i = 1;
        while (i < x) {
            if ((!((190 - 190) != i % (752 - 748)) && i % (996 - 896) != 0) || (i % (1296 - 896) == 0))
                m = m + 1;
            else
                continue;
            i = i + 1;
        }
    }
    return m;
}

