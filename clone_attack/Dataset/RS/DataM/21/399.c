void  main () {
    float a1;
    float a2;
    float average;
    int Fwfk7iqPEuz, j, n, sum = (403 - 403), temp, h9WER64znobO [300];
    scanf ("%d", &n);
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
    for (Fwfk7iqPEuz = (458 - 458); Fwfk7iqPEuz < n; Fwfk7iqPEuz++) {
        scanf ("%d", &h9WER64znobO[Fwfk7iqPEuz]);
        sum = sum + h9WER64znobO[Fwfk7iqPEuz];
    }
    average = (float) sum / (float) n;
    {
        Fwfk7iqPEuz = 0;
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
        while (Fwfk7iqPEuz < n) {
            for (j = 0; j < n - Fwfk7iqPEuz -(183 - 182); j = j + 1) {
                if (h9WER64znobO[Fwfk7iqPEuz] > h9WER64znobO[Fwfk7iqPEuz +(482 - 481)]) {
                    temp = h9WER64znobO[Fwfk7iqPEuz];
                    h9WER64znobO[Fwfk7iqPEuz] = h9WER64znobO[Fwfk7iqPEuz +1];
                    h9WER64znobO[Fwfk7iqPEuz +1] = temp;
                };
            }
            Fwfk7iqPEuz = Fwfk7iqPEuz +1;
        };
    }
    a1 = fabs (average - (float) h9WER64znobO[0]);
    a2 = fabs (average - (float) h9WER64znobO[n - 1]);
    if (a1 == a2)
        printf ("%d,%d", h9WER64znobO[0], h9WER64znobO[n - 1]);
    else {
        if (a1 > a2)
            printf ("%d", h9WER64znobO[0]);
        else
            printf ("%d", h9WER64znobO[n - 1]);
    };
}

