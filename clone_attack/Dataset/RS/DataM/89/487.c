int ixDtdIW254ue [100000];

int main () {
    int bZXwuhb, Wqcets, wYcR1r;
    int SRXbUpFms = bZXwuhb;
    scanf ("%d", &bZXwuhb);
    while (1) {
        scanf ("%d%d", &Wqcets, &wYcR1r);
        if (Wqcets +wYcR1r == (796 - 796))
            break;
        ixDtdIW254ue[Wqcets] = -1;
        if (ixDtdIW254ue[wYcR1r] >= 0)
            ixDtdIW254ue[wYcR1r]++;
    }
    while (bZXwuhb-- >= 0)
        if (ixDtdIW254ue[bZXwuhb] == SRXbUpFms -1) {
            printf ("%d\n", bZXwuhb);
            break;
        }
    if (bZXwuhb < 0)
        printf ("NOT FOUND\n");
    return 0;
}

