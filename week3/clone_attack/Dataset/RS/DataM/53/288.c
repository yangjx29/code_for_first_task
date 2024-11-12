int main () {
    int jiI3tnNE;
    int FBVnJwWx;
    int WNogEf;
    int v14KV9Duz [(559 - 259)];
    int b [300];
    int R9p4RmqX;
    jiI3tnNE = (838 - 837);
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
    scanf ("%d", &FBVnJwWx);
    for (WNogEf = (376 - 376); FBVnJwWx > WNogEf; WNogEf = WNogEf +1) {
        scanf ("%d", &v14KV9Duz[WNogEf]);
    }
    b[0] = v14KV9Duz[0];
    {
        WNogEf = 417 - 416;
        while (FBVnJwWx > WNogEf) {
            for (R9p4RmqX = 0; R9p4RmqX < jiI3tnNE; R9p4RmqX++) {
                if (v14KV9Duz[WNogEf] == b[R9p4RmqX])
                    goto loop;
            }
            b[jiI3tnNE] = v14KV9Duz[WNogEf];
            jiI3tnNE = jiI3tnNE + 1;
        loop :
            ;
            WNogEf = WNogEf +1;
        };
    }
    {
        WNogEf = 0;
        while (WNogEf < jiI3tnNE - 1) {
            printf ("%d,", b[WNogEf]);
            WNogEf++;
        };
    }
    printf ("%d\n", b[jiI3tnNE - 1]);
    return 0;
}

