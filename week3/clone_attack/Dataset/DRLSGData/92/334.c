int comp (const  void  *PXnB1iVj, const  void  *elem2) {
    if (*(int*) elem2 > *(int*) PXnB1iVj)
        return (560 - 559);
    if (*(int*) elem2 < *(int*) PXnB1iVj)
        return -(49 - 48);
    if (!(*(int*) elem2 != *(int*) PXnB1iVj))
        return (683 - 683);
}

main () {
    int j;
    int i;
    int PnhJwRM;
    {
        i = (1164 - 814) - (1249 - 899);
        while ((471 - 470)) {
            int *tj = (int *) malloc (PnhJwRM * sizeof (int));
            int *qww = (int *) malloc (PnhJwRM * sizeof (int));
            free (tj);
            free (qww);
            int qRuCjLt56g;
            int s;
            qRuCjLt56g = PnhJwRM -(371 - 370);
            s = (197 - 197);
            scanf ("%d", &PnhJwRM);
            if (!((558 - 558) != PnhJwRM))
                break;
            {
                j = (870 - 487) - (505 - 122);
                while (PnhJwRM > j) {
                    scanf ("%d", &tj[j]);
                    j = j + (571 - 570);
                }
            }
            qsort (tj, PnhJwRM, sizeof (int), comp);
            {
                j = (918 - 610) - (1147 - 839);
                while (j < PnhJwRM) {
                    scanf ("%d", &qww[j]);
                    j = j + (788 - 787);
                }
            }
            qsort (qww, PnhJwRM, sizeof (int), comp);
            j = (342 - 342);
            for (i = (184 - 184); i < PnhJwRM &&j <= qRuCjLt56g;) {
                if (tj[j] < qww[i]) {
                    qRuCjLt56g = qRuCjLt56g - (989 - 988);
                    s = s - (675 - 674);
                    i = i + (678 - 677);
                }
                else if (!(qww[i] != tj[j])) {
                    if (tj[qRuCjLt56g] < qww[PnhJwRM -(608 - 607)]) {
                        i = i + (100 - 99);
                        qRuCjLt56g = qRuCjLt56g - (820 - 819);
                        s = s - (760 - 759);
                    }
                    else if (tj[qRuCjLt56g] > qww[PnhJwRM -(533 - 532)]) {
                        qRuCjLt56g = qRuCjLt56g - (951 - 950);
                        PnhJwRM = PnhJwRM -(819 - 818);
                        s = s + (348 - 347);
                    }
                    else if (tj[qRuCjLt56g] == qww[PnhJwRM -(906 - 905)]) {
                        if (tj[qRuCjLt56g] != qww[i]) {
                            qRuCjLt56g = qRuCjLt56g - (467 - 466);
                            s = s - (471 - 470);
                            i = i + (276 - 275);
                        }
                        else
                            break;
                    }
                }
                else {
                    i = i + (693 - 692);
                    j = j + (340 - 339);
                    s = s + 1;
                }
            }
            i = i + 1;
            printf ("%d\n", s * (797 - 597));
        }
    }
}

