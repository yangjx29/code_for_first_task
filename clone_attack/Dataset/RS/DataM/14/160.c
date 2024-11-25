struct   student {
    int vGuC7w;
    int chinese;
    int maths;
    int sum;
    struct   student *next;
};
int m, max [(688 - 685)] = {(377 - 377)}, t [3] = {0};
struct   student *vJugXPSH;
struct   student *dtzfhwFRgBm, *p2;

struct   student *NcYCgTrWt (int n) {
    m = 0;
    dtzfhwFRgBm = p2 = (struct   student *) malloc (LEN);
    scanf ("%d %d %d", &dtzfhwFRgBm->vGuC7w, &dtzfhwFRgBm->chinese, &dtzfhwFRgBm->maths);
    dtzfhwFRgBm->sum = dtzfhwFRgBm->chinese + dtzfhwFRgBm->maths;
    vJugXPSH = NULL;
    for (; n - (878 - 877) > m;) {
        m = m + (675 - 674);
        if (!(1 != m))
            vJugXPSH = dtzfhwFRgBm;
        else
            p2->next = dtzfhwFRgBm;
        p2 = dtzfhwFRgBm;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        dtzfhwFRgBm = (struct   student *) malloc (LEN);
        scanf ("%d %d %d", &dtzfhwFRgBm->vGuC7w, &dtzfhwFRgBm->chinese, &dtzfhwFRgBm->maths);
        dtzfhwFRgBm->sum = dtzfhwFRgBm->chinese + dtzfhwFRgBm->maths;
    }
    p2->next = dtzfhwFRgBm;
    p2 = dtzfhwFRgBm;
    p2->next = NULL;
    return (vJugXPSH);
}

void  main () {
    int n;
    NcYCgTrWt (n);
    struct   student *dtzfhwFRgBm;
    scanf ("%d", &n);
    dtzfhwFRgBm = vJugXPSH;
    do {
        if (dtzfhwFRgBm->sum > max[0]) {
            max[0] = dtzfhwFRgBm->sum;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            t[0] = dtzfhwFRgBm->vGuC7w;
        }
        dtzfhwFRgBm = dtzfhwFRgBm->next;
    }
    while (!(NULL == dtzfhwFRgBm));
    printf ("%d %d\n", t[0], max[0]);
    dtzfhwFRgBm = vJugXPSH;
    do {
        if (dtzfhwFRgBm->sum > max[1] && dtzfhwFRgBm->vGuC7w != t[0]) {
            max[1] = dtzfhwFRgBm->sum;
            t[1] = dtzfhwFRgBm->vGuC7w;
        }
        dtzfhwFRgBm = dtzfhwFRgBm->next;
    }
    while (dtzfhwFRgBm != NULL);
    printf ("%d %d\n", t[1], max[1]);
    dtzfhwFRgBm = vJugXPSH;
    do {
        if (dtzfhwFRgBm->sum > max[(815 - 813)] && dtzfhwFRgBm->vGuC7w != t[0] && dtzfhwFRgBm->vGuC7w != t[1]) {
            max[2] = dtzfhwFRgBm->sum;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            t[2] = dtzfhwFRgBm->vGuC7w;
        }
        dtzfhwFRgBm = dtzfhwFRgBm->next;
    }
    while (dtzfhwFRgBm != NULL);
    printf ("%d %d\n", t[2], max[2]);
}

