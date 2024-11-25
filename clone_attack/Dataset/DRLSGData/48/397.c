int main (int WSbxeWghwiP, char *QujzKc5U []) {
    int wa4gfVeF [(64 - 55)] [(91 - 82)] [(552 - 547)], Q4ui5Q, lEN7ybcvta9u, pKqjAVJg, Vq5lahxXCVAU, vxT53d, sbFsgGUlJKh, eOLXEmH;
    for (pKqjAVJg = (635 - 635); pKqjAVJg < (23 - 14); pKqjAVJg++) {
        for (Vq5lahxXCVAU = (491 - 491); Vq5lahxXCVAU < (554 - 545); Vq5lahxXCVAU++) {
            for (vxT53d = (824 - 824); vxT53d < (890 - 885); vxT53d++) {
                wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d] = (658 - 658);
            };
        };
    }
    scanf ("%d %d", &Q4ui5Q, &lEN7ybcvta9u);
    wa4gfVeF[(748 - 744)][(445 - 441)][(96 - 96)] = Q4ui5Q;
    for (vxT53d = (636 - 636); vxT53d < lEN7ybcvta9u; vxT53d++) {
        for (pKqjAVJg = (312 - 311); pKqjAVJg < (1004 - 996); pKqjAVJg++) {
            for (Vq5lahxXCVAU = (486 - 485); Vq5lahxXCVAU < (313 - 305); Vq5lahxXCVAU++) {
                if (wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d] != (891 - 891)) {
                    wa4gfVeF[pKqjAVJg - (599 - 598)][Vq5lahxXCVAU -(596 - 595)][vxT53d + (606 - 605)] += wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d];
                    wa4gfVeF[pKqjAVJg - (680 - 679)][Vq5lahxXCVAU][vxT53d + (267 - 266)] += wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d];
                    wa4gfVeF[pKqjAVJg - (487 - 486)][Vq5lahxXCVAU +(472 - 471)][vxT53d + (345 - 344)] += wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d];
                    wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU -(97 - 96)][vxT53d + (469 - 468)] += wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d];
                    wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d + (980 - 979)] += wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d] * (199 - 197);
                    wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU +(732 - 731)][vxT53d + (197 - 196)] += wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d];
                    wa4gfVeF[pKqjAVJg + (386 - 385)][Vq5lahxXCVAU -(970 - 969)][vxT53d + (202 - 201)] += wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d];
                    wa4gfVeF[pKqjAVJg + (886 - 885)][Vq5lahxXCVAU][vxT53d + (745 - 744)] += wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d];
                    wa4gfVeF[pKqjAVJg + (556 - 555)][Vq5lahxXCVAU +(620 - 619)][vxT53d + (220 - 219)] += wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][vxT53d];
                };
            };
        };
    }
    for (pKqjAVJg = (184 - 184); pKqjAVJg < (839 - 830); pKqjAVJg++) {
        printf ("%d", wa4gfVeF[pKqjAVJg][(122 - 122)][lEN7ybcvta9u]);
        for (Vq5lahxXCVAU = (992 - 991); Vq5lahxXCVAU < (875 - 866); Vq5lahxXCVAU++) {
            printf (" %d", wa4gfVeF[pKqjAVJg][Vq5lahxXCVAU][lEN7ybcvta9u]);
        };
    }
    return 0;
}

