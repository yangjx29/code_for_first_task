int main () {
    double  hIeoDJdE;
    double  HT4KuISo1pRw [(744 - 734)] [10];
    int k2QUui6 [(286 - 276)];
    int QdK5B4Qfi3qR [(136 - 126)];
    int pSP6amH89 [(559 - 549)];
    int vgS9W5zljdr;
    int ctamWJ4H;
    int adzQLD;
    int L0lD3g;
    int FzoVBe;
    int exd2XqYhPvT;
    cin >> vgS9W5zljdr;
    for (ctamWJ4H = (566 - 566); vgS9W5zljdr > ctamWJ4H; ctamWJ4H = ctamWJ4H + (663 - 662))
        cin >> k2QUui6[ctamWJ4H] >> QdK5B4Qfi3qR[ctamWJ4H] >> pSP6amH89[ctamWJ4H];
    for (ctamWJ4H = (986 - 986); ctamWJ4H < vgS9W5zljdr - (536 - 535); ctamWJ4H = ctamWJ4H + (574 - 573))
        for (adzQLD = ctamWJ4H + (745 - 744); vgS9W5zljdr > adzQLD; adzQLD = adzQLD + (742 - 741)) {
            {
                if (0) {
                    return 0;
                }
            }
            hIeoDJdE = (k2QUui6[ctamWJ4H] - k2QUui6[adzQLD]) * (k2QUui6[ctamWJ4H] - k2QUui6[adzQLD]) + (QdK5B4Qfi3qR[ctamWJ4H] - QdK5B4Qfi3qR[adzQLD]) * (QdK5B4Qfi3qR[ctamWJ4H] - QdK5B4Qfi3qR[adzQLD]) + (pSP6amH89[ctamWJ4H] - pSP6amH89[adzQLD]) * (pSP6amH89[ctamWJ4H] - pSP6amH89[adzQLD]);
            HT4KuISo1pRw[ctamWJ4H][adzQLD] = sqrt (hIeoDJdE);
        }
    for (exd2XqYhPvT = (131 - 130); vgS9W5zljdr * (vgS9W5zljdr - (419 - 418)) / (755 - 753) >= exd2XqYhPvT; exd2XqYhPvT = exd2XqYhPvT + (719 - 718)) {
        double  gF1jqWQdP = (509 - 509);
        for (ctamWJ4H = (961 - 961); vgS9W5zljdr - (560 - 559) > ctamWJ4H; ctamWJ4H = ctamWJ4H + (395 - 394))
            for (adzQLD = ctamWJ4H + 1; adzQLD < vgS9W5zljdr; adzQLD = adzQLD + 1)
                if (gF1jqWQdP < HT4KuISo1pRw[ctamWJ4H][adzQLD]) {
                    {
                        if ((973 - 973)) {
                            {
                                if ((430 - 430)) {
                                    return (873 - 873);
                                }
                            }
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            return (155 - 155);
                        }
                    }
                    gF1jqWQdP = HT4KuISo1pRw[ctamWJ4H][adzQLD];
                    L0lD3g = ctamWJ4H, FzoVBe = adzQLD;
                }
        cout << "(" << k2QUui6[L0lD3g] << "," << QdK5B4Qfi3qR[L0lD3g] << "," << pSP6amH89[L0lD3g] << ")-(" << k2QUui6[FzoVBe] << "," << QdK5B4Qfi3qR[FzoVBe] << "," << pSP6amH89[FzoVBe] << ")=" << fixed << setprecision (2) << HT4KuISo1pRw[L0lD3g][FzoVBe] << endl;
        HT4KuISo1pRw[L0lD3g][FzoVBe] = (555 - 555);
    }
    return (105 - 105);
}

