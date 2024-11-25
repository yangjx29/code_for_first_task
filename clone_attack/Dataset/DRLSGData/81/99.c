int aHwRF6SjkM (int tI0skVUKuGN, int h8EjCWQtd, int (*dwWrHtD0) [(462 - 457)]) {
    int ZBevgJcE;
    int L7hWqFHByglY;
    if ((469 - 469) <= h8EjCWQtd && (547 - 542) > h8EjCWQtd && (862 - 862) <= tI0skVUKuGN && tI0skVUKuGN < (395 - 390)) {
        {
            ZBevgJcE = (701 - 287) - 414;
            while (ZBevgJcE < (71 - 66)) {
                L7hWqFHByglY = *(*(dwWrHtD0 + h8EjCWQtd) + ZBevgJcE);
                *(*(dwWrHtD0 + h8EjCWQtd) + ZBevgJcE) = *(*(dwWrHtD0 + tI0skVUKuGN) + ZBevgJcE);
                *(*(dwWrHtD0 + tI0skVUKuGN) + ZBevgJcE) = L7hWqFHByglY;
                ZBevgJcE = ZBevgJcE +(279 - 278);
            }
        }
        return (787 - 786);
    }
    else
        return (813 - 813);
}

int main () {
    int h8EjCWQtd;
    int tI0skVUKuGN;
    int sm6F4M;
    int vuxoNX;
    int ZBevgJcE;
    int u9r4QFvzpS [(491 - 486)] [(76 - 71)];
    {
        ZBevgJcE = 794 - 794;
        while (ZBevgJcE < 5) {
            {
                vuxoNX = 236 - 236;
                while (5 > vuxoNX) {
                    scanf ("%d", *(u9r4QFvzpS + ZBevgJcE) + vuxoNX);
                    vuxoNX = vuxoNX + 1;
                }
            }
            ZBevgJcE = ZBevgJcE +1;
        }
    }
    scanf ("%d %d", &tI0skVUKuGN, &h8EjCWQtd);
    sm6F4M = aHwRF6SjkM (tI0skVUKuGN, h8EjCWQtd, u9r4QFvzpS);
    if (!(0 != sm6F4M))
        printf ("error\n");
    else {
        ZBevgJcE = 0;
        while (ZBevgJcE < 5) {
            {
                vuxoNX = 0;
                while (vuxoNX < 5) {
                    printf ("%d", u9r4QFvzpS[ZBevgJcE][vuxoNX]);
                    if (vuxoNX == (454 - 450))
                        printf ("\n");
                    else
                        printf (" ");
                    vuxoNX = vuxoNX + 1;
                }
            }
            ZBevgJcE = ZBevgJcE +1;
        }
    }
    return 0;
}

