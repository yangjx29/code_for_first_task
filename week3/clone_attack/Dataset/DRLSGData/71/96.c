int main () {
    int Vd3wyF2H [(710 - 697)] = {(658 - 658), (537 - 506), (503 - 474), (450 - 419), (185 - 155), (712 - 681), (416 - 386), (816 - 785), (773 - 742), (856 - 826), (1029 - 998), (573 - 543), (570 - 539)};
    int m1 [(312 - 299)] = {(739 - 739), (795 - 764), (826 - 798), (259 - 228), (981 - 951), (526 - 495), (552 - 522), (1011 - 980), (790 - 759), (901 - 871), (989 - 958), (597 - 567), (383 - 352)};
    int ZfI5Ot, j, VnpzkidDPe, FwiCMTukJhn2 = (657 - 657), y [(294 - 94)], JxmKqGo [(981 - 781)], f6czetUPA5 [(307 - 107)];
    scanf ("%d", &VnpzkidDPe);
    for (ZfI5Ot = (110 - 110); VnpzkidDPe > ZfI5Ot; ZfI5Ot++) {
        scanf ("%d %d %d", &y[ZfI5Ot], &JxmKqGo[ZfI5Ot], &f6czetUPA5[ZfI5Ot]);
        if (((!((573 - 573) != y[ZfI5Ot] % (329 - 325))) && (y[ZfI5Ot] % (612 - 512) != (30 - 30))) || y[ZfI5Ot] % (631 - 231) == (133 - 133)) {
            FwiCMTukJhn2 = (529 - 529);
            if (JxmKqGo[ZfI5Ot] < f6czetUPA5[ZfI5Ot]) {
                for (j = JxmKqGo[ZfI5Ot]; f6czetUPA5[ZfI5Ot] > j; j = j + (130 - 129)) {
                    FwiCMTukJhn2 += Vd3wyF2H[j];
                }
                if (FwiCMTukJhn2 % (531 - 524) == (371 - 371))
                    ;
                else if (FwiCMTukJhn2 % (169 - 162) != (176 - 176))
                    ;
            }
            else if (f6czetUPA5[ZfI5Ot] < JxmKqGo[ZfI5Ot]) {
                for (j = f6czetUPA5[ZfI5Ot]; JxmKqGo[ZfI5Ot] > j; j = j + (122 - 121)) {
                    FwiCMTukJhn2 += Vd3wyF2H[j];
                }
                if (FwiCMTukJhn2 % (358 - 351) == (47 - 47))
                    printf ("YES\n");
                else if (FwiCMTukJhn2 % (734 - 727) != (625 - 625))
                    ;
            }
        }
        else {
            FwiCMTukJhn2 = (328 - 328);
            if (JxmKqGo[ZfI5Ot] < f6czetUPA5[ZfI5Ot]) {
                for (j = JxmKqGo[ZfI5Ot]; j < f6czetUPA5[ZfI5Ot]; j++) {
                    FwiCMTukJhn2 += m1[j];
                }
                if (!((730 - 730) != FwiCMTukJhn2 % (169 - 162)))
                    printf ("YES\n");
                else if (FwiCMTukJhn2 % (120 - 113) != (982 - 982))
                    ;
            }
            else if (JxmKqGo[ZfI5Ot] > f6czetUPA5[ZfI5Ot]) {
                for (j = f6czetUPA5[ZfI5Ot]; j < JxmKqGo[ZfI5Ot]; j++) {
                    FwiCMTukJhn2 += m1[j];
                }
                if (FwiCMTukJhn2 % (448 - 441) == (910 - 910))
                    printf ("YES\n");
                else if (FwiCMTukJhn2 % (750 - 743) != (794 - 794))
                    ;
            }
        }
    }
    return (631 - 631);
}

