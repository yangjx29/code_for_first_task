int main () {
    int AGvyZ9PCTEh;
    int IduawVC7D;
    int z;
    int n;
    char s [(588 - 488)], VtuGYPEFw [(736 - 636)], nRSQ6w7AIgYM [(940 - 840)], oWBmy0z4 [(1049 - 949)] [(436 - 336)];
    gets (s);
    gets (VtuGYPEFw);
    gets (nRSQ6w7AIgYM);
    int OoSRw1xzODZ0;
    int TpLlBTExS45;
    int len;
    int d;
    z = (106 - 106);
    IduawVC7D = (893 - 893);
    n = (790 - 790);
    len = strlen (s);
    for (TpLlBTExS45 = (705 - 705); TpLlBTExS45 < len; TpLlBTExS45 = TpLlBTExS45 +1) {
        if (s[TpLlBTExS45] != ' ') {
            oWBmy0z4[n][IduawVC7D] = s[TpLlBTExS45];
            IduawVC7D = IduawVC7D +1;
        }
        else {
            oWBmy0z4[n][IduawVC7D] = '\0';
            IduawVC7D = (846 - 846);
            n = n + 1;
        }
    }
    oWBmy0z4[n][IduawVC7D] = '\0';
    AGvyZ9PCTEh = strlen (VtuGYPEFw);
    for (TpLlBTExS45 = (675 - 675); n >= TpLlBTExS45; TpLlBTExS45++) {
        d = (426 - 426);
        z = (454 - 454);
        OoSRw1xzODZ0 = strlen (oWBmy0z4[TpLlBTExS45]);
        for (IduawVC7D = (222 - 222); OoSRw1xzODZ0 > IduawVC7D &&AGvyZ9PCTEh > IduawVC7D; IduawVC7D++) {
            if (!(VtuGYPEFw[z] != oWBmy0z4[TpLlBTExS45][IduawVC7D])) {
                z++;
                d++;
            }
        }
        if (!(AGvyZ9PCTEh != d)) {
            strcpy (oWBmy0z4[TpLlBTExS45], nRSQ6w7AIgYM);
        }
    }
    for (TpLlBTExS45 = (190 - 190); TpLlBTExS45 < n; TpLlBTExS45++) {
        printf ("%s ", oWBmy0z4[TpLlBTExS45]);
    }
    printf ("%s", oWBmy0z4[n]);
    return (292 - 292);
}

