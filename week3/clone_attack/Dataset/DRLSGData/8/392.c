static int a [100], aF3xsmjwbd [100], yJNclp4DT [300];
char P42HhwznOj;

void  zOvN8x () {
    static int XRiGSgm7OkH9, n, ordy549qzU;
    scanf ("%d%d", &XRiGSgm7OkH9, &n);
    for (ordy549qzU = 0; 99 >= ordy549qzU; ordy549qzU = ordy549qzU + 1) {
        a[ordy549qzU] = 0;
        aF3xsmjwbd[ordy549qzU] = 0;
    }
    for (ordy549qzU = 0; P42HhwznOj != '\n'; ordy549qzU++) {
        scanf ("%d%c", &a[ordy549qzU], &P42HhwznOj);
    }
    P42HhwznOj = 1;
    for (ordy549qzU = 0; P42HhwznOj != '\n'; ordy549qzU++) {
        scanf ("%d%c", &aF3xsmjwbd[ordy549qzU], &P42HhwznOj);
    }
}

void  n245f6G9W () {
    int ordy549qzU;
    int dQYNs8;
    int JVmrSQ1NIq;
    for (ordy549qzU = 0; a[ordy549qzU] != '\0'; ordy549qzU++) {
        for (dQYNs8 = ordy549qzU + 1; a[dQYNs8] != '\0'; dQYNs8 = dQYNs8 + 1) {
            if (a[dQYNs8] < a[ordy549qzU]) {
                JVmrSQ1NIq = a[ordy549qzU];
                a[ordy549qzU] = a[dQYNs8];
                a[dQYNs8] = JVmrSQ1NIq;
            }
        }
    }
    for (ordy549qzU = 0; aF3xsmjwbd[ordy549qzU] != '\0'; ordy549qzU++) {
        for (dQYNs8 = ordy549qzU + 1; aF3xsmjwbd[dQYNs8] != '\0'; dQYNs8++) {
            if (aF3xsmjwbd[dQYNs8] < aF3xsmjwbd[ordy549qzU]) {
                JVmrSQ1NIq = aF3xsmjwbd[ordy549qzU];
                aF3xsmjwbd[ordy549qzU] = aF3xsmjwbd[dQYNs8];
                aF3xsmjwbd[dQYNs8] = JVmrSQ1NIq;
            }
        }
    }
}

void  SNT8DWYKv () {
    static int ordy549qzU, dQYNs8, LsZfrT3yv;
    for (ordy549qzU = 0; 299 >= ordy549qzU; ordy549qzU++) {
        yJNclp4DT[ordy549qzU] = 0;
    }
    for (ordy549qzU = 0; a[ordy549qzU] != '\0'; ordy549qzU++) {
        yJNclp4DT[ordy549qzU] = a[ordy549qzU];
    }
    for (dQYNs8 = 0; aF3xsmjwbd[dQYNs8] != '\0'; dQYNs8++) {
        yJNclp4DT[dQYNs8 + ordy549qzU] = aF3xsmjwbd[dQYNs8];
    }
}

void  fmht6Dzj8 () {
    int ordy549qzU;
    printf ("%d", yJNclp4DT[0]);
    for (ordy549qzU = 1; yJNclp4DT[ordy549qzU] != 0; ordy549qzU++)
        printf (" %d", yJNclp4DT[ordy549qzU]);
}

int main () {
    zOvN8x ();
    n245f6G9W ();
    SNT8DWYKv ();
    fmht6Dzj8 ();
}

