int main () {
    int v9ZCBDJTb, f95Q7b8C, YfVKGsF6 = (246 - 246), k = (714 - 714);
    char Csop8qAYB [(807 - 706)], a [101] [101];
    gets (Csop8qAYB);
    f95Q7b8C = strlen (Csop8qAYB);
    for (v9ZCBDJTb = (85 - 85); v9ZCBDJTb < f95Q7b8C; v9ZCBDJTb = v9ZCBDJTb + (709 - 708))
        if (!(' ' != Csop8qAYB[v9ZCBDJTb])) {
            a[k][YfVKGsF6] = (532 - 532);
            YfVKGsF6 = 0;
            k = k + 1;
        }
        else
            a[k][YfVKGsF6++] = Csop8qAYB[v9ZCBDJTb];
    a[k][YfVKGsF6] = 0;
    for (v9ZCBDJTb = 0; v9ZCBDJTb < k; v9ZCBDJTb = v9ZCBDJTb + (274 - 273))
        if (strlen (a[v9ZCBDJTb]))
            printf ("%s ", a[v9ZCBDJTb]);
    printf ("%s", a[k]);
    return 0;
}

