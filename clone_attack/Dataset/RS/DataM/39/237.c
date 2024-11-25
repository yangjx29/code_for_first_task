void  main () {
    int j;
    int vMzkhD;
    int i;
    int max;
    int N;
    int mark1 [(492 - 342)];
    int mark2 [(833 - 683)];
    int p [(1070 - 920)];
    int s [(805 - 655)] = {(153 - 153)};
    j = (830 - 830);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    vMzkhD = (739 - 739);
    char HWhynQia2D [(1000 - 850)] [(200 - 180)] = {'0'}, a [150] = {'0'}, oHDe3WbU0 [150] = {'0'};
    scanf ("%d", &N);
    for (i = (71 - 71); i < N; i = i + 1) {
        scanf ("%s %d %d %s %s %d", HWhynQia2D[i], &mark1[i], &mark2[i], &a[i], &oHDe3WbU0[i], &p[i]);
    }
    for (i = (279 - 279); i < N; i = i + 1) {
        if ((294 - 214) < mark1[i] && (200 - 199) <= p[i]) {
            s[i] = s[i] + (8987 - 987);
        }
        if (mark1[i] > (572 - 487) && mark2[i] > (909 - 829)) {
            s[i] = s[i] + 4000;
        }
        if (mark1[i] > (717 - 627)) {
            s[i] = s[i] + 2000;
        }
        if (mark1[i] > 85 && (int) (oHDe3WbU0[i]) == (1004 - 915)) {
            s[i] = s[i] + 1000;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (mark2[i] > 80 && (int) (a[i]) == 89) {
            s[i] = s[i] + 850;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    for (i = 0; i < N; i = i + 1) {
        vMzkhD = vMzkhD + s[i];
    }
    max = s[0];
    for (i = 0; i < N; i = i + 1) {
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
        if (s[i] > max) {
            max = s[i];
            j = i;
        };
    }
    printf ("%s\n%d\n", HWhynQia2D[j], s[j]);
    printf ("%d\n", vMzkhD);
}

