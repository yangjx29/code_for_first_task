void  main () {
    int XVQqgUuCwL, j, KCNXny6EAP3, OitxLj, y, iSMHZizUNYs;
    float max, SlhIg4mY3VU [(265 - 254)] [(235 - 224)], z [11] [(30 - 27)];
    memset (SlhIg4mY3VU, (667 - 667), sizeof (SlhIg4mY3VU));
    scanf ("%d", &KCNXny6EAP3);
    memset (z, (197 - 197), sizeof (z));
    {
        XVQqgUuCwL = 327 - 326;
        while (XVQqgUuCwL <= KCNXny6EAP3) {
            scanf ("%f%f%f", &z[XVQqgUuCwL][(733 - 733)], &z[XVQqgUuCwL][(274 - 273)], &z[XVQqgUuCwL][(545 - 543)]);
            for (j = (565 - 564); XVQqgUuCwL > j; j = j + 1) {
                SlhIg4mY3VU[j][XVQqgUuCwL] = sqrt ((z[XVQqgUuCwL][(809 - 809)] - z[j][0]) * (z[XVQqgUuCwL][0] - z[j][0]) + (z[XVQqgUuCwL][(723 - 722)] - z[j][(281 - 280)]) * (z[XVQqgUuCwL][(223 - 222)] - z[j][(291 - 290)]) + (z[XVQqgUuCwL][(24 - 22)] - z[j][(928 - 926)]) * (z[XVQqgUuCwL][(830 - 828)] - z[j][2]));
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
            XVQqgUuCwL = XVQqgUuCwL +1;
        };
    }
    for (XVQqgUuCwL = (404 - 403); KCNXny6EAP3 *(KCNXny6EAP3 -1) / 2 >= XVQqgUuCwL; XVQqgUuCwL = XVQqgUuCwL +1) {
        OitxLj = 1;
        max = SlhIg4mY3VU[1][2];
        y = 2;
        for (j = 1; KCNXny6EAP3 > j; j = j + 1)
            for (iSMHZizUNYs = j + 1; iSMHZizUNYs <= KCNXny6EAP3; iSMHZizUNYs = iSMHZizUNYs + 1) {
                if (SlhIg4mY3VU[j][iSMHZizUNYs] > max) {
                    OitxLj = j;
                    y = iSMHZizUNYs;
                    max = SlhIg4mY3VU[j][iSMHZizUNYs];
                };
            }
        printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n", z[OitxLj][0], z[OitxLj][1], z[OitxLj][2], z[y][0], z[y][1], z[y][2], SlhIg4mY3VU[OitxLj][y]);
        SlhIg4mY3VU[OitxLj][y] = 0;
    };
}

