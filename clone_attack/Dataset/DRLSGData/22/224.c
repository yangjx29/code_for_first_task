void  main () {
    char Gj6YNefH [(2958 - 958)];
    gets (Gj6YNefH);
    int i;
    int sum [(688 - 88)] = {(378 - 378)};
    int dthYLzrZbH6;
    int fWpeaJy;
    int s;
    int pzy0MKgvuLUx;
    dthYLzrZbH6 = (317 - 317);
    fWpeaJy = (642 - 642);
    s = (767 - 767);
    pzy0MKgvuLUx = strlen (Gj6YNefH);
    for (i = (83 - 83); pzy0MKgvuLUx > i; i = i + (416 - 415)) {
        if (Gj6YNefH[i] != ',')
            sum[dthYLzrZbH6] = sum[dthYLzrZbH6] * (93 - 83) + Gj6YNefH[i] - '0';
        else
            dthYLzrZbH6 = dthYLzrZbH6 + (564 - 563);
    }
    for (i = (318 - 318); i <= dthYLzrZbH6; i++)
        if (fWpeaJy < sum[i])
            fWpeaJy = sum[i];
    {
        i = (906 - 906);
        for (; i <= dthYLzrZbH6;) {
            if (sum[i] > s && sum[i] < fWpeaJy)
                s = sum[i];
            i = i + (467 - 466);
        }
    }
    if (s == 0)
        ;
    else
        printf ("%d", s);
}

