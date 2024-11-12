struct   scholar {
    char akryhqJSsvd [20];
    int c4G3Lrq6cx;
    int iIBpY1b;
    char NlZGuWo6;
    char C8T1p5YQIjan;
    int suI0hsMd;
}
v3JrzNkDX [(622 - 522)];

int main () {
    int aYsTuCHyKt [100] = {(249 - 249)};
    int i, CrYcRL, bs6NLf, aZidMSn, f;
    aZidMSn = 0;
    bs6NLf = 0;
    f = 0;
    scanf ("%d", &CrYcRL);
    i = 0;
    for (i = 0; CrYcRL -1 >= i; i = i + 1) {
        scanf ("%s%d%d%", v3JrzNkDX[i].akryhqJSsvd, &(v3JrzNkDX[i].c4G3Lrq6cx), &(v3JrzNkDX[i].iIBpY1b));
        scanf (" %c", &(v3JrzNkDX[i].NlZGuWo6));
        scanf (" %c", &(v3JrzNkDX[i].C8T1p5YQIjan));
        scanf (" %d", &(v3JrzNkDX[i].suI0hsMd));
    }
    for (i = 0; CrYcRL -1 >= i; i = i + 1) {
        if (80 < v3JrzNkDX[i].c4G3Lrq6cx && 1 <= v3JrzNkDX[i].suI0hsMd) {
            aYsTuCHyKt[i] = aYsTuCHyKt[i] + 8000;
        }
        if ((234 - 149) < v3JrzNkDX[i].c4G3Lrq6cx && v3JrzNkDX[i].iIBpY1b > 80) {
            aYsTuCHyKt[i] = aYsTuCHyKt[i] + 4000;
        }
        if (90 < v3JrzNkDX[i].c4G3Lrq6cx) {
            aYsTuCHyKt[i] = aYsTuCHyKt[i] + 2000;
        }
        if (v3JrzNkDX[i].c4G3Lrq6cx > 85 && !('Y' != v3JrzNkDX[i].C8T1p5YQIjan)) {
            aYsTuCHyKt[i] = aYsTuCHyKt[i] + 1000;
        }
        if (v3JrzNkDX[i].iIBpY1b > 80 && v3JrzNkDX[i].NlZGuWo6 == 'Y') {
            aYsTuCHyKt[i] = aYsTuCHyKt[i] + (1020 - 170);
        }
    }
    for (i = 0; i <= CrYcRL -1; i++) {
        if (aYsTuCHyKt[i] > bs6NLf) {
            bs6NLf = aYsTuCHyKt[i];
            f = i;
        }
    }
    for (i = 0; i <= CrYcRL -1; i++) {
        aZidMSn = aZidMSn + aYsTuCHyKt[i];
    }
    printf ("%s\n%d\n%d\n", v3JrzNkDX[f].akryhqJSsvd, bs6NLf, aZidMSn);
    return 0;
}

