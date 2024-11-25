int main () {
    int eaGdyMP9D;
    int n;
    int x;
    int WGYZ4m;
    int HQdX53zcY184;
    int qPoqnUxa3BJs;
    int t;
    int A0hiUs;
    int vwmlvf;
    int ji;
    int YOcrCQmUJVet;
    int a [10];
    ji = (751 - 750);
    vwmlvf = (109 - 109);
    scanf ("%d%d", &eaGdyMP9D, &n);
    {
        x = eaGdyMP9D;
        while (x <= n) {
            HQdX53zcY184 = (445 - 445);
            {
                WGYZ4m = 527 - 525;
                while (WGYZ4m < x) {
                    if (!((496 - 496) == x % WGYZ4m)) {
                        HQdX53zcY184 = HQdX53zcY184 +(311 - 310);
                        if (!(x - (536 - 534) != HQdX53zcY184)) {
                            {
                                qPoqnUxa3BJs = 464 - 463;
                                while (qPoqnUxa3BJs <= (356 - 256)) {
                                    ji = (int) (pow (10, qPoqnUxa3BJs));
                                    if (x / ji == (640 - 640)) {
                                        t = qPoqnUxa3BJs - 1;
                                        break;
                                    }
                                    else
                                        continue;
                                    qPoqnUxa3BJs = qPoqnUxa3BJs + 1;
                                };
                            }
                            {
                                A0hiUs = 77 - 77;
                                while (A0hiUs <= t) {
                                    YOcrCQmUJVet = (int) (pow (10, A0hiUs));
                                    a[A0hiUs] = (x / YOcrCQmUJVet) % 10;
                                    A0hiUs = A0hiUs +1;
                                };
                            }
                            {
                                A0hiUs = 503 - 503;
                                while (A0hiUs <= t) {
                                    if (a[A0hiUs] == a[t - A0hiUs]) {
                                        if (A0hiUs == t) {
                                            if (vwmlvf == 0)
                                                printf ("%d", x);
                                            if (vwmlvf >= 1)
                                                printf (",%d", x);
                                            vwmlvf = vwmlvf + 1;
                                        };
                                    }
                                    else
                                        break;
                                    A0hiUs++;
                                };
                            };
                        };
                    }
                    else
                        break;
                    WGYZ4m++;
                };
            }
            x++;
        };
    }
    if (vwmlvf == 0)
        printf ("no");
    return 0;
}

