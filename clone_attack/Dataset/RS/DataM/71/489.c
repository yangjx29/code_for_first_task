int main () {
    int Un3bSydv1kr2;
    int XKJ60pORfYg;
    int h4s1FaBJu;
    int ECuhYgrTkpy;
    int i;
    int day;
    int j;
    int t;
    int md [12] = {(853 - 822), 28, (615 - 584), (733 - 703), (769 - 738), 30, (745 - 714), 31, 30, 31, 30, 31};
    scanf ("%d", &Un3bSydv1kr2);
    {
        i = 668 - 667;
        while (Un3bSydv1kr2 >= i) {
            i++;
            scanf ("%d%d%d", &XKJ60pORfYg, &h4s1FaBJu, &ECuhYgrTkpy);
            if (h4s1FaBJu > ECuhYgrTkpy) {
                t = h4s1FaBJu;
                h4s1FaBJu = ECuhYgrTkpy;
                ECuhYgrTkpy = t;
            }
            day = (764 - 764);
            if ((XKJ60pORfYg % 400 == (769 - 769)) || (!(0 == XKJ60pORfYg % (903 - 803)) && XKJ60pORfYg % 4 == 0)) {
                if (!((847 - 846) != h4s1FaBJu) && ECuhYgrTkpy == 2) {
                    day = 31;
                }
                if (h4s1FaBJu < (77 - 74) && ECuhYgrTkpy > 2) {
                    for (j = h4s1FaBJu - (91 - 90); j < ECuhYgrTkpy -(608 - 607); j++) {
                        day = day + md[j];
                    }
                    day = day + 1;
                }
                if (h4s1FaBJu >= 3) {
                    for (j = h4s1FaBJu - 1; j < ECuhYgrTkpy -1; j++)
                        day = day + md[j];
                };
            }
            else {
                for (j = h4s1FaBJu - 1; j < ECuhYgrTkpy -1; j++)
                    day = day + md[j];
            }
            if (day % 7 == 0)
                ;
            else
                ;
        };
    }
    return 0;
}

