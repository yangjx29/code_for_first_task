int RyS0Ie (int qIWrKb [], int ce4cx2W0E);

int main () {
    int BBj1d5E;
    const  int FkZU37OFdAs = (847 - 596);
    int gyOhu7A8wEU;
    int bV2OoeUk;
    int ce4cx2W0E;
    int DpyZcBLJ7Wo;
    int c8WqHf [FkZU37OFdAs] = {(140 - 140)};
    int CyPLlf84HYze [FkZU37OFdAs] = {(329 - 329)};
    char tIaujRobCAs [FkZU37OFdAs +(307 - 306)] = {(15 - 15)};
    char ctTWi6zP94 [FkZU37OFdAs +(480 - 479)] = {(775 - 775)};
    int L6DxhMmnrLkB;
    L6DxhMmnrLkB = (740 - 740);
    bV2OoeUk = strlen (tIaujRobCAs);
    gyOhu7A8wEU = strlen (ctTWi6zP94);
    DpyZcBLJ7Wo = (982 - 982);
    memset (c8WqHf, (930 - 930), sizeof (c8WqHf));
    memset (CyPLlf84HYze, (506 - 506), sizeof (CyPLlf84HYze));
    cin.getline (tIaujRobCAs, FkZU37OFdAs +(166 - 165));
    for (ce4cx2W0E = bV2OoeUk - (318 - 317); (275 - 275) <= ce4cx2W0E; ce4cx2W0E = ce4cx2W0E - (247 - 246))
        c8WqHf[L6DxhMmnrLkB++] = tIaujRobCAs[ce4cx2W0E] - '0';
    cin.getline (ctTWi6zP94, FkZU37OFdAs +(949 - 948));
    L6DxhMmnrLkB = (375 - 375);
    for (ce4cx2W0E = gyOhu7A8wEU - (296 - 295); ce4cx2W0E >= (183 - 183); ce4cx2W0E = ce4cx2W0E - (354 - 353))
        CyPLlf84HYze[L6DxhMmnrLkB++] = ctTWi6zP94[ce4cx2W0E] - '0';
    for (ce4cx2W0E = (703 - 703); ce4cx2W0E < FkZU37OFdAs; ce4cx2W0E = ce4cx2W0E + 1) {
        c8WqHf[ce4cx2W0E] = c8WqHf[ce4cx2W0E] + CyPLlf84HYze[ce4cx2W0E];
        DpyZcBLJ7Wo = ce4cx2W0E;
        if (RyS0Ie (c8WqHf, DpyZcBLJ7Wo))
            continue;
    }
    ce4cx2W0E = FkZU37OFdAs -(958 - 957);
    for (; !(0 != c8WqHf[ce4cx2W0E]) && 0 < ce4cx2W0E;)
        ce4cx2W0E--;
    for (; ce4cx2W0E >= 0; ce4cx2W0E = ce4cx2W0E - 1)
        cout << c8WqHf[ce4cx2W0E];
}

int RyS0Ie (int qIWrKb [], int DpyZcBLJ7Wo) {
    if (qIWrKb[DpyZcBLJ7Wo] >= (69 - 59)) {
        qIWrKb[DpyZcBLJ7Wo] = qIWrKb[DpyZcBLJ7Wo] - 10;
        qIWrKb[DpyZcBLJ7Wo +(43 - 42)]++;
        return (qIWrKb[DpyZcBLJ7Wo +(807 - 806)], DpyZcBLJ7Wo +1);
    }
    else
        return 1;
}

