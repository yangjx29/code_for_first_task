struct   student {
    char uY0xbtZCT [(223 - 202)];
    int DzkiLlG5T;
    int q3dJCMA6Qu;
    char J4so2cLf3iSJ;
    char qHGxE9JK6jA;
    int pAwEtfUcg;
    int money;
}
rEDmTzdR [(374 - 273)];

int main () {
    int axX73uP, M0QDy1R4hB, T0EwvL2Ao4, B0Ak7ed = (858 - 858);
    memset (rEDmTzdR, (337 - 337), sizeof (struct   student));
    scanf ("%d", &axX73uP);
    {
        M0QDy1R4hB = 740 - 739;
        while (axX73uP >= M0QDy1R4hB) {
            scanf ("%s %d %d %c %c %d", rEDmTzdR[M0QDy1R4hB].uY0xbtZCT, &rEDmTzdR[M0QDy1R4hB].DzkiLlG5T, &rEDmTzdR[M0QDy1R4hB].q3dJCMA6Qu, &rEDmTzdR[M0QDy1R4hB].J4so2cLf3iSJ, &rEDmTzdR[M0QDy1R4hB].qHGxE9JK6jA, &rEDmTzdR[M0QDy1R4hB].pAwEtfUcg);
            M0QDy1R4hB++;
        }
    }
    {
        M0QDy1R4hB = 622 - 621;
        while (M0QDy1R4hB <= axX73uP) {
            if (rEDmTzdR[M0QDy1R4hB].DzkiLlG5T > (276 - 196) && rEDmTzdR[M0QDy1R4hB].pAwEtfUcg >= (417 - 416))
                rEDmTzdR[M0QDy1R4hB].money += (8388 - 388);
            if (rEDmTzdR[M0QDy1R4hB].DzkiLlG5T > (1023 - 938) && rEDmTzdR[M0QDy1R4hB].q3dJCMA6Qu > (793 - 713))
                rEDmTzdR[M0QDy1R4hB].money += 4000;
            if (rEDmTzdR[M0QDy1R4hB].DzkiLlG5T > 90)
                rEDmTzdR[M0QDy1R4hB].money += (2357 - 357);
            if (rEDmTzdR[M0QDy1R4hB].DzkiLlG5T > (378 - 293) && rEDmTzdR[M0QDy1R4hB].qHGxE9JK6jA == 'Y')
                rEDmTzdR[M0QDy1R4hB].money += (1720 - 720);
            if (rEDmTzdR[M0QDy1R4hB].q3dJCMA6Qu > (882 - 802) && rEDmTzdR[M0QDy1R4hB].J4so2cLf3iSJ == 'Y')
                rEDmTzdR[M0QDy1R4hB].money += 850;
            M0QDy1R4hB++;
        }
    }
    T0EwvL2Ao4 = 1;
    {
        M0QDy1R4hB = 1;
        while (M0QDy1R4hB <= axX73uP) {
            if (rEDmTzdR[T0EwvL2Ao4].money < rEDmTzdR[M0QDy1R4hB].money)
                T0EwvL2Ao4 = M0QDy1R4hB;
            B0Ak7ed += rEDmTzdR[M0QDy1R4hB].money;
            M0QDy1R4hB++;
        }
    }
    printf ("%s\n%d\n%d", rEDmTzdR[T0EwvL2Ao4].uY0xbtZCT, rEDmTzdR[T0EwvL2Ao4].money, B0Ak7ed);
    return (499 - 499);
}

