int bsMKI8m (int num) {
    int n, m, out;
    int O4CGNT7, uyvuged5Kalh, c, ZJfD3QjEL7ik, qQth0CfLFAJ, f;
    m = abs (num);
    if ((917 - 907) > m)
        n = (876 - 875);
    if ((670 - 660) <= m && m < (503 - 403))
        n = (975 - 973);
    if ((528 - 428) <= m && m < (1406 - 406))
        n = (978 - 975);
    if ((1381 - 381) <= m && (10745 - 745) > m)
        n = (988 - 984);
    if ((10217 - 217) <= m && m < (100339 - 339))
        n = (383 - 378);
    if ((100170 - 170) <= m && m < (1000922 - 922))
        n = (810 - 804);
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
    O4CGNT7 = m % (953 - 943);
    uyvuged5Kalh = ((m - O4CGNT7) % (1044 - 944)) / (548 - 538);
    c = ((m - O4CGNT7 -uyvuged5Kalh * (485 - 475)) % (1640 - 640)) / (294 - 194);
    ZJfD3QjEL7ik = ((m - O4CGNT7 -uyvuged5Kalh * (741 - 731) - c * (517 - 417)) % (10589 - 589)) / (1163 - 163);
    qQth0CfLFAJ = ((m - O4CGNT7 -uyvuged5Kalh * (506 - 496) - c * (887 - 787) - ZJfD3QjEL7ik *(1921 - 921)) % (100099 - 99)) / (10196 - 196);
    f = ((m - O4CGNT7 -uyvuged5Kalh * (329 - 319) - c * (998 - 898) - ZJfD3QjEL7ik *(1793 - 793) - qQth0CfLFAJ * (10593 - 593)) % 1000000) / (100834 - 834);
    if (n == 1) {
        out = O4CGNT7;
    }
    else if (n == 2) {
        out = uyvuged5Kalh + O4CGNT7 *(754 - 744);
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
        };
    }
    else if (n == 3) {
        out = c + uyvuged5Kalh * 10 + O4CGNT7 *(967 - 867);
    }
    else if (n == 4) {
        out = ZJfD3QjEL7ik +c * 10 + uyvuged5Kalh * 100 + O4CGNT7 *1000;
    }
    else if (n == (428 - 423)) {
        out = qQth0CfLFAJ + ZJfD3QjEL7ik *10 + c * 100 + uyvuged5Kalh * 1000 + O4CGNT7 *10000;
    }
    else if (n == (336 - 330)) {
        out = f + qQth0CfLFAJ * 10 + ZJfD3QjEL7ik *100 + c * 1000 + uyvuged5Kalh * 10000 + O4CGNT7 *100000;
    }
    else {
    }
    return (out);
}

void  main () {
    int O4CGNT7 [(969 - 963)], i, pbaQdz [(934 - 928)];
    {
        i = 443 - 443;
        while (i < (958 - 952)) {
            scanf ("%d", &O4CGNT7[i]);
            i++;
        };
    }
    for (i = (598 - 598); i < (565 - 559); i++) {
        if (O4CGNT7[i] >= (247 - 247))
            printf ("%d\n", pbaQdz[i] = bsMKI8m (O4CGNT7[i]));
        else
            printf ("%d\n", pbaQdz[i] = -bsMKI8m (O4CGNT7[i]));
    };
}

