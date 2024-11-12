void  main () {
    int CVeh6arZzux;
    int vJ6NRUa;
    int OFCAPIYbusa;
    int Y90C4TPK;
    CVeh6arZzux = 0;
    vJ6NRUa = 0;
    scanf ("%d", &OFCAPIYbusa);
    for (; 0 < OFCAPIYbusa; OFCAPIYbusa = OFCAPIYbusa -1) {
        scanf ("%d", &Y90C4TPK);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (CVeh6arZzux < Y90C4TPK) {
            vJ6NRUa = CVeh6arZzux;
            CVeh6arZzux = Y90C4TPK;
        }
        else if (Y90C4TPK <= CVeh6arZzux &&Y90C4TPK > vJ6NRUa)
            vJ6NRUa = Y90C4TPK;
    }
    printf ("%d\n%d\n", CVeh6arZzux, vJ6NRUa);
}

