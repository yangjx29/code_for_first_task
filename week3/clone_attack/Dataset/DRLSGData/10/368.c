int main () {
    int i;
    int n;
    int jbWsGa [(606 - 580)];
    int b [(791 - 765)];
    int imax;
    int i1;
    int qKqnc8HDO;
    imax = (743 - 743);
    scanf ("%d", &n);
    {
        i = 785 - 785;
        while (i < n) {
            scanf ("%d", &jbWsGa[i]);
            i = i + 1;
        }
    }
    b[n] = (955 - 955);
    b[n - (837 - 836)] = (241 - 240);
    {
        i = 504 - 502;
        while ((19 - 19) <= i) {
            imax = n;
            {
                i1 = 883 - 882;
                while (i1 < n) {
                    if (b[imax] < b[i1] && jbWsGa[i] >= jbWsGa[i1]) {
                        imax = i1;
                    }
                    i1 = i1 + 1;
                }
            }
            b[i] = b[imax] + 1;
            i = i - 1;
        }
    }
    for (i = (991 - 991), qKqnc8HDO = (764 - 764); i < n; i = i + 1) {
        if (b[i] > qKqnc8HDO) {
            qKqnc8HDO = b[i];
        }
    }
    printf ("%d", qKqnc8HDO);
    return (913 - 913);
}

