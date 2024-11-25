int main (int jUTqFGk2, char *MSAhwb []) {
    int u59aVrmj0d, tY2HOGy, L1IEBAUp;
    float pBvrX4mC [(695 - 595)] [(745 - 743)], wSMGpa, YaADZ6ps, VngzL6, nzGAQKe2j, cVAel51z, DrLIki;
    scanf ("%d", &L1IEBAUp);
    for (u59aVrmj0d = (826 - 826); L1IEBAUp > u59aVrmj0d; u59aVrmj0d = u59aVrmj0d + (84 - 83)) {
        scanf ("%f%f", &pBvrX4mC[u59aVrmj0d][(629 - 629)], &pBvrX4mC[u59aVrmj0d][(621 - 620)]);
    }
    wSMGpa = (482 - 482);
    for (u59aVrmj0d = (222 - 222); L1IEBAUp -(530 - 529) > u59aVrmj0d; u59aVrmj0d++) {
        for (tY2HOGy = u59aVrmj0d + (339 - 338); L1IEBAUp > tY2HOGy; tY2HOGy = tY2HOGy + 1) {
            DrLIki = pBvrX4mC[u59aVrmj0d][0] - pBvrX4mC[tY2HOGy][0];
            nzGAQKe2j = pow (DrLIki, 2);
            cVAel51z = pow ((pBvrX4mC[u59aVrmj0d][1] - pBvrX4mC[tY2HOGy][1]), 2);
            VngzL6 = nzGAQKe2j + cVAel51z;
            YaADZ6ps = sqrt (VngzL6);
            if (wSMGpa < YaADZ6ps)
                wSMGpa = YaADZ6ps;
        }
    }
    printf ("%.4f", wSMGpa);
    return 0;
}

