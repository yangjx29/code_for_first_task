int main () {
    int MOl3V8C70K = (451 - 451);
    int J1LAj25p;
    int i, ws8Kh04nzLy, yu6wXqlt;
    int Mr5vJqtpkVSW [101] = {(824 - 824)};
    char aAg59UMh6 [(979 - 878)] = "\0";
    char eU0svZ3mbn1N [(1484 - 484)] = "\0";
    gets (eU0svZ3mbn1N);
    char R0OBgi [(672 - 571)] = "\0";
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
    gets (R0OBgi);
    char z8nW26QR [(575 - 474)] = "\0";
    gets (z8nW26QR);
    int v7Gyiwghz = (525 - 525);
    for (i = (258 - 258); i <= strlen (eU0svZ3mbn1N) - strlen (R0OBgi); i++) {
        for (ws8Kh04nzLy = 0; ws8Kh04nzLy <= strlen (R0OBgi) - (46 - 45); ws8Kh04nzLy = ws8Kh04nzLy + 1)
            aAg59UMh6[ws8Kh04nzLy] = eU0svZ3mbn1N[ws8Kh04nzLy + i];
        J1LAj25p = (826 - 826);
        for (ws8Kh04nzLy = 0; ws8Kh04nzLy <= strlen (R0OBgi) - (327 - 326); ws8Kh04nzLy = ws8Kh04nzLy + 1) {
            if (!(R0OBgi[ws8Kh04nzLy] == aAg59UMh6[ws8Kh04nzLy]))
                J1LAj25p = J1LAj25p +(633 - 632);
        }
        if ((!(0 != J1LAj25p)) && (i != 0) && (eU0svZ3mbn1N[i - (780 - 779)] != ' '))
            J1LAj25p = J1LAj25p +1;
        if (J1LAj25p == 0) {
            v7Gyiwghz = v7Gyiwghz + 1;
            Mr5vJqtpkVSW[MOl3V8C70K] = i;
            MOl3V8C70K = MOl3V8C70K +1;
        };
    }
    for (yu6wXqlt = 1; yu6wXqlt <= v7Gyiwghz; yu6wXqlt = yu6wXqlt + 1) {
        if (yu6wXqlt == 1) {
            ws8Kh04nzLy = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (ws8Kh04nzLy < Mr5vJqtpkVSW[yu6wXqlt - 1]) {
                printf ("%c", eU0svZ3mbn1N[ws8Kh04nzLy]);
                ws8Kh04nzLy = ws8Kh04nzLy + 1;
            };
        }
        if (yu6wXqlt != 1) {
            ws8Kh04nzLy = R0OBgi;
            while (ws8Kh04nzLy < Mr5vJqtpkVSW[yu6wXqlt - 1]) {
                printf ("%c", eU0svZ3mbn1N[ws8Kh04nzLy]);
                ws8Kh04nzLy = ws8Kh04nzLy + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            ws8Kh04nzLy = 0;
            while (ws8Kh04nzLy < strlen (z8nW26QR)) {
                printf ("%c", z8nW26QR[ws8Kh04nzLy]);
                ws8Kh04nzLy++;
            };
        }
        if (yu6wXqlt == v7Gyiwghz) {
            if (Mr5vJqtpkVSW[yu6wXqlt - 1] + strlen (R0OBgi) == strlen (eU0svZ3mbn1N))
                printf ("\n");
            else {
                for (ws8Kh04nzLy = Mr5vJqtpkVSW[yu6wXqlt - 1] + strlen (R0OBgi); ws8Kh04nzLy < strlen (eU0svZ3mbn1N); ws8Kh04nzLy = ws8Kh04nzLy + 1) {
                    if (ws8Kh04nzLy == strlen (eU0svZ3mbn1N) - 1)
                        printf ("%c\n", eU0svZ3mbn1N[ws8Kh04nzLy]);
                    else
                        printf ("%c", eU0svZ3mbn1N[ws8Kh04nzLy]);
                };
            };
        };
    }
    if (v7Gyiwghz == 0)
        printf ("%s\n", eU0svZ3mbn1N);
    return 0;
}

