int main () {
    int IH0Wfx;
    int dUOhV5Du;
    IH0Wfx = 0;
    char lphNBHuiGknz [1000];
    char boy;
    boy = lphNBHuiGknz[0];
    int m [1000] = {0};
    scanf ("%s", lphNBHuiGknz);
    for (dUOhV5Du = 0; lphNBHuiGknz[dUOhV5Du]; dUOhV5Du = dUOhV5Du + 1) {
        if (!(boy != lphNBHuiGknz[dUOhV5Du]))
            m[IH0Wfx++] = dUOhV5Du;
        else {
            if (lphNBHuiGknz[dUOhV5Du] != boy)
                printf ("%d %d\n", m[--IH0Wfx], dUOhV5Du);
        };
    }
    return 0;
}

