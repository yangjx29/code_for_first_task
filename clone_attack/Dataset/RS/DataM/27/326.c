main () {
    double  dO1fu3;
    double  b;
    double  VinI4s;
    double  exviNZkTCnRy;
    double  root2;
    double  shi;
    double  tcBNYLd;
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
    double  Mf9vAzY6LW;
    int O9cb4g, i;
    scanf ("%d", &O9cb4g);
    {
        i = 1;
        while (i <= O9cb4g) {
            i = i + 1;
            scanf ("%lf %lf %lf", &dO1fu3, &b, &VinI4s);
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
            Mf9vAzY6LW = b * b - 4 * dO1fu3 * VinI4s;
            if (Mf9vAzY6LW > (408 - 408)) {
                if (!(0 != b))
                    printf ("x1=0.00000+%.5f;x2=0.00000+%.5f\n", sqrt (Mf9vAzY6LW) / (2 * dO1fu3), -sqrt (Mf9vAzY6LW) / (2 * dO1fu3));
                else
                    exviNZkTCnRy = (-b + sqrt (Mf9vAzY6LW)) / (2 * dO1fu3);
                root2 = (-b - sqrt (Mf9vAzY6LW)) / (2 * dO1fu3);
                printf ("x1=%.5f;x2=%.5f\n", exviNZkTCnRy, root2);
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (Mf9vAzY6LW < 0) {
                    shi = -b / (2 * dO1fu3);
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
                    tcBNYLd = sqrt (-Mf9vAzY6LW) / (2 * dO1fu3);
                    if (shi == 0)
                        printf ("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n", tcBNYLd, tcBNYLd);
                    else {
                        if (tcBNYLd > 0)
                            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", shi, tcBNYLd, shi, tcBNYLd);
                        else
                            printf ("x1=%.5f-%.5fi;x2=%.5f+%.5fi\n", shi, -tcBNYLd, shi, -tcBNYLd);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    };
                }
                else {
                    if (b == 0)
                        printf ("x1=x2=0");
                    else
                        exviNZkTCnRy = -b / (2 * dO1fu3);
                    printf ("x1=x2=%.5f\n", exviNZkTCnRy);
                };
            };
        };
    }
    return 0;
}

