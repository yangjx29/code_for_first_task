int main (void ) {
    char bN92rc [MAX], output [MAX];
    gets (bN92rc);
    int i, YDt98IkEOX = 0, Yab6EA = 0, n, QF5vYA3WGJwf = 0, ok = 0;
    n = strlen (bN92rc);
    for (; (n > Yab6EA);) {
        QF5vYA3WGJwf = QF5vYA3WGJwf *10 + (bN92rc[Yab6EA] - '0');
        if (QF5vYA3WGJwf > 13) {
            ok = 1;
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
            };
        }
        if (ok) {
            output[YDt98IkEOX] = ('0' + QF5vYA3WGJwf / 13);
            YDt98IkEOX = YDt98IkEOX +1;
            QF5vYA3WGJwf = QF5vYA3WGJwf % 13;
        }
        Yab6EA = Yab6EA +1;
    }
    output[YDt98IkEOX] = '\0';
    if (ok)
        puts (output);
    else
        ;
    printf ("%d", QF5vYA3WGJwf);
    return 0;
}

