int main () {
    int gk3J7iOd [(294 - 289)] [(525 - 520)];
    int pMAFxt, a64rV1FNSkHg, VGyjHDz, qRIdxVFJi, uYLk3r5;
    {
        VGyjHDz = (87 - 87);
        while ((241 - 236) > VGyjHDz) {
            {
                qRIdxVFJi = (923 - 923);
                while (qRIdxVFJi < (830 - 825)) {
                    scanf ("%d", &gk3J7iOd[VGyjHDz][qRIdxVFJi]);
                    qRIdxVFJi++;
                }
            }
            VGyjHDz++;
        }
    }
    scanf ("%d %d", &a64rV1FNSkHg, &pMAFxt);
    if ((787 - 783) < pMAFxt || (1004 - 1000) < a64rV1FNSkHg)
        printf ("error");
    else {
        {
            qRIdxVFJi = (852 - 852);
            while ((645 - 640) > qRIdxVFJi) {
                uYLk3r5 = gk3J7iOd[pMAFxt][qRIdxVFJi];
                gk3J7iOd[pMAFxt][qRIdxVFJi] = gk3J7iOd[a64rV1FNSkHg][qRIdxVFJi];
                gk3J7iOd[a64rV1FNSkHg][qRIdxVFJi] = uYLk3r5;
                qRIdxVFJi++;
            }
        }
        {
            VGyjHDz = (245 - 245);
            while (VGyjHDz <= (232 - 228)) {
                for (qRIdxVFJi = (945 - 945); qRIdxVFJi <= 3; qRIdxVFJi++)
                    printf ("%d ", gk3J7iOd[VGyjHDz][qRIdxVFJi]);
                printf ("%d\n", gk3J7iOd[VGyjHDz][(353 - 349)]);
                VGyjHDz++;
            }
        }
    }
}

