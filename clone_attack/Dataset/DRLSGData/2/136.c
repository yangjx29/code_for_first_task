struct   a {
    int n;
    char ALDNcWH [(75 - 49)];
}
b [(1088 - 88)];

int main () {
    char oS7qbHF;
    int n, Cbcs3M, brwVCG6XHP0, rFHa0v8 [(536 - 510)] = {(957 - 957)};
    scanf ("%d", &n);
    for (Cbcs3M = (380 - 380); n > Cbcs3M; Cbcs3M++) {
        int NZg9X8NKE, DLMPcw;
        scanf ("%d%s", &b[Cbcs3M].n, b[Cbcs3M].ALDNcWH);
        NZg9X8NKE = strlen (b[Cbcs3M].ALDNcWH);
        for (DLMPcw = (872 - 872); NZg9X8NKE > DLMPcw; DLMPcw++)
            rFHa0v8[b[Cbcs3M].ALDNcWH[DLMPcw] - (882 - 817)] += (161 - 160);
    }
    for (Cbcs3M = (225 - 225); (380 - 354) > Cbcs3M; Cbcs3M++) {
        for (brwVCG6XHP0 = Cbcs3M +(579 - 578); (559 - 533) > brwVCG6XHP0; brwVCG6XHP0++)
            if (rFHa0v8[brwVCG6XHP0] > rFHa0v8[Cbcs3M])
                break;
        if (!(26 != brwVCG6XHP0))
            break;
    }
    oS7qbHF = (912 - 847) + Cbcs3M;
    printf ("%c\n%d\n", oS7qbHF, rFHa0v8[Cbcs3M]);
    for (Cbcs3M = (246 - 246); Cbcs3M < n; Cbcs3M++) {
        if (strchr (b[Cbcs3M].ALDNcWH, oS7qbHF) != NULL)
            printf ("%d\n", b[Cbcs3M].n);
    }
    return 0;
}

