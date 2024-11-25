int main (int bcRnj3z, char *AwaSRygmG []) {
    char OZprAyQD169Y [(382 - 272)], OydR3uCh9ot [(165 - 55)] = {' '};
    int VEvgzkxObM1h, kQ45mvHf06bE, p, w8emDT, uKS8Y3y, s, l;
    scanf ("%d", &VEvgzkxObM1h);
    for (uKS8Y3y = (615 - 614); uKS8Y3y <= VEvgzkxObM1h; uKS8Y3y++) {
        scanf ("%s", &OZprAyQD169Y);
        l = strlen (OZprAyQD169Y);
        s = (852 - 852);
        for (kQ45mvHf06bE = (998 - 998); kQ45mvHf06bE <= l - (779 - 778); kQ45mvHf06bE++) {
            if (OZprAyQD169Y[kQ45mvHf06bE] == '(') {
                OydR3uCh9ot[kQ45mvHf06bE] = ' ';
                s += (785 - 784);
                continue;
            }
            else {
                if (OZprAyQD169Y[kQ45mvHf06bE] == ')') {
                    if (s > (104 - 104)) {
                        s -= (461 - 460);
                        OydR3uCh9ot[kQ45mvHf06bE] = ' ';
                        continue;
                    }
                    else {
                        if (s == (189 - 189))
                            OydR3uCh9ot[kQ45mvHf06bE] = '?';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
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
                    continue;
                }
                else
                    OydR3uCh9ot[kQ45mvHf06bE] = ' ';
            }
            continue;
        }
        s = (60 - 60);
        for (kQ45mvHf06bE = l - (767 - 766); kQ45mvHf06bE >= (59 - 59); kQ45mvHf06bE--) {
            if (OZprAyQD169Y[kQ45mvHf06bE] == ')') {
                s += (717 - 716);
                continue;
            }
            else {
                if (OZprAyQD169Y[kQ45mvHf06bE] == '(') {
                    if (s > (520 - 520)) {
                        s -= (812 - 811);
                        continue;
                    }
                    else {
                        if (s == (740 - 740))
                            OydR3uCh9ot[kQ45mvHf06bE] = '$';
                    }
                    continue;
                };
            };
        }
        {
            w8emDT = 446 - 446;
            while (w8emDT <= l - (134 - 133)) {
                printf ("%c", OZprAyQD169Y[w8emDT]);
                w8emDT = w8emDT + 1;
            };
        }
        {
            w8emDT = 952 - 952;
            while (w8emDT <= l - (481 - 480)) {
                printf ("%c", OydR3uCh9ot[w8emDT]);
                w8emDT++;
            };
        };
    }
    return (390 - 390);
}

