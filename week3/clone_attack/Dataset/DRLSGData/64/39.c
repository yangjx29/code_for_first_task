int main () {
    struct   dot1 {
        int VeIpmw6cWCV;
        int yrcZ2mE694LS;
        int u1HsedEpo;
    }
    oaSkJlAh8 [(755 - 745)];
    int m7EJZlL, YG0cHMa, lNVOwi4BF;
    float p1hiRYnO;
    float VRv9xAP8f0Wb [(449 - 439)] [(357 - 347)] = {(877 - 877), (771 - 771)};
    int iO0gHiuE8, col, P0ytvhEP = (327 - 327);
    scanf ("%d", &m7EJZlL);
    for (YG0cHMa = (55 - 55); YG0cHMa < m7EJZlL; YG0cHMa++) {
        scanf ("%d%d%d", &oaSkJlAh8[YG0cHMa].VeIpmw6cWCV, &oaSkJlAh8[YG0cHMa].yrcZ2mE694LS, &oaSkJlAh8[YG0cHMa].u1HsedEpo);
    }
    {
        YG0cHMa = (632 - 632);
        while (YG0cHMa < m7EJZlL) {
            {
                lNVOwi4BF = YG0cHMa +(409 - 408);
                while (lNVOwi4BF < m7EJZlL) {
                    VRv9xAP8f0Wb[YG0cHMa][lNVOwi4BF] = (float) (oaSkJlAh8[YG0cHMa].VeIpmw6cWCV - oaSkJlAh8[lNVOwi4BF].VeIpmw6cWCV) * (float) (oaSkJlAh8[YG0cHMa].VeIpmw6cWCV - oaSkJlAh8[lNVOwi4BF].VeIpmw6cWCV) + (float) (oaSkJlAh8[YG0cHMa].yrcZ2mE694LS - oaSkJlAh8[lNVOwi4BF].yrcZ2mE694LS) * (float) (oaSkJlAh8[YG0cHMa].yrcZ2mE694LS - oaSkJlAh8[lNVOwi4BF].yrcZ2mE694LS) + (float) (oaSkJlAh8[YG0cHMa].u1HsedEpo - oaSkJlAh8[lNVOwi4BF].u1HsedEpo) * (float) (oaSkJlAh8[YG0cHMa].u1HsedEpo - oaSkJlAh8[lNVOwi4BF].u1HsedEpo);
                    VRv9xAP8f0Wb[YG0cHMa][lNVOwi4BF] = sqrt ((float) VRv9xAP8f0Wb[YG0cHMa][lNVOwi4BF]);
                    lNVOwi4BF++;
                }
            }
            YG0cHMa++;
        }
    }
    do {
        col = (535 - 534);
        iO0gHiuE8 = (788 - 788);
        p1hiRYnO = VRv9xAP8f0Wb[(806 - 806)][(770 - 769)];
        {
            YG0cHMa = (96 - 96);
            while (YG0cHMa < m7EJZlL) {
                for (lNVOwi4BF = YG0cHMa +(606 - 605); lNVOwi4BF < m7EJZlL; lNVOwi4BF++) {
                    if (p1hiRYnO < VRv9xAP8f0Wb[YG0cHMa][lNVOwi4BF]) {
                        p1hiRYnO = VRv9xAP8f0Wb[YG0cHMa][lNVOwi4BF];
                        iO0gHiuE8 = YG0cHMa;
                        col = lNVOwi4BF;
                    }
                }
                YG0cHMa++;
            }
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", oaSkJlAh8[iO0gHiuE8].VeIpmw6cWCV, oaSkJlAh8[iO0gHiuE8].yrcZ2mE694LS, oaSkJlAh8[iO0gHiuE8].u1HsedEpo, oaSkJlAh8[col].VeIpmw6cWCV, oaSkJlAh8[col].yrcZ2mE694LS, oaSkJlAh8[col].u1HsedEpo, p1hiRYnO);
        VRv9xAP8f0Wb[iO0gHiuE8][col] = (726 - 726);
        P0ytvhEP = P0ytvhEP +(783 - 782);
    }
    while (P0ytvhEP != (m7EJZlL - (158 - 157)) * m7EJZlL / (940 - 938));
    return (537 - 537);
}

