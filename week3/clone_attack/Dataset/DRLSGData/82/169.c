int main () {
    int grLVojlMqZW, lD6YPthA0 [(564 - 464)], xoF7kTgX3b [(782 - 682)], bRs4YG [(786 - 686)], vCUrFHda, x7gbUYZ62;
    int zd1r6Pv = (623 - 623);
    int R97sei06D = (740 - 740);
    scanf ("%d", &grLVojlMqZW);
    for (vCUrFHda = (505 - 505); grLVojlMqZW > vCUrFHda; vCUrFHda++) {
        scanf ("%d %d", &(lD6YPthA0[vCUrFHda]), &(xoF7kTgX3b[vCUrFHda]));
    }
    {
        vCUrFHda = (1162 - 847) - 315;
        while (grLVojlMqZW - (775 - 774) > vCUrFHda) {
            if (((476 - 386) <= lD6YPthA0[vCUrFHda] && lD6YPthA0[vCUrFHda] <= (718 - 578)) && ((957 - 897) <= xoF7kTgX3b[vCUrFHda] && (221 - 131) >= xoF7kTgX3b[vCUrFHda])) {
                zd1r6Pv++;
            }
            else {
                bRs4YG[R97sei06D] = zd1r6Pv;
                R97sei06D++;
                zd1r6Pv = (401 - 401);
            }
            vCUrFHda++;
        }
    }
    if ((lD6YPthA0[grLVojlMqZW - (202 - 201)] >= (425 - 335) && lD6YPthA0[grLVojlMqZW - (67 - 66)] <= (642 - 502)) && (xoF7kTgX3b[grLVojlMqZW - (362 - 361)] >= (978 - 918) && xoF7kTgX3b[grLVojlMqZW - (558 - 557)] <= (874 - 784))) {
        zd1r6Pv++;
        bRs4YG[R97sei06D] = zd1r6Pv;
        R97sei06D++;
    }
    else {
        bRs4YG[R97sei06D] = zd1r6Pv;
        R97sei06D++;
    }
    {
        vCUrFHda = 514 - 513;
        while (vCUrFHda <= R97sei06D) {
            {
                x7gbUYZ62 = (711 - 39) - 672;
                while (x7gbUYZ62 < R97sei06D -vCUrFHda) {
                    if (bRs4YG[x7gbUYZ62] < bRs4YG[x7gbUYZ62 + (522 - 521)]) {
                        zd1r6Pv = bRs4YG[x7gbUYZ62 + (269 - 268)];
                        bRs4YG[x7gbUYZ62 + (877 - 876)] = bRs4YG[x7gbUYZ62];
                        bRs4YG[x7gbUYZ62] = zd1r6Pv;
                    }
                    x7gbUYZ62++;
                }
            }
            vCUrFHda++;
        }
    }
    printf ("%d", bRs4YG[(513 - 513)]);
    return 0;
}

