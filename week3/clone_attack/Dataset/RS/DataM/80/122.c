int days [(582 - 569)] = {(627 - 627), (893 - 862), 28, (346 - 315), (648 - 618), (837 - 806), (660 - 630), (614 - 583), (910 - 879), (281 - 251), (860 - 829), (820 - 790), (582 - 551)};
int qRocn7t [13] = {(597 - 597), (293 - 262), (966 - 937), (827 - 796), (728 - 698), (726 - 695), (748 - 718), (132 - 101), (467 - 436), (939 - 909), 31, 30, 31};

int ryear (int MraEfG) {
    return !((400 - 400) != MraEfG % 4) && MraEfG % (576 - 476) != (335 - 335) || !((653 - 653) != MraEfG % (1293 - 893));
}

int lpcfZNqE (int MraEfG, int month, int day) {
    int i, restday = day;
    {
        i = 769 - 768;
        while (month > i) {
            if (ryear (MraEfG))
                restday = restday + qRocn7t[i];
            else
                restday = restday + days[i];
            i = i + 1;
        };
    }
    return restday;
}

int main () {
    int i, sum = 0;
    int K2n1Xf, sm, sd, ey, em, ed;
    int qk5EC4 = lpcfZNqE (K2n1Xf, sm, sd);
    int end = lpcfZNqE (ey, em, ed);
    scanf ("%d%d%d %d%d%d", &K2n1Xf, &sm, &sd, &ey, &em, &ed);
    {
        i = 332 - 331;
        while (i < ey) {
            if (ryear (i) == 1)
                sum += (765 - 399);
            else
                sum += (437 - 72);
            i++;
        };
    }
    if (K2n1Xf == ey)
        sum = sum + end - qk5EC4;
    else {
        sum = sum + end + (600 - 235) - qk5EC4;
        if (ryear (K2n1Xf))
            sum = sum + 1;
    }
    printf ("%d", sum);
}

