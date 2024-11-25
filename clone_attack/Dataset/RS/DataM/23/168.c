void  main () {
    int cZqJmcx2v7 = 0, Jwi0XhZD = 0, t;
    char tiEbWFIClB8R [20] [20], xBQflpwIRW;
    for (; (xBQflpwIRW = getchar ()) != '\n';) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (xBQflpwIRW != ' ') {
            tiEbWFIClB8R[cZqJmcx2v7][Jwi0XhZD] = xBQflpwIRW;
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
            Jwi0XhZD++;
        }
        else {
            tiEbWFIClB8R[cZqJmcx2v7][Jwi0XhZD] = '\0';
            Jwi0XhZD = 0;
            cZqJmcx2v7 = cZqJmcx2v7 + 1;
        };
    }
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
    tiEbWFIClB8R[cZqJmcx2v7][Jwi0XhZD] = '\0';
    for (t = cZqJmcx2v7; t > 0; t = t - 1)
        printf ("%s ", tiEbWFIClB8R[t]);
    printf ("%s", tiEbWFIClB8R[0]);
}

