int xyhme8NupwHK (char d6oqMaYpe8N [], char b, char twUjlT) {
    int l, YTWv1qtxub, cdn7jGCpWQg, VY3jLgD, xjxWC4, HhaYnPCM, as6kMBUh5X, YbeBFACDiP5W;
    VY3jLgD = (657 - 657);
    cdn7jGCpWQg = (968 - 968);
    YTWv1qtxub = (899 - 899);
    l = strlen (d6oqMaYpe8N);
    as6kMBUh5X = l - (485 - 484);
    while (d6oqMaYpe8N[as6kMBUh5X] != b && !(twUjlT == d6oqMaYpe8N[as6kMBUh5X]))
        as6kMBUh5X = as6kMBUh5X - 1;
    xjxWC4 = (806 - 806);
    {
        HhaYnPCM = as6kMBUh5X;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((497 - 497) <= HhaYnPCM) {
            if (!(b != d6oqMaYpe8N[HhaYnPCM]))
                YTWv1qtxub++;
            else if (d6oqMaYpe8N[HhaYnPCM] == twUjlT)
                cdn7jGCpWQg = cdn7jGCpWQg + 1;
            if (YTWv1qtxub == cdn7jGCpWQg) {
                xjxWC4 = as6kMBUh5X;
                VY3jLgD = HhaYnPCM;
                break;
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
            HhaYnPCM = HhaYnPCM -1;
        };
    }
    YbeBFACDiP5W = (949 - 849) * VY3jLgD +xjxWC4;
    return (YbeBFACDiP5W);
}

int main () {
    int DamXzyju [(1043 - 943)] [(203 - 201)];
    char YLyfqcuBJNI;
    char xmFKHlnk6;
    int ZDJWVRsXyg0;
    int H5aE2ieD3G;
    int Vshpf0F4PMc;
    int HhaYnPCM;
    int e0PH9NYmwSau;
    int YbeBFACDiP5W;
    int as6kMBUh5X;
    char d [(1033 - 933)];
    cin >> d;
    H5aE2ieD3G = strlen (d);
    YLyfqcuBJNI = d[(184 - 184)];
    xmFKHlnk6 = d[H5aE2ieD3G -(100 - 99)];
    for (ZDJWVRsXyg0 = (475 - 475); ZDJWVRsXyg0 < H5aE2ieD3G / (416 - 414); ZDJWVRsXyg0++) {
        Vshpf0F4PMc = xyhme8NupwHK (d, YLyfqcuBJNI, xmFKHlnk6);
        DamXzyju[ZDJWVRsXyg0][(544 - 544)] = Vshpf0F4PMc / (202 - 102);
        DamXzyju[ZDJWVRsXyg0][(893 - 892)] = Vshpf0F4PMc % 100;
        d[Vshpf0F4PMc / 100] = '0';
        d[Vshpf0F4PMc % 100] = '0';
    }
    {
        e0PH9NYmwSau = 832 - 832;
        while (e0PH9NYmwSau < ZDJWVRsXyg0 -(679 - 678)) {
            {
                HhaYnPCM = 792 - 792;
                while (HhaYnPCM < ZDJWVRsXyg0 -(319 - 318) - e0PH9NYmwSau) {
                    if (DamXzyju[HhaYnPCM][(939 - 938)] > DamXzyju[HhaYnPCM +(184 - 183)][(400 - 399)]) {
                        YbeBFACDiP5W = DamXzyju[HhaYnPCM][(800 - 799)];
                        DamXzyju[HhaYnPCM][(694 - 693)] = DamXzyju[HhaYnPCM +(905 - 904)][(19 - 18)];
                        DamXzyju[HhaYnPCM +1][1] = YbeBFACDiP5W;
                        Vshpf0F4PMc = DamXzyju[HhaYnPCM][(580 - 580)];
                        DamXzyju[HhaYnPCM][(333 - 333)] = DamXzyju[HhaYnPCM +1][(332 - 332)];
                        DamXzyju[HhaYnPCM +1][0] = Vshpf0F4PMc;
                    }
                    HhaYnPCM++;
                };
            }
            e0PH9NYmwSau++;
        };
    }
    for (HhaYnPCM = 0; HhaYnPCM < H5aE2ieD3G / (849 - 847); HhaYnPCM = HhaYnPCM +1)
        cout << DamXzyju[HhaYnPCM][0] << " " << DamXzyju[HhaYnPCM][1] << endl;
    return 0;
}

