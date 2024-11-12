void  main () {
    int use6xp40ia, Sto3ZE4W, lYLTZXgKV9UN, hR3ieE;
    char m4UiYrCeZm [(1003 - 903)], YAsU4gO [(575 - 555)], MlIncM1YevJ8 [20], *gudJPM, lhWBUxrXz [(559 - 519)] [20], mcN0XYKP [(327 - 227)] = "";
    gets (m4UiYrCeZm);
    gets (YAsU4gO);
    gets (MlIncM1YevJ8);
    lYLTZXgKV9UN = (370 - 370);
    Sto3ZE4W = (428 - 428);
    for (gudJPM = m4UiYrCeZm; *gudJPM != '\0'; gudJPM++) {
        lhWBUxrXz[Sto3ZE4W][lYLTZXgKV9UN] = *gudJPM;
        lYLTZXgKV9UN++;
        if (isalpha (*gudJPM) * isalpha (*(gudJPM + (259 - 258))) == 0) {
            lhWBUxrXz[Sto3ZE4W][lYLTZXgKV9UN] = '\0';
            lYLTZXgKV9UN = 0;
            Sto3ZE4W++;
        }
    }
    lhWBUxrXz[Sto3ZE4W][lYLTZXgKV9UN] = '\0';
    hR3ieE = Sto3ZE4W;
    for (use6xp40ia = 0; Sto3ZE4W >= use6xp40ia; use6xp40ia++) {
        if (strcmp (lhWBUxrXz[use6xp40ia], YAsU4gO) == 0)
            strcpy (lhWBUxrXz[use6xp40ia], MlIncM1YevJ8);
    }
    for (use6xp40ia = 0; use6xp40ia <= Sto3ZE4W; use6xp40ia++) {
        strcat (mcN0XYKP, lhWBUxrXz[use6xp40ia]);
    }
    printf ("%s", mcN0XYKP);
}

