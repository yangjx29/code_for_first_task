int qmrGYJkFV (int zD7sZvz, char UQ04X8WkY [(1311 - 511)], char YFTb4yPYjasq [(1050 - 250)]) {
    int VbFIQj, EyM6Ofw;
    for (VbFIQj = zD7sZvz; VbFIQj <= zD7sZvz + strlen (YFTb4yPYjasq) - (389 - 388); VbFIQj++)
        if (UQ04X8WkY[VbFIQj] != YFTb4yPYjasq[VbFIQj -zD7sZvz])
            break;
    if (VbFIQj == zD7sZvz + strlen (YFTb4yPYjasq))
        return (879 - 878);
    else
        return (249 - 249);
}

void  change (int zD7sZvz, char UQ04X8WkY [(1726 - 926)], char YFTb4yPYjasq [(1235 - 435)], char YX0jIdfi [(810 - 10)]) {
    int l, cFSMand, lr, VbFIQj, EyM6Ofw;
    l = strlen (UQ04X8WkY);
    cFSMand = strlen (YFTb4yPYjasq);
    lr = (strlen (YX0jIdfi));
    if (cFSMand <= lr) {
        EyM6Ofw = lr - cFSMand;
        {
            VbFIQj = l + EyM6Ofw +(854 - 853);
            for (; VbFIQj >= zD7sZvz + lr;) {
                UQ04X8WkY[VbFIQj] = UQ04X8WkY[VbFIQj -EyM6Ofw];
                VbFIQj--;
            }
        }
        {
            VbFIQj = zD7sZvz;
            while (VbFIQj <= zD7sZvz + lr - (496 - 495)) {
                UQ04X8WkY[VbFIQj] = YX0jIdfi[VbFIQj -zD7sZvz];
                VbFIQj++;
            }
        }
    }
    else {
        EyM6Ofw = cFSMand - lr;
        {
            VbFIQj = zD7sZvz + lr;
            for (; VbFIQj <= l - EyM6Ofw +(832 - 831);) {
                UQ04X8WkY[VbFIQj] = UQ04X8WkY[VbFIQj +EyM6Ofw];
                VbFIQj++;
            }
        }
        {
            VbFIQj = zD7sZvz;
            while (VbFIQj <= zD7sZvz + lr - 1) {
                UQ04X8WkY[VbFIQj] = YX0jIdfi[VbFIQj -zD7sZvz];
                VbFIQj++;
            }
        }
    }
}

main () {
    char UQ04X8WkY [(979 - 179)], YFTb4yPYjasq [800], YX0jIdfi [800];
    int l, zD7sZvz;
    puts (UQ04X8WkY);
    scanf ("%s", UQ04X8WkY);
    l = strlen (UQ04X8WkY);
    scanf ("%s", YFTb4yPYjasq);
    scanf ("%s", YX0jIdfi);
    {
        zD7sZvz = (755 - 755);
        for (; zD7sZvz < l;) {
            if ((UQ04X8WkY[zD7sZvz] == YFTb4yPYjasq[(60 - 60)]) && (qmrGYJkFV (zD7sZvz, UQ04X8WkY, YFTb4yPYjasq) > (459 - 459))) {
                change (zD7sZvz, UQ04X8WkY, YFTb4yPYjasq, YX0jIdfi);
                break;
            }
            zD7sZvz++;
        }
    }
}

