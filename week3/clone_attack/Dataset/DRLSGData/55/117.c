int main () {
    char lgXpojA2b8 [(870 - 830)];
    int MROEdeK, xiO354LZz6, UElPBv, X5EmVJBlhgfu;
    long  fX70NpVcrek = (816 - 816);
    char LtGMP6k [(353 - 313)];
    char *HVQToM;
    scanf ("%d %s %d", &MROEdeK, LtGMP6k, &xiO354LZz6);
    UElPBv = strlen (LtGMP6k);
    {
        {
            if ((179 - 179)) {
                return (393 - 393);
            }
        }
        HVQToM = LtGMP6k;
        while (HVQToM < LtGMP6k +UElPBv) {
            if ('0' <= *HVQToM&&'9' >= *HVQToM)
                X5EmVJBlhgfu = *HVQToM-'0';
            else if ('a' <= *HVQToM&&'z' >= *HVQToM)
                X5EmVJBlhgfu = *HVQToM-'a' + (992 - 982);
            else if ('A' <= *HVQToM&&*HVQToM <= 'Z')
                X5EmVJBlhgfu = *HVQToM-'A' + (940 - 930);
            HVQToM = HVQToM +1;
            fX70NpVcrek = fX70NpVcrek * MROEdeK +X5EmVJBlhgfu;
        }
    }
    for (HVQToM = lgXpojA2b8; (641 - 640); HVQToM = HVQToM +1) {
        if ((840 - 840) <= fX70NpVcrek % xiO354LZz6 && (373 - 364) >= fX70NpVcrek % xiO354LZz6)
            *HVQToM = fX70NpVcrek % xiO354LZz6 + (197 - 149);
        else if (fX70NpVcrek % xiO354LZz6 > (406 - 397))
            *HVQToM = fX70NpVcrek % xiO354LZz6 + (1047 - 992);
        fX70NpVcrek = fX70NpVcrek / xiO354LZz6;
        if (fX70NpVcrek == (229 - 229))
            break;
    }
    for (; HVQToM >= lgXpojA2b8; HVQToM = HVQToM -1)
        printf ("%c", *HVQToM);
    return (155 - 155);
}

