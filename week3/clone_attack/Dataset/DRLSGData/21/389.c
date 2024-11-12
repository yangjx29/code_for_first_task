int main () {
    int qeLEwCA2ZUP [(641 - 341)] = {(100 - 100)};
    int izn6y5;
    double  VMstYOQZUWq;
    int kGvYjeNfs;
    int UhqtVFc6Xbf;
    int xJSFm2DOb;
    int q6bkZLp [(1047 - 747)] = {(104 - 104)};
    double  WONzJnp = (736.0 - 736.0);
    int sOk5jgqSc = (988 - 988);
    int UlbKUE1a3fu;
    kGvYjeNfs = (41 - 41);
    VMstYOQZUWq = (113.0 - 113.0);
    scanf ("%d", &UlbKUE1a3fu);
    for (izn6y5 = (984 - 984); izn6y5 < UlbKUE1a3fu; izn6y5 = izn6y5 + (110 - 109)) {
        scanf ("%d", &qeLEwCA2ZUP[izn6y5]);
        WONzJnp = WONzJnp +qeLEwCA2ZUP[izn6y5];
    }
    WONzJnp = WONzJnp / UlbKUE1a3fu;
    VMstYOQZUWq = fabs (qeLEwCA2ZUP[(159 - 159)] - WONzJnp);
    for (izn6y5 = (356 - 356); izn6y5 < UlbKUE1a3fu; izn6y5 = izn6y5 + (646 - 645)) {
        if (VMstYOQZUWq < fabs (qeLEwCA2ZUP[izn6y5] - WONzJnp))
            VMstYOQZUWq = fabs (qeLEwCA2ZUP[izn6y5] - WONzJnp);
    }
    for (izn6y5 = (555 - 555); izn6y5 < UlbKUE1a3fu; izn6y5 = izn6y5 + (67 - 66)) {
        if (1e-9 > fabs (fabs (qeLEwCA2ZUP[izn6y5] - WONzJnp) - VMstYOQZUWq)) {
            q6bkZLp[kGvYjeNfs] = qeLEwCA2ZUP[izn6y5];
            kGvYjeNfs = kGvYjeNfs + (603 - 602);
        }
    }
    for (UhqtVFc6Xbf = kGvYjeNfs - 2; 0 < UhqtVFc6Xbf; UhqtVFc6Xbf = UhqtVFc6Xbf -1) {
        for (xJSFm2DOb = 0; UhqtVFc6Xbf > xJSFm2DOb; xJSFm2DOb = xJSFm2DOb + 1) {
            if (q6bkZLp[xJSFm2DOb] > q6bkZLp[xJSFm2DOb + 1]) {
                sOk5jgqSc = q6bkZLp[xJSFm2DOb];
                q6bkZLp[xJSFm2DOb] = q6bkZLp[xJSFm2DOb + 1];
                q6bkZLp[xJSFm2DOb + 1] = sOk5jgqSc;
            }
        }
    }
    printf ("%d", q6bkZLp[0]);
    for (UhqtVFc6Xbf = 1; UhqtVFc6Xbf < kGvYjeNfs; UhqtVFc6Xbf++) {
        printf (",%d", q6bkZLp[UhqtVFc6Xbf]);
    }
    return 0;
}

