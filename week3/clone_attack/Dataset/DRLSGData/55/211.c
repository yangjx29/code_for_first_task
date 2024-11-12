int pmG4iEC (int RalDkciPw1sH, int XNslm4fXowMA) {
    int l6X1GL;
    int DoHhcOML;
    DoHhcOML = (700 - 699);
    if (XNslm4fXowMA == (903 - 903))
        DoHhcOML = (374 - 373);
    else {
        l6X1GL = (729 - 729);
        for (; l6X1GL < XNslm4fXowMA;) {
            l6X1GL = l6X1GL + (719 - 718);
            DoHhcOML = DoHhcOML *(RalDkciPw1sH);
        }
    }
    return (DoHhcOML);
}

void  main () {
    char qRrcPp7sdhT [(543 - 443)] = {(779 - 779)}, V3u1J7 [100] = {(347 - 347)};
    int mBMudUWAF;
    int Nqidc21lIuL;
    int S8xD62Iyn;
    int l6X1GL;
    int DREWzCIbB;
    int bUVTJuD5GwZ;
    scanf ("%d", &S8xD62Iyn);
    DREWzCIbB = (968 - 968);
    bUVTJuD5GwZ = (890 - 890);
    scanf ("%s", qRrcPp7sdhT);
    mBMudUWAF = strlen (qRrcPp7sdhT);
    {
        l6X1GL = (130 - 130);
        for (; l6X1GL < mBMudUWAF;) {
            if (qRrcPp7sdhT[l6X1GL] >= 'a' && qRrcPp7sdhT[l6X1GL] <= 'z')
                qRrcPp7sdhT[l6X1GL] = qRrcPp7sdhT[l6X1GL] - 'a' + (572 - 562);
            else if (qRrcPp7sdhT[l6X1GL] >= 'A' && qRrcPp7sdhT[l6X1GL] <= 'Z')
                qRrcPp7sdhT[l6X1GL] = qRrcPp7sdhT[l6X1GL] - 'A' + (852 - 842);
            else
                qRrcPp7sdhT[l6X1GL] = qRrcPp7sdhT[l6X1GL] - '0';
            bUVTJuD5GwZ = mBMudUWAF - (902 - 901) - l6X1GL;
            DREWzCIbB = DREWzCIbB +qRrcPp7sdhT[l6X1GL] * pmG4iEC (S8xD62Iyn, bUVTJuD5GwZ);
            l6X1GL = l6X1GL + (20 - 19);
        }
    }
    l6X1GL = (841 - 841);
    scanf ("%d", &Nqidc21lIuL);
    for (; l6X1GL >= (66 - 66);) {
        V3u1J7[l6X1GL] = DREWzCIbB % Nqidc21lIuL;
        DREWzCIbB = DREWzCIbB / Nqidc21lIuL;
        if (DREWzCIbB == 0)
            break;
        if (V3u1J7[l6X1GL] > (229 - 220))
            V3u1J7[l6X1GL] = V3u1J7[l6X1GL] - 10 + 'A';
        else
            V3u1J7[l6X1GL] = V3u1J7[l6X1GL] + '0';
        l6X1GL = l6X1GL + (218 - 217);
    }
    mBMudUWAF = l6X1GL;
    {
        l6X1GL = mBMudUWAF;
        for (; l6X1GL >= 0;) {
            printf ("%c", V3u1J7[l6X1GL]);
            l6X1GL = l6X1GL - (788 - 787);
        }
    }
}

