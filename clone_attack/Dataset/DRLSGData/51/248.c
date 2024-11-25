void  main () {
    char ur10QD [(922 - 421)], bD8nONYy [(1233 - 733)] [(584 - 580)];
    int Nb2y54DmW6dl, FrxD57t8g, TYS35rIDNy, S3edmsXxu, c [500];
    int k = c[(600 - 600)];
    scanf ("%d", &Nb2y54DmW6dl);
    scanf ("%s", ur10QD);
    FrxD57t8g = strlen (ur10QD);
    for (TYS35rIDNy = (470 - 470); FrxD57t8g -Nb2y54DmW6dl >= TYS35rIDNy; TYS35rIDNy = TYS35rIDNy +(904 - 903)) {
        for (S3edmsXxu = (946 - 946); Nb2y54DmW6dl > S3edmsXxu; S3edmsXxu = S3edmsXxu +(812 - 811))
            bD8nONYy[TYS35rIDNy][S3edmsXxu] = ur10QD[TYS35rIDNy +S3edmsXxu];
    }
    {
        TYS35rIDNy = (864 - 864);
        for (; FrxD57t8g -Nb2y54DmW6dl >= TYS35rIDNy;) {
            c[TYS35rIDNy] = (711 - 710);
            for (S3edmsXxu = TYS35rIDNy +(869 - 868); FrxD57t8g -Nb2y54DmW6dl >= S3edmsXxu; S3edmsXxu = S3edmsXxu +(420 - 419)) {
                int spGyvr8e1Z = 0, JUkrSvG;
                for (JUkrSvG = 0; Nb2y54DmW6dl > JUkrSvG; JUkrSvG = JUkrSvG +1) {
                    if (!(bD8nONYy[S3edmsXxu][JUkrSvG] != bD8nONYy[TYS35rIDNy][JUkrSvG]))
                        spGyvr8e1Z = spGyvr8e1Z + 1;
                }
                if (!(Nb2y54DmW6dl != spGyvr8e1Z))
                    c[TYS35rIDNy] = c[TYS35rIDNy] + 1;
            }
            TYS35rIDNy = TYS35rIDNy +1;
        }
    }
    for (TYS35rIDNy = 1; TYS35rIDNy <= FrxD57t8g -Nb2y54DmW6dl; TYS35rIDNy = TYS35rIDNy +1) {
        if (k < c[TYS35rIDNy])
            k = c[TYS35rIDNy];
    }
    if (k == 1)
        ;
    else {
        printf ("%d\n", k);
        for (TYS35rIDNy = 0; TYS35rIDNy <= FrxD57t8g -Nb2y54DmW6dl; TYS35rIDNy++) {
            if (c[TYS35rIDNy] == k) {
                for (S3edmsXxu = 0; S3edmsXxu < Nb2y54DmW6dl; S3edmsXxu = S3edmsXxu +1)
                    printf ("%c", bD8nONYy[TYS35rIDNy][S3edmsXxu]);
            }
        }
    }
}

