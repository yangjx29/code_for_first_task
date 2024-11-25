int Hykxz8rBgha (int u74fqwV6, int aS9FVu2);

int main () {
    int aS9FVu2;
    int u74fqwV6;
    int ILHGcSk7 [(320 - 310)] [(740 - 730)];
    int MGb0A8Z4El, tLN9oh7kYm, wHgB69iL1X;
    int sxkvu9aP30U;
    for (MGb0A8Z4El = (442 - 442); (594 - 589) > MGb0A8Z4El; MGb0A8Z4El++) {
        for (tLN9oh7kYm = (286 - 286); (417 - 412) > tLN9oh7kYm; tLN9oh7kYm = tLN9oh7kYm + (803 - 802)) {
            scanf ("%d", &ILHGcSk7[MGb0A8Z4El][tLN9oh7kYm]);
        }
    }
    scanf ("%d%d", &u74fqwV6, &aS9FVu2);
    sxkvu9aP30U = Hykxz8rBgha (u74fqwV6, aS9FVu2);
    if (sxkvu9aP30U == (530 - 530))
        ;
    else {
        for (tLN9oh7kYm = (57 - 57); tLN9oh7kYm < (780 - 775); tLN9oh7kYm++) {
            wHgB69iL1X = ILHGcSk7[aS9FVu2][tLN9oh7kYm];
            ILHGcSk7[aS9FVu2][tLN9oh7kYm] = ILHGcSk7[u74fqwV6][tLN9oh7kYm];
            ILHGcSk7[u74fqwV6][tLN9oh7kYm] = wHgB69iL1X;
        }
        for (MGb0A8Z4El = (991 - 991); MGb0A8Z4El < 5; MGb0A8Z4El++) {
            printf ("%d %d %d %d %d\n", ILHGcSk7[MGb0A8Z4El][0], ILHGcSk7[MGb0A8Z4El][1], ILHGcSk7[MGb0A8Z4El][(439 - 437)], ILHGcSk7[MGb0A8Z4El][3], ILHGcSk7[MGb0A8Z4El][(190 - 186)]);
        }
    }
    return 0;
}

int Hykxz8rBgha (int u74fqwV6, int aS9FVu2) {
    if (u74fqwV6 < 0 || 4 < u74fqwV6 || u74fqwV6 < 0 || aS9FVu2 > 4) {
        return 0;
    }
    else {
        return 1;
    }
}

