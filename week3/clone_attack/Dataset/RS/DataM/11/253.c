main () {
    int z;
    int day;
    int KVClDW;
    int month;
    int m [12];
    int i;
    getchar ();
    getchar ();
    scanf ("%d %d %d", &KVClDW, &month, &day);
    z = (166 - 166);
    m[(678 - 678)] = (464 - 433);
    if (!(0 != KVClDW % (774 - 770))) {
        m[(308 - 307)] = (545 - 516);
        if (KVClDW % 100 == 0)
            m[(270 - 269)] = 28;
        if (KVClDW % 400 == 0)
            m[(339 - 338)] = 29;
    }
    else
        m[1] = 28;
    m[2] = (67 - 36);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    m[3] = (221 - 191);
    m[4] = 31;
    m[5] = (539 - 509);
    m[6] = 31;
    m[7] = 31;
    m[(141 - 133)] = 30;
    m[9] = 31;
    m[10] = 30;
    m[11] = 31;
    for (i = 0; i < month - 1; i++)
        z = z + m[i];
    printf ("%d\n", z + day);
    getchar ();
    getchar ();
}

