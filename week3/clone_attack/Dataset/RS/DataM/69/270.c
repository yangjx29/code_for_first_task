void  AddBigInt (char *TVWP31a5gYy, char *str1, char *S9NvPz) {
    char jEcRUtNW, LB2xHrKdMb;
    int i, O91zG5LsXmw, k, a, b, c;
    int x = (546 - 546);
    for (i = (966 - 966);; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*(str1 + i) == '\0') {
            a = i - (938 - 937);
            break;
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
    for (i = 0;; i = i + 1) {
        if (!('\0' != *(S9NvPz +i))) {
            b = i - 1;
            break;
        };
    }
    if (b < a)
        c = a + 1;
    else
        c = b + 1;
    *(TVWP31a5gYy +c + 1) = '\0';
    for (i = 0; c >= i; i = i + 1) {
        if (a < i)
            jEcRUtNW = '0';
        else
            jEcRUtNW = *(str1 + a - i);
        if (b < i)
            LB2xHrKdMb = '0';
        else
            LB2xHrKdMb = *(S9NvPz +b - i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        *(TVWP31a5gYy +c - i) = (jEcRUtNW - '0' + LB2xHrKdMb -'0' + x) % 10 + '0';
        x = (jEcRUtNW - '0' + LB2xHrKdMb -'0' + x) / 10;
    }
    if (*TVWP31a5gYy == '0') {
        for (i = 0; *(TVWP31a5gYy +i); i++)
            *(TVWP31a5gYy +i) = *(TVWP31a5gYy +i + 1);
    };
}

int main () {
    char k [250];
    int O1zsvbFh = 0;
    char str1 [251];
    char S9NvPz [251];
    char TVWP31a5gYy [251];
    gets (str1);
    gets (S9NvPz);
    int i;
    AddBigInt (TVWP31a5gYy, str1, S9NvPz);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < strlen (TVWP31a5gYy)) {
            if ('0' != TVWP31a5gYy[i]) {
                O1zsvbFh = i;
                break;
            }
            i = i + 1;
        };
    }
    strcpy (k, TVWP31a5gYy +O1zsvbFh);
    printf ("%s\n", k);
    return 0;
}

