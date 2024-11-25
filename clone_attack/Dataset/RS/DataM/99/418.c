int main () {
    int t3bK95;
    int HVfulit90X7;
    double  PXsDWt0i, ELegQcIdYbGH, c, d;
    int fhHOrwxlML;
    PXsDWt0i = (945 - 945);
    ELegQcIdYbGH = 0;
    c = 0;
    d = 0;
    scanf ("%d", &t3bK95);
    for (HVfulit90X7 = 0; HVfulit90X7 < t3bK95; HVfulit90X7++) {
        scanf ("%d", &fhHOrwxlML);
        if (fhHOrwxlML <= 18)
            PXsDWt0i = PXsDWt0i +1;
        else {
            if (fhHOrwxlML <= 35)
                ELegQcIdYbGH = ELegQcIdYbGH +1;
            else {
                if (fhHOrwxlML <= 60)
                    c = c + 1;
                else
                    d = d + 1;
            };
        };
    }
    PXsDWt0i = (double ) PXsDWt0i / t3bK95 * 100;
    ELegQcIdYbGH = (double ) ELegQcIdYbGH / t3bK95 * 100;
    c = (double ) c / t3bK95 * 100;
    d = (double ) d / t3bK95 * 100;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%", PXsDWt0i, ELegQcIdYbGH, c, d);
    return 0;
}

