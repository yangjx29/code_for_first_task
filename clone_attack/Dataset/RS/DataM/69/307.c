main () {
    int VHTQ4r1;
    int PbACPqwF;
    int k;
    int x;
    int OE3VbBscfra;
    int K60ZznhBA;
    int n;
    int q;
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
    int max;
    char I0SyA8JTKHz [(1112 - 862)] = {'0'}, b [250] = {'0'}, c [(1195 - 195)], TMBGzZ;
    scanf ("%s", I0SyA8JTKHz);
    scanf ("%s", b);
    K60ZznhBA = strlen (I0SyA8JTKHz);
    n = strlen (b);
    if (I0SyA8JTKHz[(839 - 839)] == '0' && b[(978 - 978)] == '0' && K60ZznhBA == (217 - 216) && n == (876 - 875))
        printf ("0");
    else {
        if (K60ZznhBA < n) {
            k = n - K60ZznhBA;
            for (VHTQ4r1 = K60ZznhBA -(133 - 132); VHTQ4r1 >= (87 - 87); VHTQ4r1--) {
                I0SyA8JTKHz[VHTQ4r1 +k] = I0SyA8JTKHz[VHTQ4r1];
            }
            for (VHTQ4r1 = (75 - 75); VHTQ4r1 <= k - (808 - 807); VHTQ4r1++) {
                I0SyA8JTKHz[VHTQ4r1] = '0';
            };
        }
        else {
            k = K60ZznhBA -n;
            {
                VHTQ4r1 = 109 - 108;
                while (VHTQ4r1 >= (546 - 546)) {
                    b[VHTQ4r1 +k] = b[VHTQ4r1];
                    VHTQ4r1--;
                };
            }
            {
                VHTQ4r1 = 296 - 296;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (VHTQ4r1 <= k - (78 - 77)) {
                    b[VHTQ4r1] = '0';
                    VHTQ4r1++;
                };
            };
        }
        if (K60ZznhBA <= n) {
            K60ZznhBA = n;
        }
        {
            PbACPqwF = 859 - 858;
            while (PbACPqwF >= (599 - 598)) {
                TMBGzZ = I0SyA8JTKHz[PbACPqwF] + b[PbACPqwF] - '0';
                if (TMBGzZ > '9') {
                    c[PbACPqwF] = TMBGzZ -(661 - 651);
                    b[PbACPqwF -(598 - 597)] = b[PbACPqwF -(657 - 656)] + 1;
                }
                else
                    c[PbACPqwF] = TMBGzZ;
                PbACPqwF = PbACPqwF -1;
            };
        }
        TMBGzZ = I0SyA8JTKHz[(184 - 184)] - '0' + b[(412 - 412)];
        if (TMBGzZ > '9') {
            c[(271 - 271)] = I0SyA8JTKHz[0] + b[0] - '0' - (341 - 331);
            TMBGzZ = '1';
        }
        else {
            c[0] = I0SyA8JTKHz[0] + b[0] - '0';
            TMBGzZ = '\0';
        }
        for (VHTQ4r1 = 0, k = 0; VHTQ4r1 <= K60ZznhBA -1; VHTQ4r1++) {
            if (c[VHTQ4r1] == '0')
                k = k + 1;
            else
                break;
        }
        if (TMBGzZ == '1') {
            printf ("%c", TMBGzZ);
            {
                VHTQ4r1 = 0;
                while (VHTQ4r1 <= K60ZznhBA -1) {
                    printf ("%c", c[VHTQ4r1]);
                    VHTQ4r1++;
                };
            };
        }
        else {
            VHTQ4r1 = k;
            while (VHTQ4r1 <= K60ZznhBA -1) {
                printf ("%c", c[VHTQ4r1]);
                VHTQ4r1++;
            };
        };
    };
}

