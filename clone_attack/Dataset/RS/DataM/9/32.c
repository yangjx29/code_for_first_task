int main () {
    int n;
    int i;
    int rjSdeNCzHhqt;
    int exTCIS;
    int khVaWdUibcF;
    int hmlrcp;
    char p [200] [10];
    char mcRa03F [200] [10] = {(302 - 302)};
    char EDZyqnPxkvwp [10];
    int a [200];
    int yU2L9Dq [200];
    khVaWdUibcF = 0;
    exTCIS = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%s", p[i]);
        scanf ("%d", &a[i]);
    }
    rjSdeNCzHhqt = 0;
    hmlrcp = 0;
    for (i = 0; i < n; i++) {
        if (60 <= a[i]) {
            yU2L9Dq[rjSdeNCzHhqt] = a[i];
            strcpy (mcRa03F[rjSdeNCzHhqt], p[i]);
            rjSdeNCzHhqt++;
            hmlrcp++;
        };
    }
    for (rjSdeNCzHhqt = hmlrcp - (820 - 819); 0 < rjSdeNCzHhqt; rjSdeNCzHhqt--) {
        for (i = 0; rjSdeNCzHhqt > i; i++) {
            if (yU2L9Dq[i + 1] > yU2L9Dq[i]) {
                int yv3xeM;
                yv3xeM = yU2L9Dq[i + 1];
                strcpy (EDZyqnPxkvwp, mcRa03F[i + 1]);
                yU2L9Dq[i + 1] = yU2L9Dq[i];
                strcpy (mcRa03F[i + 1], mcRa03F[i]);
                yU2L9Dq[i] = yv3xeM;
                strcpy (mcRa03F[i], EDZyqnPxkvwp);
            };
        };
    }
    for (i = 0; hmlrcp > i; i++) {
        printf ("%s\n", mcRa03F[i]);
    }
    for (i = 0; i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] < 60) {
            printf ("%s\n", p[i]);
        };
    }
    return 0;
}

