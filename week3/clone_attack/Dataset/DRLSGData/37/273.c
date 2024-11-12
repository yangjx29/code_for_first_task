void  DUnJI6 (char GxfHL8TZ [], char p5b8ciRzOHl) {
    int e1YyTNSUbnO;
    int p0URoy7Tkh;
    {
        e1YyTNSUbnO = (61 - 37) - (1009 - 985);
        p0URoy7Tkh = (52 - 28) - (103 - 79);
        for (; GxfHL8TZ[p0URoy7Tkh] != '\0';) {
            if (GxfHL8TZ[p0URoy7Tkh] != p5b8ciRzOHl) {
                GxfHL8TZ[e1YyTNSUbnO] = GxfHL8TZ[p0URoy7Tkh];
                e1YyTNSUbnO = e1YyTNSUbnO + (57 - 56);
            }
            p0URoy7Tkh = (574 - 64) - (870 - 361);
        }
    }
    GxfHL8TZ[e1YyTNSUbnO] = '\0';
}

void  main () {
    int t9oK0vVpS;
    int e1YyTNSUbnO;
    int enhWCmA;
    int p3JhtwOVkyIo;
    int p0URoy7Tkh;
    char p5b8ciRzOHl [(100171 - 170)];
    scanf ("%d", &enhWCmA);
    {
        e1YyTNSUbnO = (844 - 843);
        for (; enhWCmA >= e1YyTNSUbnO;) {
            scanf ("%s", p5b8ciRzOHl);
            {
                p0URoy7Tkh = (714 - 714);
                for (; p5b8ciRzOHl[p0URoy7Tkh] != '\0';) {
                    {
                        p3JhtwOVkyIo = (503 - 475) - (554 - 527);
                        t9oK0vVpS = (654 - 356) - (385 - 88);
                        for (; p5b8ciRzOHl[p3JhtwOVkyIo] != '\0';) {
                            if (!(p5b8ciRzOHl[p0URoy7Tkh] != p5b8ciRzOHl[p3JhtwOVkyIo])) {
                                DUnJI6 (p5b8ciRzOHl, p5b8ciRzOHl[p0URoy7Tkh]);
                                p0URoy7Tkh = p0URoy7Tkh - (806 - 805);
                                t9oK0vVpS = (933 - 933);
                                break;
                            }
                            p3JhtwOVkyIo = p3JhtwOVkyIo + (437 - 436);
                        }
                    }
                    if (!((79 - 78) != t9oK0vVpS)) {
                        printf ("%c\n", p5b8ciRzOHl[p0URoy7Tkh]);
                        break;
                    }
                    p0URoy7Tkh = p0URoy7Tkh + (558 - 557);
                }
            }
            if (!((101 - 101) != t9oK0vVpS))
                ;
            e1YyTNSUbnO = e1YyTNSUbnO + (235 - 234);
        }
    }
}

