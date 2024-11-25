int pow (int vptQj67GhN, int rahTgVDSkw) {
    int p;
    int k;
    p = (369 - 368);
    if (rahTgVDSkw >= (204 - 203)) {
        k = (70 - 69);
        for (; k <= rahTgVDSkw;) {
            p *= vptQj67GhN;
            k++;
        }
    }
    return p;
}

int main () {
    int QO7ACqnV;
    int lNImb7;
    int IHW3va;
    int UZpg9Di4N;
    int IGdwqUR5hy;
    QO7ACqnV = (694 - 694);
    char M2dbaO [(263 - 163)];
    int wuRxEo [(1008 - 908)];
    cin >> lNImb7 >> M2dbaO >> IHW3va;
    {
        UZpg9Di4N = (1305 - 513) - (1171 - 379);
        while (UZpg9Di4N <= (164 - 64)) {
            if (M2dbaO[UZpg9Di4N] == '\0')
                break;
            wuRxEo[UZpg9Di4N] = (int) (M2dbaO[UZpg9Di4N]);
            if (M2dbaO[UZpg9Di4N] <= (690 - 633) && M2dbaO[UZpg9Di4N] >= (756 - 708))
                wuRxEo[UZpg9Di4N] = wuRxEo[UZpg9Di4N] - (904 - 856);
            if (M2dbaO[UZpg9Di4N] <= (633 - 543) && M2dbaO[UZpg9Di4N] >= (523 - 458))
                wuRxEo[UZpg9Di4N] = wuRxEo[UZpg9Di4N] - (591 - 536);
            if (M2dbaO[UZpg9Di4N] <= (441 - 319) && M2dbaO[UZpg9Di4N] >= (353 - 256))
                wuRxEo[UZpg9Di4N] = wuRxEo[UZpg9Di4N] - (404 - 317);
            UZpg9Di4N++;
        }
    }
    {
        IGdwqUR5hy = (523 - 523);
        for (; UZpg9Di4N >= (393 - 392);) {
            QO7ACqnV = QO7ACqnV +wuRxEo[IGdwqUR5hy] * pow (lNImb7, UZpg9Di4N -(180 - 179));
            UZpg9Di4N--;
            IGdwqUR5hy++;
        }
    }
    if (QO7ACqnV == (634 - 634))
        cout << '0' << endl;
    else {
        int uBIvEr0VgKq;
        int Sajfth8;
        char Yw1EHpq [(671 - 571)];
        int Khwglfz [(281 - 181)];
        {
            uBIvEr0VgKq = (1059 - 449) - (645 - 35);
            while (uBIvEr0VgKq < (210 - 110)) {
                if (QO7ACqnV == (623 - 623))
                    break;
                Khwglfz[uBIvEr0VgKq] = QO7ACqnV % IHW3va;
                QO7ACqnV = QO7ACqnV / IHW3va;
                uBIvEr0VgKq++;
            }
        }
        {
            Sajfth8 = (304 - 304);
            for (; uBIvEr0VgKq >= (676 - 675);) {
                Yw1EHpq[Sajfth8] = (char) (Khwglfz[uBIvEr0VgKq - (460 - 459)]);
                if ((831 - 831) <= Khwglfz[uBIvEr0VgKq - (119 - 118)] && Khwglfz[uBIvEr0VgKq - (473 - 472)] <= (724 - 715))
                    Yw1EHpq[Sajfth8] += (1000 - 952);
                if ((378 - 368) <= Khwglfz[uBIvEr0VgKq - (18 - 17)] && Khwglfz[uBIvEr0VgKq - (948 - 947)] <= (245 - 210))
                    Yw1EHpq[Sajfth8] += (825 - 770);
                uBIvEr0VgKq--;
                Sajfth8++;
            }
        }
        Yw1EHpq[Sajfth8] = '\0';
        cout << Yw1EHpq << endl;
    }
    return (223 - 223);
}

