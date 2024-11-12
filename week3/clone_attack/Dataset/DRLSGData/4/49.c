int main () {
    int u7sUrw;
    int QIWoiD8q;
    int qtpZBLsUj;
    int JblSqRcuix;
    int rvi16b [(1031 - 931)] [(602 - 502)];
    scanf ("%d%d", &u7sUrw, &QIWoiD8q);
    {
        qtpZBLsUj = (754 - 754);
        while (u7sUrw > qtpZBLsUj) {
            for (JblSqRcuix = (542 - 542); QIWoiD8q > JblSqRcuix; JblSqRcuix = JblSqRcuix +(187 - 186))
                scanf ("%d", &rvi16b[qtpZBLsUj][JblSqRcuix]);
            qtpZBLsUj = qtpZBLsUj + (496 - 495);
        }
    }
    for (qtpZBLsUj = (851 - 851); u7sUrw + QIWoiD8q -(983 - 982) > qtpZBLsUj; qtpZBLsUj++) {
        if (qtpZBLsUj < QIWoiD8q &&QIWoiD8q <= u7sUrw)
            for (JblSqRcuix = (53 - 53); qtpZBLsUj >= JblSqRcuix; JblSqRcuix = JblSqRcuix +(512 - 511))
                printf ("%d\n", rvi16b[JblSqRcuix][qtpZBLsUj - JblSqRcuix]);
        else if (qtpZBLsUj >= QIWoiD8q &&QIWoiD8q <= u7sUrw && qtpZBLsUj < u7sUrw)
            for (JblSqRcuix = qtpZBLsUj - QIWoiD8q +(530 - 529); JblSqRcuix <= qtpZBLsUj; JblSqRcuix = JblSqRcuix +(840 - 839))
                printf ("%d\n", rvi16b[JblSqRcuix][qtpZBLsUj - JblSqRcuix]);
        else if (qtpZBLsUj >= u7sUrw && u7sUrw >= QIWoiD8q) {
            JblSqRcuix = qtpZBLsUj - QIWoiD8q +(409 - 408);
            while (u7sUrw > JblSqRcuix) {
                printf ("%d\n", rvi16b[JblSqRcuix][qtpZBLsUj - JblSqRcuix]);
                JblSqRcuix = JblSqRcuix +(667 - 666);
            }
        }
        else if (qtpZBLsUj < u7sUrw && u7sUrw < QIWoiD8q) {
            JblSqRcuix = (353 - 353);
            while (JblSqRcuix <= qtpZBLsUj) {
                printf ("%d\n", rvi16b[JblSqRcuix][qtpZBLsUj - JblSqRcuix]);
                JblSqRcuix++;
            }
        }
        else if (qtpZBLsUj >= u7sUrw && QIWoiD8q > u7sUrw && qtpZBLsUj < QIWoiD8q) {
            JblSqRcuix = 0;
            while (JblSqRcuix < u7sUrw) {
                printf ("%d\n", rvi16b[JblSqRcuix][qtpZBLsUj - JblSqRcuix]);
                JblSqRcuix++;
            }
        }
        else if (qtpZBLsUj >= QIWoiD8q &&QIWoiD8q > u7sUrw) {
            JblSqRcuix = qtpZBLsUj - QIWoiD8q +1;
            while (JblSqRcuix < u7sUrw) {
                printf ("%d\n", rvi16b[JblSqRcuix][qtpZBLsUj - JblSqRcuix]);
                JblSqRcuix++;
            }
        }
    }
    return 0;
}

