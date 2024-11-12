void  D5AVG19pW6c (int a [], int hovEI1c);

main () {
    int lose;
    int win;
    int tj [1001], qw [1001];
    int hovEI1c, k3VmLhtC, j, k, ijfiTkgIo, money, r, z4ZwdTILiz, qws, ziqo9ZFy, tjs;
    win = 0;
    lose = 0;
    for (r = 0;; r = r + (152 - 151)) {
        scanf ("%d", &hovEI1c);
        if (!(0 != hovEI1c))
            goto label;
        ziqo9ZFy = 0;
        z4ZwdTILiz = 0;
        for (k3VmLhtC = 0; hovEI1c > k3VmLhtC; k3VmLhtC = k3VmLhtC + 1)
            scanf ("%d", &tj[k3VmLhtC]);
        {
            k3VmLhtC = 0;
            for (; hovEI1c > k3VmLhtC;) {
                scanf ("%d", &qw[k3VmLhtC]);
                k3VmLhtC = k3VmLhtC + 1;
            }
        }
        D5AVG19pW6c (tj, hovEI1c);
        D5AVG19pW6c (qw, hovEI1c);
        qws = hovEI1c - 1;
        tjs = hovEI1c - 1;
        for (k3VmLhtC = 0; k3VmLhtC < hovEI1c; k3VmLhtC++) {
            if (qw[z4ZwdTILiz] < tj[ziqo9ZFy]) {
                win = win + 1;
                z4ZwdTILiz = z4ZwdTILiz + 1;
                ziqo9ZFy = ziqo9ZFy + 1;
            }
            else if (tj[tjs] > qw[qws]) {
                win++;
                tjs = tjs - 1;
                qws--;
            }
            else {
                if (tj[tjs] != qw[z4ZwdTILiz])
                    lose++;
                z4ZwdTILiz++;
                tjs--;
            }
        }
        money = (win - lose) * 200;
        lose = 0;
        win = 0;
        printf ("%d\n", money);
    }
label :
    ;
}

void  D5AVG19pW6c (int a [], int hovEI1c) {
    int k;
    int k3VmLhtC;
    int ijfiTkgIo;
    int j;
    for (k3VmLhtC = 0; k3VmLhtC < hovEI1c - 1; k3VmLhtC++) {
        k = k3VmLhtC;
        for (j = k3VmLhtC + 1; j < hovEI1c; j = j + 1) {
            if (a[j] > a[k])
                k = j;
            else if (a[j] == a[k])
                continue;
        }
        ijfiTkgIo = a[k];
        a[k] = a[k3VmLhtC];
        a[k3VmLhtC] = ijfiTkgIo;
    }
}

