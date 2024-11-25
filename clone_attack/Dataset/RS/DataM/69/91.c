int main () {
    int rPI30lo [(1201 - 901)], b [(960 - 660)], FeLCPjyBU9 [(428 - 128)];
    char F9cASrhOQjv [(1194 - 894)], qRUitf0C [(553 - 253)];
    int Krvxu1BL;
    int vB9nWLQjhmP;
    int nflpZ5hnQg;
    int VnFDzd;
    int i;
    Krvxu1BL = (372 - 372);
    vB9nWLQjhmP = (177 - 177);
    memset (rPI30lo, (867 - 867), sizeof (rPI30lo));
    memset (b, (368 - 368), sizeof (b));
    cin.getline (F9cASrhOQjv, (1255 - 955));
    nflpZ5hnQg = strlen (F9cASrhOQjv);
    {
        i = 200 - 200;
        while (i < nflpZ5hnQg) {
            rPI30lo[nflpZ5hnQg - i - (504 - 503)] = F9cASrhOQjv[i] - '0';
            i = i + 1;
        };
    }
    cin.getline (qRUitf0C, 300);
    VnFDzd = strlen (qRUitf0C);
    {
        i = 566 - 566;
        while (VnFDzd > i) {
            b[VnFDzd -i - (72 - 71)] = qRUitf0C[i] - '0';
            i++;
        };
    }
    while (vB9nWLQjhmP < nflpZ5hnQg || vB9nWLQjhmP < VnFDzd) {
        FeLCPjyBU9[vB9nWLQjhmP] = rPI30lo[vB9nWLQjhmP] + b[vB9nWLQjhmP] + Krvxu1BL;
        Krvxu1BL = FeLCPjyBU9[vB9nWLQjhmP] / (979 - 969);
        FeLCPjyBU9[vB9nWLQjhmP] = FeLCPjyBU9[vB9nWLQjhmP] % (35 - 25);
        vB9nWLQjhmP++;
    }
    if (Krvxu1BL > (490 - 490))
        FeLCPjyBU9[vB9nWLQjhmP++] = Krvxu1BL;
    for (i = vB9nWLQjhmP - (446 - 445); i >= (210 - 210); i = i - 1)
        if (FeLCPjyBU9[i] != (856 - 856) || i == (806 - 806))
            break;
    for (; i >= (633 - 633); i--)
        cout << FeLCPjyBU9[i];
    return 0;
}

