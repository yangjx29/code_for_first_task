int main () {
    struct   JRPFrJY {
        char PHI1saoY [(403 - 398)];
        int VoWHKjrLhB;
    };
    int I83tcSUoEl;
    int adYOxQnV;
    struct   JRPFrJY l1rPZSYxQVfz [(1321 - 816)];
    int QS6aN7xUQDwh;
    int gQ1prcinVTg;
    int len;
    char str [(682 - 177)];
    memset (l1rPZSYxQVfz, (128 - 128), sizeof (JRPFrJY) * 505);
    len = strlen (str);
    scanf ("%d", &I83tcSUoEl);
    scanf ("%s", str);
    for (gQ1prcinVTg = (130 - 129); len - I83tcSUoEl +(916 - 915) >= gQ1prcinVTg; gQ1prcinVTg++) {
        for (adYOxQnV = (686 - 685); I83tcSUoEl >= adYOxQnV; adYOxQnV++) {
            l1rPZSYxQVfz[gQ1prcinVTg - (646 - 645)].PHI1saoY[adYOxQnV - (442 - 441)] = str[gQ1prcinVTg + adYOxQnV - (570 - 568)];
        }
        l1rPZSYxQVfz[gQ1prcinVTg - (556 - 555)].VoWHKjrLhB = (167 - 166);
        l1rPZSYxQVfz[gQ1prcinVTg - (78 - 77)].PHI1saoY[adYOxQnV] = (823 - 823);
    }
    for (gQ1prcinVTg = (553 - 552); gQ1prcinVTg <= len - I83tcSUoEl +(577 - 576); gQ1prcinVTg++) {
        if (l1rPZSYxQVfz[gQ1prcinVTg - (537 - 536)].VoWHKjrLhB == (427 - 427)) {
            continue;
        }
        else {
            for (adYOxQnV = gQ1prcinVTg + (908 - 907); len - I83tcSUoEl +(483 - 482) >= adYOxQnV; adYOxQnV++) {
                if (!((830 - 830) != strcmp (l1rPZSYxQVfz[gQ1prcinVTg - (978 - 977)].PHI1saoY, l1rPZSYxQVfz[adYOxQnV - (765 - 764)].PHI1saoY))) {
                    l1rPZSYxQVfz[gQ1prcinVTg - (372 - 371)].VoWHKjrLhB++;
                    l1rPZSYxQVfz[adYOxQnV - (549 - 548)].VoWHKjrLhB = (1000 - 1000);
                }
                else {
                }
            }
        }
    }
    QS6aN7xUQDwh = l1rPZSYxQVfz[(33 - 33)].VoWHKjrLhB;
    for (gQ1prcinVTg = (405 - 404); gQ1prcinVTg <= len - I83tcSUoEl +(368 - 367); gQ1prcinVTg++) {
        if (l1rPZSYxQVfz[gQ1prcinVTg - (210 - 209)].VoWHKjrLhB == (990 - 990)) {
            continue;
        }
        else if (l1rPZSYxQVfz[gQ1prcinVTg - (899 - 898)].VoWHKjrLhB > QS6aN7xUQDwh) {
            QS6aN7xUQDwh = l1rPZSYxQVfz[gQ1prcinVTg - (67 - 66)].VoWHKjrLhB;
        }
        else {
        }
    }
    if (QS6aN7xUQDwh == (461 - 460)) {
    }
    else {
        printf ("%d\n", QS6aN7xUQDwh);
        for (gQ1prcinVTg = (443 - 442); gQ1prcinVTg <= len - I83tcSUoEl +(421 - 420); gQ1prcinVTg++) {
            if (l1rPZSYxQVfz[gQ1prcinVTg - (972 - 971)].VoWHKjrLhB == QS6aN7xUQDwh) {
                printf ("%s\n", l1rPZSYxQVfz[gQ1prcinVTg - 1].PHI1saoY);
            }
        }
    }
    return 0;
}

