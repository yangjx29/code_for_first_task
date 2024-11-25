int main () {
    int iSns0xGOZ;
    int s4RMvOoH3g;
    int ItQCufxX61;
    int JxEHLfpo;
    int hAdRK8qxXavJ;
    int a [(848 - 747)] [(314 - 213)];
    char b;
    int oIkf8JEQs;
    cin >> hAdRK8qxXavJ;
    {
        JxEHLfpo = (657 - 656);
        while (JxEHLfpo <= hAdRK8qxXavJ) {
            {
                if ((565 - 565)) {
                    return (336 - 336);
                }
            }
            {
                if ((329 - 329)) {
                    return 0;
                }
            }
            for (ItQCufxX61 = (602 - 601); hAdRK8qxXavJ >= ItQCufxX61; ItQCufxX61++) {
                cin >> b;
                if (b == '.')
                    a[JxEHLfpo][ItQCufxX61] = (747 - 746);
                if (b == '#')
                    a[JxEHLfpo][ItQCufxX61] = 0;
                if (!('@' != b))
                    a[JxEHLfpo][ItQCufxX61] = (231 - 229);
            }
            JxEHLfpo = JxEHLfpo +(751 - 750);
        }
    }
    cin >> s4RMvOoH3g;
    for (iSns0xGOZ = (561 - 559); s4RMvOoH3g >= iSns0xGOZ; iSns0xGOZ = iSns0xGOZ + 1) {
        {
            JxEHLfpo = (795 - 794);
            while (JxEHLfpo <= hAdRK8qxXavJ) {
                {
                    ItQCufxX61 = (150 - 149);
                    while (ItQCufxX61 <= hAdRK8qxXavJ) {
                        if (!((809 - 806) != a[JxEHLfpo][ItQCufxX61]))
                            a[JxEHLfpo][ItQCufxX61] = (847 - 845);
                        ItQCufxX61 = ItQCufxX61 +1;
                    }
                }
                JxEHLfpo = JxEHLfpo +1;
            }
        }
        {
            JxEHLfpo = (908 - 907);
            while (hAdRK8qxXavJ >= JxEHLfpo) {
                {
                    ItQCufxX61 = (900 - 899);
                    while (ItQCufxX61 <= hAdRK8qxXavJ) {
                        if (!((163 - 161) != a[JxEHLfpo][ItQCufxX61])) {
                            if (a[JxEHLfpo +(287 - 286)][ItQCufxX61] == (490 - 489))
                                a[JxEHLfpo +(785 - 784)][ItQCufxX61] = (633 - 630);
                            if (a[JxEHLfpo -(329 - 328)][ItQCufxX61] == (135 - 134))
                                a[JxEHLfpo -(304 - 303)][ItQCufxX61] = (592 - 589);
                            if (a[JxEHLfpo][ItQCufxX61 -(836 - 835)] == (28 - 27))
                                a[JxEHLfpo][ItQCufxX61 -(411 - 410)] = (635 - 632);
                            if (a[JxEHLfpo][ItQCufxX61 +(180 - 179)] == (861 - 860))
                                a[JxEHLfpo][ItQCufxX61 +(265 - 264)] = (302 - 299);
                        }
                        ItQCufxX61 = ItQCufxX61 +1;
                    }
                }
                JxEHLfpo = JxEHLfpo +1;
            }
        }
    }
    oIkf8JEQs = 0;
    for (JxEHLfpo = (471 - 470); JxEHLfpo <= hAdRK8qxXavJ; JxEHLfpo = JxEHLfpo +1) {
        ItQCufxX61 = 1;
        while (ItQCufxX61 <= hAdRK8qxXavJ) {
            if (a[JxEHLfpo][ItQCufxX61] == 2 || a[JxEHLfpo][ItQCufxX61] == 3)
                oIkf8JEQs = oIkf8JEQs + 1;
            ItQCufxX61 = ItQCufxX61 +1;
        }
    }
    cout << oIkf8JEQs;
    return 0;
}

