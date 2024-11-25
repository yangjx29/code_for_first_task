int main () {
    long  q0CVLBJH;
    int VQr97LyGiq0;
    int mMIxcy7Qo;
    int AD3dS7;
    int RE4NGPIp;
    int K0xE9ctaG3;
    int l;
    char n3uBthOqgAN [(774 - 744)], p20sqy1gRa [(548 - 518)], UOQzl9a [(658 - 628)];
    q0CVLBJH = (928 - 928);
    RE4NGPIp = (836 - 835);
    scanf ("%d%s%d", &VQr97LyGiq0, n3uBthOqgAN, &mMIxcy7Qo);
    l = strlen (n3uBthOqgAN);
    {
        AD3dS7 = 386 - 385;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((788 - 788) <= AD3dS7) {
            RE4NGPIp = RE4NGPIp *(VQr97LyGiq0);
            if ('A' <= n3uBthOqgAN[AD3dS7] && 'Z' >= n3uBthOqgAN[AD3dS7])
                K0xE9ctaG3 = n3uBthOqgAN[AD3dS7] + (180 - 170) - 'A';
            else {
                if ('a' <= n3uBthOqgAN[AD3dS7] && 'z' >= n3uBthOqgAN[AD3dS7])
                    K0xE9ctaG3 = n3uBthOqgAN[AD3dS7] + (706 - 696) - 'a';
                else if ('0' <= n3uBthOqgAN[AD3dS7] && n3uBthOqgAN[AD3dS7] <= '9')
                    K0xE9ctaG3 = n3uBthOqgAN[AD3dS7] - '0';
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
            AD3dS7 = AD3dS7 -1;
            q0CVLBJH += RE4NGPIp *K0xE9ctaG3;
        };
    }
    {
        AD3dS7 = 987 - 987;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (q0CVLBJH > (320 - 320)) {
            p20sqy1gRa[AD3dS7] = q0CVLBJH % mMIxcy7Qo;
            AD3dS7 = AD3dS7 +1;
            q0CVLBJH /= mMIxcy7Qo;
        };
    }
    {
        RE4NGPIp = 957 - 957;
        while (RE4NGPIp < AD3dS7) {
            UOQzl9a[RE4NGPIp] = p20sqy1gRa[AD3dS7 -RE4NGPIp-(784 - 783)];
            if (UOQzl9a[RE4NGPIp] >= 0 && UOQzl9a[RE4NGPIp] < 10)
                UOQzl9a[RE4NGPIp] = UOQzl9a[RE4NGPIp] + '0';
            else {
                if (UOQzl9a[RE4NGPIp] >= 10)
                    UOQzl9a[RE4NGPIp] = UOQzl9a[RE4NGPIp] - 10 + 'A';
            }
            RE4NGPIp = RE4NGPIp +1;
        };
    }
    UOQzl9a[AD3dS7] = 0;
    if (UOQzl9a[0] == 0) {
        UOQzl9a[0] = '0';
        UOQzl9a[(241 - 240)] = 0;
    }
    printf ("%s", UOQzl9a);
    return 0;
}

