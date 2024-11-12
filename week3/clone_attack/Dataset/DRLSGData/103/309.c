int main () {
    char lLl3fu6Jn1 [(1048 - 48)];
    char ln6ViwK0IZN3 [(1015 - 15)];
    int OCvkxlgW;
    int GKgwr5Nb;
    gets (ln6ViwK0IZN3);
    int liU5qFz [(1859 - 859)] = {(823 - 823)};
    OCvkxlgW = (35 - 35);
    GKgwr5Nb = strlen (ln6ViwK0IZN3);
    {
        int jE2IKc1L;
        jE2IKc1L = (341 - 341);
        for (; GKgwr5Nb > jE2IKc1L;) {
            if ('a' <= ln6ViwK0IZN3[jE2IKc1L] && ln6ViwK0IZN3[jE2IKc1L] <= 'z')
                ln6ViwK0IZN3[jE2IKc1L] = ln6ViwK0IZN3[jE2IKc1L] - 'a' + 'A';
            jE2IKc1L = jE2IKc1L + (735 - 734);
        }
    }
    {
        int bb39TYuLohiU;
        int mnY1kH;
        mnY1kH = (658 - 658);
        for (; GKgwr5Nb > mnY1kH;) {
            if (mnY1kH > (826 - 826) && ln6ViwK0IZN3[mnY1kH] == ln6ViwK0IZN3[mnY1kH - (244 - 243)])
                continue;
            else {
                bb39TYuLohiU = mnY1kH;
                for (; GKgwr5Nb > bb39TYuLohiU;) {
                    if (ln6ViwK0IZN3[mnY1kH] == ln6ViwK0IZN3[bb39TYuLohiU]) {
                        liU5qFz[OCvkxlgW]++;
                        lLl3fu6Jn1[OCvkxlgW] = ln6ViwK0IZN3[mnY1kH];
                    }
                    else {
                        OCvkxlgW = OCvkxlgW +(98 - 97);
                        break;
                    }
                    bb39TYuLohiU = bb39TYuLohiU + (342 - 341);
                }
            }
            mnY1kH = mnY1kH + (727 - 726);
        }
    }
    {
        int SQsq9Nk2edf;
        SQsq9Nk2edf = (217 - 217);
        for (; SQsq9Nk2edf <= OCvkxlgW;) {
            printf ("(%c,%d)", lLl3fu6Jn1[SQsq9Nk2edf], liU5qFz[SQsq9Nk2edf]);
            SQsq9Nk2edf = SQsq9Nk2edf +(495 - 494);
        }
    }
}

