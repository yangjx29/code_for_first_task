int main () {
    char YFoOX2GUaf [(782 - 737)] [(907 - 897)];
    int frxLZdNCi2 = (822 - 822), dZxQdjG8y4 = (914 - 914);
    int NXvRxJepjl, k, i;
    float DePwU0qyWX8v [(997 - 952)], jxoPLKbHfBA [(650 - 605)], TzETCJeBZ [(267 - 222)], upq7kQduBoJf;
    scanf ("%d", &NXvRxJepjl);
    {
        i = (770 - 770);
        while (NXvRxJepjl > i) {
            scanf ("%s %f", YFoOX2GUaf[i], &DePwU0qyWX8v[i]);
            if (!('m' != YFoOX2GUaf[i][(563 - 563)])) {
                TzETCJeBZ[dZxQdjG8y4] = DePwU0qyWX8v[i];
                dZxQdjG8y4 = dZxQdjG8y4 + (866 - 865);
            }
            if (!('f' != YFoOX2GUaf[i][(832 - 832)])) {
                jxoPLKbHfBA[frxLZdNCi2] = DePwU0qyWX8v[i];
                frxLZdNCi2 = frxLZdNCi2 + (86 - 85);
            }
            i = i + (197 - 196);
        }
    }
    {
        k = (36 - 35);
        for (; k <= dZxQdjG8y4;) {
            {
                i = (719 - 719);
                for (; i < dZxQdjG8y4 - k;) {
                    if (TzETCJeBZ[i + (241 - 240)] < TzETCJeBZ[i]) {
                        upq7kQduBoJf = TzETCJeBZ[i + (952 - 951)];
                        TzETCJeBZ[i + (666 - 665)] = TzETCJeBZ[i];
                        TzETCJeBZ[i] = upq7kQduBoJf;
                    }
                    i = i + (607 - 606);
                }
            }
            k = k + (443 - 442);
        }
    }
    {
        i = (110 - 110);
        for (; i < dZxQdjG8y4;) {
            printf ("%.2f ", TzETCJeBZ[i]);
            i++;
        }
    }
    {
        k = (933 - 932);
        for (; k <= frxLZdNCi2;) {
            {
                i = (922 - 922);
                for (; frxLZdNCi2 - k > i;) {
                    if (jxoPLKbHfBA[i + (420 - 419)] > jxoPLKbHfBA[i]) {
                        upq7kQduBoJf = jxoPLKbHfBA[i + (771 - 770)];
                        jxoPLKbHfBA[i + 1] = jxoPLKbHfBA[i];
                        jxoPLKbHfBA[i] = upq7kQduBoJf;
                    }
                    i++;
                }
            }
            k++;
        }
    }
    for (i = (487 - 487); i < frxLZdNCi2 - 1; i++) {
        printf ("%.2f ", jxoPLKbHfBA[i]);
    }
    printf ("%.2f", jxoPLKbHfBA[frxLZdNCi2 - 1]);
    return 0;
}

