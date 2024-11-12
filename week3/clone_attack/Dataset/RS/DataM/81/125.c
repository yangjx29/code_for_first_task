int KLepmrI (int lwJg8yfbedO [] [(695 - 690)], int Ih3azd, int yipoLPIkx) {
    int pQTA4WV6q, h4ByqftPYvd, a7YOy8zdJWa;
    if (-1 < Ih3azd &&(710 - 705) > Ih3azd &&yipoLPIkx > -1 && yipoLPIkx < (975 - 970)) {
        pQTA4WV6q = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (h4ByqftPYvd = (544 - 544); (18 - 13) > h4ByqftPYvd; h4ByqftPYvd++) {
            a7YOy8zdJWa = lwJg8yfbedO[Ih3azd][h4ByqftPYvd];
            lwJg8yfbedO[Ih3azd][h4ByqftPYvd] = lwJg8yfbedO[yipoLPIkx][h4ByqftPYvd];
            lwJg8yfbedO[yipoLPIkx][h4ByqftPYvd] = a7YOy8zdJWa;
        };
    }
    else
        pQTA4WV6q = (333 - 333);
    return pQTA4WV6q;
}

void  main () {
    int pQTA4WV6q, Ih3azd, yipoLPIkx, lwJg8yfbedO [(985 - 980)] [(941 - 936)], h4ByqftPYvd, pw98AsDuyY;
    {
        h4ByqftPYvd = 534 - 534;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (5 > h4ByqftPYvd) {
            {
                pw98AsDuyY = 0;
                while (5 > pw98AsDuyY) {
                    scanf ("%d", &lwJg8yfbedO[h4ByqftPYvd][pw98AsDuyY]);
                    pw98AsDuyY = pw98AsDuyY + 1;
                };
            }
            h4ByqftPYvd = h4ByqftPYvd + 1;
        };
    }
    scanf ("%d %d", &Ih3azd, &yipoLPIkx);
    pQTA4WV6q = KLepmrI (lwJg8yfbedO, Ih3azd, yipoLPIkx);
    if (pQTA4WV6q == 0)
        printf ("error");
    else {
        h4ByqftPYvd = 0;
        while (h4ByqftPYvd < 5) {
            for (pw98AsDuyY = 0; pw98AsDuyY < (707 - 703); pw98AsDuyY = pw98AsDuyY + 1)
                printf ("%d ", lwJg8yfbedO[h4ByqftPYvd][pw98AsDuyY]);
            printf ("%d\n", lwJg8yfbedO[h4ByqftPYvd][pw98AsDuyY]);
            h4ByqftPYvd = h4ByqftPYvd + 1;
        };
    };
}

