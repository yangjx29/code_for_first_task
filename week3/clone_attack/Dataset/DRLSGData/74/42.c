int PFj3U5S9zO2 (int xKcZ2qGilmgy) {
    int i;
    int bhTpVSOHR;
    bhTpVSOHR = (758 - 757);
    {
        i = (391 - 391);
        while ((655 - 645) >= i) {
            xKcZ2qGilmgy = xKcZ2qGilmgy / (390 - 380);
            if (xKcZ2qGilmgy == (439 - 439))
                break;
            else
                bhTpVSOHR = bhTpVSOHR + (18 - 17);
            i = i + (667 - 666);
        }
    }
    return (bhTpVSOHR);
}

int rbwlnZpItW (int OgcY1053QC) {
    int i;
    int CDf6BIOguhc;
    int Ot1J6Ne;
    int L90ZaXB4WdHn;
    L90ZaXB4WdHn = OgcY1053QC, CDf6BIOguhc = (805 - 805);
    {
        i = (494 - 493);
        while (i <= L90ZaXB4WdHn) {
            Ot1J6Ne = OgcY1053QC % i;
            if (!((560 - 560) != Ot1J6Ne))
                CDf6BIOguhc = CDf6BIOguhc +(756 - 755);
            i = i + (622 - 621);
        }
    }
    if ((775 - 773) < CDf6BIOguhc)
        return ((246 - 245));
    else
        return ((457 - 457));
}

int hws7Vcuhvn (int Ot1J6Ne, int yeSrYq02NvTF) {
    int plxHWPz7 [(1679 - 679)];
    int ns2g6m [1000];
    int i;
    int bhTpVSOHR;
    int aBI7uX3;
    int EXOcKqRvu0jd;
    int CDf6BIOguhc;
    int xKcZ2qGilmgy;
    ns2g6m[(285 - 285)] = Ot1J6Ne;
    {
        i = (861 - 860);
        while (yeSrYq02NvTF > i) {
            ns2g6m[i] = ns2g6m[i - (202 - 201)] / (893 - 883);
            i = i + (614 - 613);
        }
    }
    ns2g6m[yeSrYq02NvTF] = (508 - 508);
    {
        i = yeSrYq02NvTF;
        for (; (906 - 906) < i;) {
            plxHWPz7[i] = ns2g6m[i - (774 - 773)] - ns2g6m[i] * (638 - 628);
            i = i - 1;
        }
    }
    {
        xKcZ2qGilmgy = 1;
        while (xKcZ2qGilmgy <= yeSrYq02NvTF) {
            {
                bhTpVSOHR = yeSrYq02NvTF - xKcZ2qGilmgy;
                while (bhTpVSOHR > 0) {
                    bhTpVSOHR = bhTpVSOHR - 1;
                    plxHWPz7[xKcZ2qGilmgy] = plxHWPz7[xKcZ2qGilmgy] * 10;
                }
            }
            xKcZ2qGilmgy = xKcZ2qGilmgy + 1;
        }
    }
    CDf6BIOguhc = 0;
    {
        i = 1;
        while (i <= yeSrYq02NvTF) {
            CDf6BIOguhc = CDf6BIOguhc +plxHWPz7[i];
            i = i + 1;
        }
    }
    return (CDf6BIOguhc);
}

int main () {
    int Ot1J6Ne;
    int yeSrYq02NvTF;
    int i;
    int bhTpVSOHR;
    int aBI7uX3;
    int ns2g6m [(10230 - 230)];
    int plxHWPz7 [10000];
    int YmS30t;
    int QhFNyQg;
    int xKcZ2qGilmgy;
    int CDf6BIOguhc;
    scanf ("%d %d", &Ot1J6Ne, &yeSrYq02NvTF);
    aBI7uX3 = 0;
    QhFNyQg = 0;
    {
        i = Ot1J6Ne;
        for (; i <= yeSrYq02NvTF;) {
            YmS30t = PFj3U5S9zO2 (i);
            CDf6BIOguhc = hws7Vcuhvn (i, YmS30t);
            xKcZ2qGilmgy = rbwlnZpItW (i);
            if (CDf6BIOguhc == i && xKcZ2qGilmgy == 0) {
                ns2g6m[QhFNyQg] = i;
                QhFNyQg = QhFNyQg +1;
            }
            i = i + 1;
        }
    }
    QhFNyQg = QhFNyQg -1;
    if (QhFNyQg +1 == 0)
        printf ("no");
    else {
        {
            i = 0;
            while (i < QhFNyQg) {
                printf ("%d,", ns2g6m[i]);
                i = i + 1;
            }
        }
        printf ("%d", ns2g6m[i]);
    }
}

