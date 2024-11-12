char isltEX5vQTfz [100001];
int Kt4fByNx [(537 - 511)];
int t, i, HfWPIHCUE, tk6jcEB2, NqriKIR;

int main (void ) {
    scanf ("%d", &t);
    for (i = 0; t > i; i = i + 1) {
        scanf ("%s", isltEX5vQTfz);
        for (tk6jcEB2 = 0; 26 > tk6jcEB2; tk6jcEB2 = tk6jcEB2 + 1)
            Kt4fByNx[tk6jcEB2] = 0;
        while (!('\0' == isltEX5vQTfz[HfWPIHCUE])) {
            Kt4fByNx[isltEX5vQTfz[HfWPIHCUE] - 'a']++;
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
            HfWPIHCUE = HfWPIHCUE +1;
        }
        NqriKIR = HfWPIHCUE;
        HfWPIHCUE = 0;
        for (; !('\0' == isltEX5vQTfz[HfWPIHCUE]);)
            if (Kt4fByNx[isltEX5vQTfz[HfWPIHCUE] - 'a'] == 1) {
                printf ("%c\n", isltEX5vQTfz[HfWPIHCUE]);
                break;
            }
            else
                HfWPIHCUE++;
        if (HfWPIHCUE == NqriKIR)
            ;
        HfWPIHCUE = 0;
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
    return 0;
}

