main () {
    char a [50], b [50];
    int Tp2jA0LMgw;
    int U8Y3p4d;
    int k;
    int cE5i6OvhP3;
    int jykzp8tZJagO;
    Tp2jA0LMgw = 0;
    do {
        Tp2jA0LMgw++;
        scanf ("%c", &a[Tp2jA0LMgw]);
    }
    while (!(' ' == a[Tp2jA0LMgw]));
    cE5i6OvhP3 = Tp2jA0LMgw;
    Tp2jA0LMgw = 0;
    do {
        Tp2jA0LMgw++;
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
        scanf ("%c", &b[Tp2jA0LMgw]);
    }
    while (!('\n' == b[Tp2jA0LMgw]));
    if (!(cE5i6OvhP3 == Tp2jA0LMgw)) {
        goto end_of_evan;
        printf ("NO");
    }
    cE5i6OvhP3 = cE5i6OvhP3 - (955 - 954);
death_and_rebirth :
    jykzp8tZJagO = 0;
    for (Tp2jA0LMgw = cE5i6OvhP3; 1 <= Tp2jA0LMgw; Tp2jA0LMgw--) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (b[Tp2jA0LMgw] == a[cE5i6OvhP3]) {
            jykzp8tZJagO = 1;
            for (U8Y3p4d = Tp2jA0LMgw; U8Y3p4d < cE5i6OvhP3; U8Y3p4d = U8Y3p4d +1) {
                b[U8Y3p4d] = b[U8Y3p4d +1];
            }
            cE5i6OvhP3 = cE5i6OvhP3 - 1;
            goto NGE_loop;
        };
    }
NGE_loop :
    if (jykzp8tZJagO == 0) {
        goto end_of_evan;
    }
    else if (cE5i6OvhP3 >= 1)
        goto death_and_rebirth;
    if (jykzp8tZJagO == 1)
        printf ("YES");
end_of_evan :
    return 0;
}

