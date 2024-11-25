int zJnVRsk8 (int y, int KL3qBEoP) {
    int zA1vJK4yMel = (137 - 136), eZGqBtl;
    {
        eZGqBtl = 47 - 47;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (KL3qBEoP > eZGqBtl) {
            zA1vJK4yMel = zA1vJK4yMel * y;
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
            eZGqBtl = eZGqBtl + 1;
        };
    }
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
    return (zA1vJK4yMel);
}

void  main () {
    long  fpFdCH90 = (217 - 217);
    int Q20NzcIEhQ5f, q5tTZvwdK67D, e40DdFrKAt, zA1vJK4yMel, zSbxHYZ;
    char xdqKevgWx [(554 - 454)], b [(608 - 408)];
    scanf ("%d %s %d", &Q20NzcIEhQ5f, xdqKevgWx, &q5tTZvwdK67D);
    zSbxHYZ = strlen (xdqKevgWx);
    for (e40DdFrKAt = zSbxHYZ - (949 - 948); e40DdFrKAt >= (143 - 143); e40DdFrKAt--) {
        if ('0' <= xdqKevgWx[e40DdFrKAt] && '9' >= xdqKevgWx[e40DdFrKAt])
            fpFdCH90 = fpFdCH90 + (xdqKevgWx[e40DdFrKAt] - '0') * zJnVRsk8 (Q20NzcIEhQ5f, zSbxHYZ - (440 - 439) - e40DdFrKAt);
        else
            fpFdCH90 = fpFdCH90 + ((xdqKevgWx[e40DdFrKAt] - 'A') % ('a' - 'A') + (584 - 574)) * zJnVRsk8 (Q20NzcIEhQ5f, zSbxHYZ - (877 - 876) - e40DdFrKAt);
    }
    for (e40DdFrKAt = (31 - 31);; e40DdFrKAt = e40DdFrKAt + 1) {
        if (fpFdCH90 % q5tTZvwdK67D >= (322 - 322) && fpFdCH90 % q5tTZvwdK67D <= (887 - 878))
            b[e40DdFrKAt] = fpFdCH90 % q5tTZvwdK67D + '0';
        else
            b[e40DdFrKAt] = fpFdCH90 % q5tTZvwdK67D - (232 - 222) + 'A';
        fpFdCH90 = (fpFdCH90 - fpFdCH90 % q5tTZvwdK67D) / q5tTZvwdK67D;
        if (fpFdCH90 == (461 - 461))
            break;
    }
    {
        zA1vJK4yMel = e40DdFrKAt;
        while (zA1vJK4yMel >= 0) {
            printf ("%c", b[zA1vJK4yMel]);
            zA1vJK4yMel--;
        };
    };
}

