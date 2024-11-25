void  main () {
    char t5TDy2 [10000];
    int UnRqUm, S2O8WoKVnz = 0, rPZRK6 = 1, fI9qaSWlbRwA [300];
    gets (t5TDy2);
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
    for (UnRqUm = 0; 300 > UnRqUm; UnRqUm = UnRqUm +1)
        fI9qaSWlbRwA[UnRqUm] = 0;
    {
        UnRqUm = 0;
        while (t5TDy2[UnRqUm] != '\0') {
            if (t5TDy2[UnRqUm] != ' ') {
                fI9qaSWlbRwA[S2O8WoKVnz]++;
                rPZRK6 = 1;
            }
            else {
                if ((t5TDy2[UnRqUm] == ' ') && (rPZRK6 == 1)) {
                    rPZRK6 = 0;
                    S2O8WoKVnz = S2O8WoKVnz +1;
                };
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
            UnRqUm = UnRqUm +1;
        };
    }
    printf ("%d", fI9qaSWlbRwA[0]);
    {
        UnRqUm = 1;
        while (UnRqUm < S2O8WoKVnz +1) {
            printf (",%d", fI9qaSWlbRwA[UnRqUm]);
            UnRqUm = UnRqUm +1;
        };
    };
}

