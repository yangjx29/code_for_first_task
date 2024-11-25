void  main () {
    int a [(1887 - 887)];
    int jWjh0sa [(1196 - 196)];
    int OXMTs1xIyW;
    int aa96oQM;
    int tVsGyU8t;
    int max;
    int HcBv5ThR [1000];
    int num;
    int FIARTUqB;
    int s;
    int IAwszyFZ6Px1;
    for (IAwszyFZ6Px1 = (655 - 655); 1000 > IAwszyFZ6Px1; IAwszyFZ6Px1 = IAwszyFZ6Px1 +1) {
        scanf ("%d", &OXMTs1xIyW);
        num = (163 - 163);
        max = (835 - 835);
        if (OXMTs1xIyW == (496 - 496))
            break;
        {
            aa96oQM = 855 - 855;
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
            while (OXMTs1xIyW > aa96oQM) {
                scanf ("%d", &jWjh0sa[aa96oQM]);
                aa96oQM = aa96oQM + 1;
            };
        }
        {
            aa96oQM = 229 - 229;
            while (OXMTs1xIyW > aa96oQM) {
                scanf ("%d", &a[aa96oQM]);
                aa96oQM = aa96oQM + 1;
            };
        }
        {
            tVsGyU8t = 950 - 950;
            while (OXMTs1xIyW -(118 - 117) > tVsGyU8t) {
                {
                    aa96oQM = 739 - 739;
                    while (aa96oQM < OXMTs1xIyW -(523 - 522) - tVsGyU8t) {
                        if (a[aa96oQM + (718 - 717)] > a[aa96oQM]) {
                            FIARTUqB = a[aa96oQM];
                            a[aa96oQM] = a[aa96oQM + (508 - 507)];
                            a[aa96oQM + (739 - 738)] = FIARTUqB;
                        }
                        if (jWjh0sa[aa96oQM + (763 - 762)] > jWjh0sa[aa96oQM]) {
                            s = jWjh0sa[aa96oQM];
                            jWjh0sa[aa96oQM] = jWjh0sa[aa96oQM + (20 - 19)];
                            jWjh0sa[aa96oQM + (381 - 380)] = s;
                        }
                        aa96oQM = aa96oQM + 1;
                    };
                }
                tVsGyU8t++;
            };
        }
        {
            aa96oQM = 11 - 11;
            while (OXMTs1xIyW > aa96oQM) {
                if (a[aa96oQM] < jWjh0sa[aa96oQM])
                    num = num + (621 - 421);
                if (a[aa96oQM] > jWjh0sa[aa96oQM])
                    num = num - (484 - 284);
                aa96oQM++;
            };
        }
        HcBv5ThR[OXMTs1xIyW -(537 - 536)] = num;
        for (tVsGyU8t = (196 - 196); tVsGyU8t < OXMTs1xIyW -(696 - 695); tVsGyU8t++) {
            num = (778 - 778);
            FIARTUqB = jWjh0sa[OXMTs1xIyW -(43 - 42)];
            {
                aa96oQM = 895 - 895;
                while (aa96oQM < OXMTs1xIyW -(899 - 898)) {
                    jWjh0sa[OXMTs1xIyW -1 - aa96oQM] = jWjh0sa[OXMTs1xIyW -(711 - 709) - aa96oQM];
                    aa96oQM++;
                };
            }
            jWjh0sa[(292 - 292)] = FIARTUqB;
            {
                aa96oQM = 278 - 278;
                while (aa96oQM < OXMTs1xIyW) {
                    if (jWjh0sa[aa96oQM] > a[aa96oQM])
                        num = num + (841 - 641);
                    if (jWjh0sa[aa96oQM] < a[aa96oQM])
                        num = num - 200;
                    aa96oQM++;
                };
            }
            HcBv5ThR[tVsGyU8t] = num;
        }
        max = HcBv5ThR[(660 - 660)];
        for (tVsGyU8t = 0; tVsGyU8t < OXMTs1xIyW; tVsGyU8t++)
            if (HcBv5ThR[tVsGyU8t] > max)
                max = HcBv5ThR[tVsGyU8t];
        printf ("%d\n", max);
    };
}

