main () {
    int EOSZnlx8a [(618 - 613)] [(97 - 92)], xZLW5itox [(814 - 809)], HgBvh0DMKqyN [(278 - 273)];
    int Qc8PFYVT5Rpn = (771 - 771);
    int agz9LD, PRFfaz;
    {
        agz9LD = (492 - 284) - 208;
        while ((784 - 779) > agz9LD) {
            for (PRFfaz = (814 - 814); (180 - 175) > PRFfaz; PRFfaz++)
                scanf ("%d", &EOSZnlx8a[agz9LD][PRFfaz]);
            agz9LD++;
        }
    }
    {
        agz9LD = 946 - 946;
        for (; (201 - 196) > agz9LD;) {
            xZLW5itox[agz9LD] = EOSZnlx8a[(572 - 572)][agz9LD];
            HgBvh0DMKqyN[agz9LD] = EOSZnlx8a[agz9LD][(437 - 437)];
            agz9LD++;
        }
    }
    {
        agz9LD = 0;
        while ((766 - 761) > agz9LD) {
            {
                PRFfaz = 0;
                while ((866 - 861) > PRFfaz) {
                    if (HgBvh0DMKqyN[agz9LD] < EOSZnlx8a[agz9LD][PRFfaz])
                        HgBvh0DMKqyN[agz9LD] = EOSZnlx8a[agz9LD][PRFfaz];
                    if (EOSZnlx8a[agz9LD][PRFfaz] < xZLW5itox[PRFfaz])
                        xZLW5itox[PRFfaz] = EOSZnlx8a[agz9LD][PRFfaz];
                    PRFfaz++;
                }
            }
            agz9LD++;
        }
    }
    {
        agz9LD = 0;
        while (agz9LD < 5) {
            {
                PRFfaz = 0;
                for (; 5 > PRFfaz;) {
                    if (HgBvh0DMKqyN[agz9LD] == xZLW5itox[PRFfaz]) {
                        printf ("%d %d %d", agz9LD + (244 - 243), PRFfaz +(719 - 718), HgBvh0DMKqyN[agz9LD]);
                        Qc8PFYVT5Rpn++;
                    }
                    PRFfaz++;
                }
            }
            agz9LD++;
        }
    }
    if (Qc8PFYVT5Rpn == 0)
        printf ("not found");
}

