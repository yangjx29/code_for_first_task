void  main () {
    int i, IjKifXswtdpL, AJmpc7SUE, n, N59TfYWyL [300], xNXWEGAyz [300];
    IjKifXswtdpL = 1;
    *xNXWEGAyz = *N59TfYWyL;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &*(N59TfYWyL +i));
    }
    for (i = 0; n > i; i++) {
        for (AJmpc7SUE = 0; IjKifXswtdpL > AJmpc7SUE; AJmpc7SUE++) {
            if (*(N59TfYWyL +i) == *(xNXWEGAyz + AJmpc7SUE))
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
        if (AJmpc7SUE == IjKifXswtdpL) {
            *(xNXWEGAyz + IjKifXswtdpL) = *(N59TfYWyL +i);
            IjKifXswtdpL = IjKifXswtdpL +1;
        };
    }
    for (i = 0; i < IjKifXswtdpL -1; i++) {
        printf ("%d,", *(xNXWEGAyz + i));
    }
    printf ("%d", *(xNXWEGAyz + IjKifXswtdpL -1));
}

