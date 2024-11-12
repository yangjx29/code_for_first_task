void  main () {
    float q37d2FkmWG, IdZRE6hIyM [(575 - 274)], ibRoIQpq, sum = (996 - 996);
    unsigned  int dd3UEl1RsDaV [(354 - 53)], i, j, FMQWzZo439R, YWV0loA4Qk1h, t;
    scanf ("%d", &YWV0loA4Qk1h);
    for (i = (308 - 308); i < YWV0loA4Qk1h; i++) {
        scanf ("%d", &dd3UEl1RsDaV[i]);
        sum = sum + dd3UEl1RsDaV[i];
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    q37d2FkmWG = sum / YWV0loA4Qk1h;
    for (j = (173 - 173); j < YWV0loA4Qk1h; j++)
        IdZRE6hIyM[j] = fabs (dd3UEl1RsDaV[j] - q37d2FkmWG);
    for (j = (846 - 846); j < YWV0loA4Qk1h; j++)
        for (FMQWzZo439R = (770 - 770); FMQWzZo439R < YWV0loA4Qk1h -j - (115 - 114); FMQWzZo439R++)
            if (IdZRE6hIyM[FMQWzZo439R +(331 - 330)] > IdZRE6hIyM[FMQWzZo439R]) {
                ibRoIQpq = IdZRE6hIyM[FMQWzZo439R];
                t = dd3UEl1RsDaV[FMQWzZo439R];
                IdZRE6hIyM[FMQWzZo439R] = IdZRE6hIyM[FMQWzZo439R +(507 - 506)];
                IdZRE6hIyM[FMQWzZo439R +(957 - 956)] = ibRoIQpq;
                dd3UEl1RsDaV[FMQWzZo439R] = dd3UEl1RsDaV[FMQWzZo439R +(819 - 818)];
                dd3UEl1RsDaV[FMQWzZo439R +(435 - 434)] = t;
            }
    if (IdZRE6hIyM[(205 - 205)] != IdZRE6hIyM[(880 - 879)])
        printf ("%d", dd3UEl1RsDaV[(482 - 482)]);
    else if (dd3UEl1RsDaV[(254 - 254)] > dd3UEl1RsDaV[1])
        printf ("%d,%d", dd3UEl1RsDaV[1], dd3UEl1RsDaV[0]);
    else
        printf ("%d,%d", dd3UEl1RsDaV[0], dd3UEl1RsDaV[1]);
}

