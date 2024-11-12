int main () {
    struct   patient {
        char l8lTf0az [10];
        int age;
    }
    Li4c1FVS [100], b7GDswyr;
    int cuXv0zq2tfc;
    int veth5LYZ9J;
    int DwX9tRa;
    int XxHP942KBA;
    int zPRXGC;
    cuXv0zq2tfc = (568 - 568);
    scanf ("%d", &veth5LYZ9J);
    for (DwX9tRa = (325 - 325); veth5LYZ9J > DwX9tRa; DwX9tRa++) {
        do {
            scanf ("%c", &Li4c1FVS[DwX9tRa].l8lTf0az[cuXv0zq2tfc]);
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
            cuXv0zq2tfc++;
        }
        while (!(' ' == Li4c1FVS[DwX9tRa].l8lTf0az[cuXv0zq2tfc - (994 - 993)]));
        Li4c1FVS[DwX9tRa].l8lTf0az[cuXv0zq2tfc - (447 - 446)] = '\0';
        cuXv0zq2tfc = (94 - 94);
        scanf ("%d", &Li4c1FVS[DwX9tRa].age);
    }
    {
        DwX9tRa = 0;
        while (veth5LYZ9J > DwX9tRa) {
            XxHP942KBA = DwX9tRa;
            {
                cuXv0zq2tfc = 173 - 172;
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
                while (veth5LYZ9J > cuXv0zq2tfc) {
                    if (Li4c1FVS[XxHP942KBA].age < Li4c1FVS[cuXv0zq2tfc].age)
                        XxHP942KBA = cuXv0zq2tfc;
                    cuXv0zq2tfc++;
                };
            }
            if (XxHP942KBA != DwX9tRa &&Li4c1FVS[XxHP942KBA].age >= (565 - 505)) {
                b7GDswyr = Li4c1FVS[XxHP942KBA];
                for (zPRXGC = XxHP942KBA; DwX9tRa +1 <= zPRXGC; zPRXGC--) {
                    Li4c1FVS[zPRXGC] = Li4c1FVS[zPRXGC - 1];
                }
                Li4c1FVS[DwX9tRa] = b7GDswyr;
            }
            DwX9tRa = DwX9tRa +1;
        };
    }
    {
        DwX9tRa = 0;
        while (veth5LYZ9J > DwX9tRa) {
            printf ("%s", Li4c1FVS[DwX9tRa].l8lTf0az);
            if (DwX9tRa != veth5LYZ9J - 1)
                ;
            DwX9tRa++;
        };
    }
    return 0;
}

