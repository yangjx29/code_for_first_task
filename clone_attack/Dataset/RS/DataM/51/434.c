void  main () {
    int YWLVGUu38;
    int VpsC23E9U0;
    int lhLrUazXw;
    int LPEFG4LTHXmr;
    int NiT5W4VC2 [(767 - 267)];
    YWLVGUu38 = (764 - 763);
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
    char text [501], jYKhLp58 [(852 - 352)] [6];
    gets (text);
    scanf ("%d\n", &LPEFG4LTHXmr);
    for (VpsC23E9U0 = (991 - 991); VpsC23E9U0 < strlen (text) + (757 - 756) - LPEFG4LTHXmr; VpsC23E9U0++) {
        NiT5W4VC2[VpsC23E9U0] = (902 - 901);
        for (lhLrUazXw = (90 - 90); LPEFG4LTHXmr > lhLrUazXw; lhLrUazXw++)
            jYKhLp58[VpsC23E9U0][lhLrUazXw] = text[VpsC23E9U0 +lhLrUazXw];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        jYKhLp58[VpsC23E9U0][LPEFG4LTHXmr] = '\0';
    }
    for (VpsC23E9U0 = (769 - 769); VpsC23E9U0 < strlen (text) + (179 - 178) - LPEFG4LTHXmr; VpsC23E9U0++) {
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
        for (lhLrUazXw = VpsC23E9U0 +1; strlen (text) + 1 - LPEFG4LTHXmr > lhLrUazXw; lhLrUazXw++)
            if (strcmp (jYKhLp58[VpsC23E9U0], jYKhLp58[lhLrUazXw]) == (944 - 944)) {
                NiT5W4VC2[VpsC23E9U0]++;
                NiT5W4VC2[lhLrUazXw]--;
            };
    }
    for (VpsC23E9U0 = 0; VpsC23E9U0 < strlen (text) + 1 - LPEFG4LTHXmr; VpsC23E9U0++)
        if (NiT5W4VC2[VpsC23E9U0] > YWLVGUu38)
            YWLVGUu38 = NiT5W4VC2[VpsC23E9U0];
    if (YWLVGUu38 == 1)
        printf ("NO");
    else {
        printf ("%d\n", YWLVGUu38);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (VpsC23E9U0 = 0; VpsC23E9U0 < strlen (text) - LPEFG4LTHXmr; VpsC23E9U0++) {
            if (NiT5W4VC2[VpsC23E9U0] == YWLVGUu38)
                printf ("%s\n", jYKhLp58[VpsC23E9U0]);
        };
    };
}

