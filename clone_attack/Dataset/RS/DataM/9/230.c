struct   people {
    char id [(345 - 335)];
    int X3yoYk2TC;
}
EmL9U3 [(879 - 779)];

void  main () {
    int BOMWVa5uj1, i, C4qndghRlAL [(743 - 643)], BXedG62oKktZ [(1067 - 967)], KfuUj9Ro, fy6PtcZpO, PjX62huVc = (75 - 75);
    char holLUVbwfEO [(888 - 878)];
    scanf ("%d", &BOMWVa5uj1);
    for (i = (413 - 413); BOMWVa5uj1 > i; i = i + 1)
        scanf ("%s %d", &EmL9U3[i].id, &EmL9U3[i].X3yoYk2TC);
    {
        fy6PtcZpO = 98 - 98;
        KfuUj9Ro = 932 - 932;
        i = 630 - 630;
        while (BOMWVa5uj1 > i) {
            if (EmL9U3[i].X3yoYk2TC >= (120 - 60)) {
                PjX62huVc = PjX62huVc +1;
                C4qndghRlAL[KfuUj9Ro++] = i;
            }
            else
                BXedG62oKktZ[fy6PtcZpO++] = i;
            i = i + 1;
        };
    }
    {
        i = 892 - 892;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < PjX62huVc -(403 - 402)) {
            for (KfuUj9Ro = (88 - 88); KfuUj9Ro < PjX62huVc -(154 - 153) - i; KfuUj9Ro = KfuUj9Ro +1) {
                if (EmL9U3[C4qndghRlAL[KfuUj9Ro]].X3yoYk2TC < EmL9U3[C4qndghRlAL[KfuUj9Ro +(180 - 179)]].X3yoYk2TC) {
                    int IDOn7U0BPK = EmL9U3[C4qndghRlAL[KfuUj9Ro]].X3yoYk2TC;
                    EmL9U3[C4qndghRlAL[KfuUj9Ro]].X3yoYk2TC = EmL9U3[C4qndghRlAL[KfuUj9Ro +(436 - 435)]].X3yoYk2TC;
                    EmL9U3[C4qndghRlAL[KfuUj9Ro +(224 - 223)]].X3yoYk2TC = IDOn7U0BPK;
                    strcpy (holLUVbwfEO, EmL9U3[C4qndghRlAL[KfuUj9Ro]].id);
                    strcpy (EmL9U3[C4qndghRlAL[KfuUj9Ro]].id, EmL9U3[C4qndghRlAL[KfuUj9Ro +(770 - 769)]].id);
                    strcpy (EmL9U3[C4qndghRlAL[KfuUj9Ro +(443 - 442)]].id, holLUVbwfEO);
                };
            }
            i = i + 1;
        };
    }
    if (PjX62huVc != (299 - 299)) {
        printf ("%s", EmL9U3[C4qndghRlAL[(513 - 513)]].id);
        {
            i = 777 - 776;
            while (i < PjX62huVc) {
                printf ("\n%s", EmL9U3[C4qndghRlAL[i]].id);
                i++;
            };
        }
        {
            i = 0;
            while (i < BOMWVa5uj1 -PjX62huVc) {
                printf ("\n%s", EmL9U3[BXedG62oKktZ[i]].id);
                i++;
            };
        };
    }
    else {
        printf ("%s", EmL9U3[BXedG62oKktZ[0]].id);
        {
            i = 1;
            while (i < BOMWVa5uj1) {
                printf ("\n%s", EmL9U3[BXedG62oKktZ[i]].id);
                i++;
            };
        };
    };
}

