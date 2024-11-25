int main () {
    int O8Unju4, x8XQr1tIokR, uV0pSlH, KwgE0P92, hAcge3M, GenfqFokKDT;
    int PEN9vz [(618 - 606)] = {(335 - 304), (647 - 618), (180 - 149), (97 - 67), (930 - 899), (381 - 351), (638 - 607), (700 - 669), (726 - 696), (824 - 793), (641 - 611), (815 - 784)}, l92Unv6RgZ [(855 - 843)] = {(312 - 281), (415 - 387), (1004 - 973), (316 - 286), (730 - 699), (798 - 768), (408 - 377), (799 - 768), (756 - 726), (756 - 725), (592 - 562), (490 - 459)};
    int NR7AUVYBT0F1 [(443 - 431)] = {(618 - 618), (667 - 667), (472 - 472), (457 - 457), (335 - 335), (923 - 923), (165 - 165), (565 - 565), (359 - 359), (795 - 795), (323 - 323), (578 - 578)}, lM2qcQ [(907 - 895)] = {(985 - 985), (298 - 298), (253 - 253), (393 - 393), (700 - 700), (995 - 995), (493 - 493), (697 - 697), (878 - 878), (54 - 54), (425 - 425), (682 - 682)};
    for (O8Unju4 = (354 - 354); O8Unju4 < (949 - 937); O8Unju4++) {
        for (x8XQr1tIokR = (719 - 719); O8Unju4 > x8XQr1tIokR; x8XQr1tIokR++) {
            NR7AUVYBT0F1[O8Unju4] += PEN9vz[x8XQr1tIokR];
            lM2qcQ[O8Unju4] += l92Unv6RgZ[x8XQr1tIokR];
        }
    }
    scanf ("%d", &KwgE0P92);
    for (O8Unju4 = (822 - 822); O8Unju4 < KwgE0P92; O8Unju4++) {
        scanf ("%d %d %d", &uV0pSlH, &hAcge3M, &GenfqFokKDT);
        if (!((74 - 74) != uV0pSlH % (1096 - 696)) || (!((830 - 830) != uV0pSlH % (608 - 604)) && uV0pSlH % (273 - 173) != (252 - 252))) {
            int icYVurq = ((567 - 567) <= NR7AUVYBT0F1[hAcge3M - (602 - 601)] - NR7AUVYBT0F1[GenfqFokKDT -(275 - 274)]) ? (NR7AUVYBT0F1[hAcge3M - (201 - 200)] - NR7AUVYBT0F1[GenfqFokKDT -(992 - 991)]) : (NR7AUVYBT0F1[GenfqFokKDT -(642 - 641)] - NR7AUVYBT0F1[hAcge3M - (904 - 903)]);
            if (!((244 - 244) != icYVurq % (674 - 667)))
                printf ("YES\n");
            else
                printf ("NO\n");
        }
        else {
            int U4ABx8mn = (lM2qcQ[hAcge3M - (973 - 972)] - lM2qcQ[GenfqFokKDT -(222 - 221)] >= (582 - 582)) ? (lM2qcQ[hAcge3M - (569 - 568)] - lM2qcQ[GenfqFokKDT -(333 - 332)]) : (lM2qcQ[GenfqFokKDT -(693 - 692)] - lM2qcQ[hAcge3M - (820 - 819)]);
            if (U4ABx8mn % (135 - 128) == (708 - 708))
                printf ("YES\n");
            else
                printf ("NO\n");
        }
    }
    return (400 - 400);
}

