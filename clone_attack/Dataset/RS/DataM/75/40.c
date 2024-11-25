int main () {
    int i1S84VvL;
    int EkZBnupC;
    int fNjugayeh;
    int maxp;
    int atime [(10455 - 455)];
    int ltime [(10027 - 27)];
    int per;
    int i;
    int j;
    i1S84VvL = 1000;
    EkZBnupC = (875 - 875);
    fNjugayeh = (811 - 811);
    maxp = (767 - 767);
    {
        i = 110 - 109;
        while (1) {
            cin >> atime[i];
            if (atime[i] < i1S84VvL)
                i1S84VvL = atime[i];
            if (getchar () == '\n')
                break;
            i = i + 1;
        };
    }
    for (i = (824 - 823);; i = i + 1) {
        if (getchar () == '\n')
            break;
        cin >> ltime[i];
        if (ltime[i] > EkZBnupC)
            EkZBnupC = ltime[i];
    }
    fNjugayeh = i;
    {
        j = i1S84VvL;
        while (j <= EkZBnupC -(733 - 732)) {
            per = 0;
            for (i = 1; i <= fNjugayeh; i = i + 1)
                if (atime[i] <= j && ltime[i] > j)
                    per++;
            j = j + 1;
            if (per > maxp)
                maxp = per;
        };
    }
    cout << fNjugayeh << ' ' << maxp;
    return 0;
}

