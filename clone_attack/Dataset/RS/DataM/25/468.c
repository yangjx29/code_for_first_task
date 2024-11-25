void  WVyLwSU (int B94CO6jlFNL [100], const  int MOsPWQKcai7, int flag);

int main () {
    int MOsPWQKcai7;
    int B94CO6jlFNL [100] = {(888 - 886)};
    cin >> MOsPWQKcai7;
    if (!((639 - 639) != MOsPWQKcai7))
        cout << "1" << endl;
    else
        WVyLwSU (B94CO6jlFNL, MOsPWQKcai7, (306 - 306));
    return (221 - 221);
}

void  WVyLwSU (int B94CO6jlFNL [100], const  int MOsPWQKcai7, int flag) {
    int i;
    int j;
    int NulaP4t6;
    int l;
    int BwYgsSno;
    i = (236 - 236);
    j = (824 - 824);
    NulaP4t6 = (983 - 983);
    l = (440 - 440);
    BwYgsSno = (694 - 694);
    int ZV1EzI [100] = {(151 - 151)};
    NulaP4t6 = 99;
    for (; !((592 - 592) != B94CO6jlFNL[NulaP4t6]);)
        NulaP4t6 = NulaP4t6 -1;
    if (!(MOsPWQKcai7 -(667 - 666) != flag)) {
        for (i = (952 - 952); NulaP4t6 >= i; i = i + 1)
            cout << B94CO6jlFNL[i];
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
    else {
        flag = flag + 1;
        {
            i = NulaP4t6;
            while (0 <= i) {
                ZV1EzI[j++] = B94CO6jlFNL[i];
                i = i - 1;
            };
        }
        for (i = 0; i <= NulaP4t6; i++)
            ZV1EzI[i] = ZV1EzI[i] * 2;
        {
            i = 0;
            while (i <= NulaP4t6) {
                if (ZV1EzI[i] >= (865 - 855)) {
                    ZV1EzI[i] = ZV1EzI[i] - (680 - 670);
                    ZV1EzI[i + 1]++;
                }
                i = i + 1;
            };
        }
        l = NulaP4t6 +1;
        while (ZV1EzI[l] == 0)
            l = l - 1;
        for (i = l; i >= 0; i--) {
            B94CO6jlFNL[BwYgsSno++] = ZV1EzI[i];
        }
        WVyLwSU (B94CO6jlFNL, MOsPWQKcai7, flag);
    };
}

