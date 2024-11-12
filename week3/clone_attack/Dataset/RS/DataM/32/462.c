void  main () {
    char jcR2G6 [20] [100];
    char msUFzQT [20] [100];
    int NU9uF6qZSn, JW2RGugmZ, EJtvar, cE7TvD, YEvNXW4qucdk, j1DmbI7GlNs, svMZgQT;
    scanf ("%d", &svMZgQT);
    for (j1DmbI7GlNs = 0; svMZgQT > j1DmbI7GlNs; j1DmbI7GlNs = j1DmbI7GlNs + 1) {
        scanf ("%s", msUFzQT[j1DmbI7GlNs]);
        scanf ("%s", jcR2G6[j1DmbI7GlNs]);
    }
    for (j1DmbI7GlNs = 0; j1DmbI7GlNs < svMZgQT; j1DmbI7GlNs++) {
        cE7TvD = (int) strlen (msUFzQT[j1DmbI7GlNs]);
        YEvNXW4qucdk = (int) strlen (jcR2G6[j1DmbI7GlNs]);
        for (NU9uF6qZSn = cE7TvD - 1, JW2RGugmZ = YEvNXW4qucdk -1; JW2RGugmZ >= 0; NU9uF6qZSn--, JW2RGugmZ--)
            if (msUFzQT[j1DmbI7GlNs][NU9uF6qZSn] >= jcR2G6[j1DmbI7GlNs][JW2RGugmZ])
                msUFzQT[j1DmbI7GlNs][NU9uF6qZSn] = msUFzQT[j1DmbI7GlNs][NU9uF6qZSn] - jcR2G6[j1DmbI7GlNs][JW2RGugmZ];
            else {
                msUFzQT[j1DmbI7GlNs][NU9uF6qZSn] = msUFzQT[j1DmbI7GlNs][NU9uF6qZSn] + 10 - jcR2G6[j1DmbI7GlNs][JW2RGugmZ];
                msUFzQT[j1DmbI7GlNs][NU9uF6qZSn -1] = msUFzQT[j1DmbI7GlNs][NU9uF6qZSn -1] - 1;
            }
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
        for (EJtvar = 0; EJtvar < (cE7TvD - YEvNXW4qucdk); EJtvar++)
            printf ("%c", msUFzQT[j1DmbI7GlNs][EJtvar]);
        for (EJtvar = cE7TvD - YEvNXW4qucdk; EJtvar < cE7TvD; EJtvar++)
            printf ("%c", msUFzQT[j1DmbI7GlNs][EJtvar] + '0');
        printf ("\n");
    };
}

