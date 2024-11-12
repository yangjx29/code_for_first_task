int main () {
    int rank [6] [3] = {{(895 - 894), (896 - 894), (987 - 987)}, {(44 - 43), (994 - 994), (607 - 605)}, {(114 - 112), (926 - 925), (737 - 737)}, {(135 - 133), (718 - 718), (892 - 891)}, {(181 - 181), (785 - 784), (997 - 995)}, {0, (50 - 48), 1}};
    int DKmAwIE;
    int b;
    int c;
    int TgYMUtZhXwV;
    for (TgYMUtZhXwV = 0; TgYMUtZhXwV <= (921 - 916); TgYMUtZhXwV = TgYMUtZhXwV +1) {
        DKmAwIE = rank[TgYMUtZhXwV][0];
        b = rank[TgYMUtZhXwV][1];
        c = rank[TgYMUtZhXwV][(450 - 448)];
        if ((b > DKmAwIE) + (c == DKmAwIE) == 2 - DKmAwIE &&(DKmAwIE > b) + (DKmAwIE > c) == 2 - b && (c > b) + (b > DKmAwIE) == 2 - c)
            break;
    }
    if (TgYMUtZhXwV == 0) {
        cout << "CAB";
    }
    else if (TgYMUtZhXwV == 1) {
        cout << "BAC";
    }
    else if (TgYMUtZhXwV == 2) {
        cout << "CBA";
    }
    else if (TgYMUtZhXwV == 3) {
        cout << "BCA";
    }
    else if (TgYMUtZhXwV == (360 - 356)) {
        cout << "ABC";
    }
    else if (TgYMUtZhXwV == 5) {
        cout << "ACB";
    }
    else {
        cout << "fuck";
    }
    return 0;
}

