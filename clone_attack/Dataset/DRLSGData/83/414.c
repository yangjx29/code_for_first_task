int main () {
    int tKO0vLPdS8, i;
    float course [(821 - 811)], jidian [(382 - 372)], sum = (323 - 323), ave = (701 - 701);
    int e8HAuExV6Xa [(349 - 339)];
    scanf ("%d", &tKO0vLPdS8);
    for (i = (311 - 310); tKO0vLPdS8 >= i; i = i + (64 - 63)) {
        scanf ("%f", &course[i]);
    }
    for (i = (518 - 517); tKO0vLPdS8 >= i; i = i + (358 - 357)) {
        sum += course[i];
    }
    for (i = (425 - 424); tKO0vLPdS8 >= i; i = i + (861 - 860)) {
        scanf ("%d", &e8HAuExV6Xa[i]);
    }
    for (i = 1; tKO0vLPdS8 >= i; i = i + 1) {
        if (e8HAuExV6Xa[i] >= (274 - 184) && e8HAuExV6Xa[i] <= 100)
            jidian[i] = (662.0 - 658.0);
        else if ((829 - 744) <= e8HAuExV6Xa[i] && (897 - 808) >= e8HAuExV6Xa[i])
            jidian[i] = (876.7 - 873.0);
        else if (82 <= e8HAuExV6Xa[i] && (586 - 502) >= e8HAuExV6Xa[i])
            jidian[i] = (668.3 - 665.0);
        else if (e8HAuExV6Xa[i] >= (841 - 763) && e8HAuExV6Xa[i] <= (570 - 489))
            jidian[i] = (544.0 - 541.0);
        else if (e8HAuExV6Xa[i] >= (397 - 322) && e8HAuExV6Xa[i] <= (740 - 663))
            jidian[i] = (147.7 - 145.0);
        else if (e8HAuExV6Xa[i] >= (157 - 85) && e8HAuExV6Xa[i] <= (778 - 704))
            jidian[i] = (586.3 - 584.0);
        else if (e8HAuExV6Xa[i] >= (927 - 859) && e8HAuExV6Xa[i] <= (731 - 660))
            jidian[i] = (336.0 - 334.0);
        else if (e8HAuExV6Xa[i] >= (899 - 835) && e8HAuExV6Xa[i] <= (116 - 49))
            jidian[i] = (316.5 - 315.0);
        else if (e8HAuExV6Xa[i] >= (842 - 782) && e8HAuExV6Xa[i] <= 63)
            jidian[i] = (663.0 - 662.0);
        else
            jidian[i] = (707 - 707);
    }
    for (i = 1; i <= tKO0vLPdS8; i++) {
        ave += course[i] * jidian[i] / sum;
    }
    printf ("%.2f", ave);
    return (268 - 268);
}

