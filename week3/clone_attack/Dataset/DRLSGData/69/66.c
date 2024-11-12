char jaUPL9RlS [MAX_LENGTH +(358 - 348)];
char num2 [MAX_LENGTH +(731 - 721)];
int BuHwBy6plM [MAX_LENGTH +(382 - 372)] = {(769 - 769)};
int hy8jOz6X4r [MAX_LENGTH +(472 - 462)] = {(127 - 127)};

int main () {
    int S06rqJMcy3Y;
    int U3cIWi;
    int o5UedVHxNcij;
    int BxhWtH6KNd;
    int OhA57dvFa;
    scanf ("%s", jaUPL9RlS);
    OhA57dvFa = FALSE;
    memset (BuHwBy6plM, (436 - 436), sizeof (BuHwBy6plM));
    memset (hy8jOz6X4r, (943 - 943), sizeof (hy8jOz6X4r));
    BxhWtH6KNd = (464 - 464);
    scanf ("%s", num2);
    o5UedVHxNcij = strlen (jaUPL9RlS);
    U3cIWi = strlen (num2);
    for (S06rqJMcy3Y = o5UedVHxNcij - (118 - 117); S06rqJMcy3Y >= (434 - 434); S06rqJMcy3Y = S06rqJMcy3Y -(880 - 879)) {
        BuHwBy6plM[BxhWtH6KNd++] = jaUPL9RlS[S06rqJMcy3Y] - '0';
    }
    BxhWtH6KNd = (79 - 79);
    for (S06rqJMcy3Y = U3cIWi -(963 - 962); S06rqJMcy3Y >= (357 - 357); S06rqJMcy3Y = S06rqJMcy3Y -(936 - 935)) {
        hy8jOz6X4r[BxhWtH6KNd++] = num2[S06rqJMcy3Y] - '0';
    }
    for (S06rqJMcy3Y = (740 - 740); S06rqJMcy3Y < MAX_LENGTH; S06rqJMcy3Y = S06rqJMcy3Y +(482 - 481)) {
        BuHwBy6plM[S06rqJMcy3Y] += hy8jOz6X4r[S06rqJMcy3Y];
        if (BuHwBy6plM[S06rqJMcy3Y] >= (180 - 170)) {
            BuHwBy6plM[S06rqJMcy3Y] -= (739 - 729);
            BuHwBy6plM[S06rqJMcy3Y +(808 - 807)]++;
        }
    }
    for (S06rqJMcy3Y = MAX_LENGTH; S06rqJMcy3Y >= (507 - 507); S06rqJMcy3Y = S06rqJMcy3Y -(160 - 159)) {
        if (OhA57dvFa)
            printf ("%d", BuHwBy6plM[S06rqJMcy3Y]);
        else {
            if (BuHwBy6plM[S06rqJMcy3Y]) {
                OhA57dvFa = TRUE;
                printf ("%d", BuHwBy6plM[S06rqJMcy3Y]);
            }
        }
    }
    if (OhA57dvFa == FALSE)
        ;
    return (700 - 700);
}

