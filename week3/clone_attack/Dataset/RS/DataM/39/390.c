int main () {
    int t;
    int ZbxEyfv;
    int wboh91;
    int eYweHP;
    int m [100];
    int J1NuCf [100];
    int vQXNwWTVl5;
    t = (830 - 830);
    struct   student {
        char WhyoEfBrnK9 [20], I5oV4Xx, w;
        int score, ZZUIcVEMi6, paper;
    }
    n [100];
    scanf ("%d", &ZbxEyfv);
    for (wboh91 = (626 - 626); ZbxEyfv > wboh91; wboh91++) {
        scanf ("%s %d %d %c %c %d", n[wboh91].WhyoEfBrnK9, &n[wboh91].score, &n[wboh91].ZZUIcVEMi6, &n[wboh91].I5oV4Xx, &n[wboh91].w, &n[wboh91].paper);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (wboh91 = 0; ZbxEyfv > wboh91; wboh91++) {
        m[wboh91] = 0;
        if (n[wboh91].ZZUIcVEMi6 > 80 && !('Y' != n[wboh91].I5oV4Xx))
            m[wboh91] = m[wboh91] + 850;
        if (n[wboh91].score > 85 && n[wboh91].w == 'Y')
            m[wboh91] = m[wboh91] + 1000;
        if (n[wboh91].score > 90)
            m[wboh91] = m[wboh91] + 2000;
        if (n[wboh91].score > 85 && n[wboh91].ZZUIcVEMi6 > 80)
            m[wboh91] = m[wboh91] + 4000;
        if (n[wboh91].score > 80 && n[wboh91].paper)
            m[wboh91] = m[wboh91] + 8000;
    }
    for (wboh91 = 0; wboh91 < ZbxEyfv; wboh91++)
        J1NuCf[wboh91] = wboh91;
    {
        wboh91 = 0;
        while (wboh91 < ZbxEyfv) {
            {
                eYweHP = wboh91;
                while (eYweHP < ZbxEyfv) {
                    if (m[J1NuCf[wboh91]] < m[J1NuCf[eYweHP]]) {
                        vQXNwWTVl5 = J1NuCf[wboh91];
                        J1NuCf[wboh91] = J1NuCf[eYweHP];
                        J1NuCf[eYweHP] = vQXNwWTVl5;
                    }
                    eYweHP = eYweHP + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            wboh91++;
        };
    }
    printf ("%s\n%d\n", n[J1NuCf[0]].WhyoEfBrnK9, m[J1NuCf[0]]);
    for (wboh91 = 0; wboh91 < ZbxEyfv; wboh91++)
        t = t + m[wboh91];
    printf ("%d", t);
    return 0;
}

