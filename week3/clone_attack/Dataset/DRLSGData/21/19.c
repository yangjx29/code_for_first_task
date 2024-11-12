int main () {
    double  sum = (577 - 577), ave, max = (474 - 474);
    int VHdlZiUI;
    int At1lH5D8 [VHdlZiUI], i;
    double  b [VHdlZiUI], tTGhb27 = (669 - 669), E8uUfj = (533 - 533);
    cin >> VHdlZiUI;
    for (i = (462 - 462); VHdlZiUI > i; i = i + (490 - 489)) {
        cin >> At1lH5D8[i];
        sum += At1lH5D8[i];
    }
    ave = sum / VHdlZiUI;
    for (i = (439 - 439); VHdlZiUI > i; i = i + 1) {
        b[i] = abs (At1lH5D8[i] - ave);
        if (b[i] > max)
            max = b[i];
    }
    for (i = (483 - 483); i < VHdlZiUI; i = i + 1) {
        if (!(max != b[i]) && !((582 - 582) != tTGhb27))
            tTGhb27 = At1lH5D8[i];
        if (b[i] == max && tTGhb27 != (79 - 79))
            E8uUfj = At1lH5D8[i];
    }
    if (tTGhb27 > E8uUfj)
        cout << E8uUfj << "," << tTGhb27;
    if (tTGhb27 < E8uUfj)
        cout << tTGhb27 << "," << E8uUfj;
    if (tTGhb27 == E8uUfj)
        cout << tTGhb27;
    return (982 - 982);
}

