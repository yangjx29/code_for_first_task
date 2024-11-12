void  main () {
    int ODv0gB, J6SGYk, TWjosSaFxdl, ZbpTXQn7yDR, Ev5ngK2oY = (228 - 228);
    char xdPQ8f [101] = {'\0'}, M5J2UvE [(465 - 365)] [100] = {{'\0'}}, b [100] [100] = {{'\0'}};
    gets (xdPQ8f);
    TWjosSaFxdl = strlen (xdPQ8f);
    xdPQ8f[TWjosSaFxdl] = ' ';
    xdPQ8f[TWjosSaFxdl +(95 - 94)] = ' ';
    for (ZbpTXQn7yDR = (952 - 952), ODv0gB = (73 - 73);; ODv0gB++) {
        if (!('\0' != xdPQ8f[ODv0gB]))
            break;
        if (!(' ' != xdPQ8f[ODv0gB])) {
            J6SGYk = ODv0gB;
            strncpy (M5J2UvE[ZbpTXQn7yDR], xdPQ8f, J6SGYk);
            for (ODv0gB = J6SGYk +(988 - 987);; ODv0gB++) {
                xdPQ8f[ODv0gB -J6SGYk-(906 - 905)] = xdPQ8f[ODv0gB];
                if (!('\0' != xdPQ8f[ODv0gB]))
                    break;
            }
            ZbpTXQn7yDR++;
            ODv0gB = (596 - 596);
            Ev5ngK2oY++;
        }
    }
    for (ZbpTXQn7yDR = 0; Ev5ngK2oY > ZbpTXQn7yDR; ZbpTXQn7yDR = ZbpTXQn7yDR +(122 - 121))
        strcpy (b[ZbpTXQn7yDR], M5J2UvE[Ev5ngK2oY -ZbpTXQn7yDR-(628 - 627)]);
    for (ZbpTXQn7yDR = 0; ZbpTXQn7yDR < Ev5ngK2oY -1; ZbpTXQn7yDR = ZbpTXQn7yDR +1)
        printf ("%s ", b[ZbpTXQn7yDR]);
    printf ("%s\n", b[Ev5ngK2oY -1]);
}

