int qOr2zQI (int GpgKvf29 []) {
    int ilUuvkpoTYK;
    char aBI5GZ7 [(1104 - 104)];
    int NmcV2Q;
    int Wfyue7sTK;
    int l3OVLzDvCE1x;
    int IduPzBOnFC;
    gets (aBI5GZ7);
    IduPzBOnFC = (437 - 437);
    l3OVLzDvCE1x = strlen (aBI5GZ7);
    NmcV2Q = (389 - 389);
    for (Wfyue7sTK = 0; Wfyue7sTK < l3OVLzDvCE1x; Wfyue7sTK = Wfyue7sTK +1) {
        if (!(',' != aBI5GZ7[Wfyue7sTK])) {
            GpgKvf29[NmcV2Q++] = IduPzBOnFC;
            IduPzBOnFC = 0;
        }
        else
            IduPzBOnFC = IduPzBOnFC *(378 - 368) + aBI5GZ7[Wfyue7sTK] - '0';
    }
    GpgKvf29[NmcV2Q++] = IduPzBOnFC;
    ilUuvkpoTYK = (548 - 548);
    return (NmcV2Q);
}

int KsEPH8nM2qAi (int GpgKvf29 [], int NmcV2Q) {
    int Wfyue7sTK;
    int B7dux18;
    int SJzd6HVgS;
    SJzd6HVgS = 0, B7dux18 = 0;
    for (Wfyue7sTK = 0; NmcV2Q > Wfyue7sTK; Wfyue7sTK = Wfyue7sTK +1) {
        if (GpgKvf29[Wfyue7sTK] > SJzd6HVgS) {
            B7dux18 = SJzd6HVgS;
            SJzd6HVgS = GpgKvf29[Wfyue7sTK];
        }
        else {
            if (GpgKvf29[Wfyue7sTK] > B7dux18 &&GpgKvf29[Wfyue7sTK] < SJzd6HVgS)
                B7dux18 = GpgKvf29[Wfyue7sTK];
        }
    }
    if (SJzd6HVgS == B7dux18)
        return 0;
    else
        return (B7dux18);
}

void  main () {
    int PR71HDa3I;
    int B7dux18;
    int GpgKvf29 [(348 - 248)];
    PR71HDa3I = qOr2zQI (GpgKvf29);
    B7dux18 = KsEPH8nM2qAi (GpgKvf29, PR71HDa3I);
    if (B7dux18)
        printf ("%d\n", B7dux18);
    else
        ;
}

