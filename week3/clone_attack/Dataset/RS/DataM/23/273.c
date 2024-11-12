int main () {
    char WME9vobG [(1031 - 931)] [100], input [(1034 - 933)];
    int TEW9xfVo1;
    int k;
    int f7mFerZ5;
    int SeAS86Xy;
    int GOawSPJ;
    TEW9xfVo1 = (66 - 66);
    k = (746 - 746);
    f7mFerZ5 = 1;
    char *pKPAUjoeFq4, (*CvrNXmh) [100];
    pKPAUjoeFq4 = input;
    for (SeAS86Xy = (229 - 229); !('\n' == (*(pKPAUjoeFq4 = pKPAUjoeFq4 + 1) = getchar ())); SeAS86Xy = SeAS86Xy +1)
        TEW9xfVo1 = TEW9xfVo1 +1;
    *(pKPAUjoeFq4 - 1) = '\0';
    pKPAUjoeFq4 = input;
    CvrNXmh = WME9vobG;
    CvrNXmh = WME9vobG;
    for (SeAS86Xy = (134 - 134); !('\0' == *(pKPAUjoeFq4 + SeAS86Xy)); SeAS86Xy = SeAS86Xy +1)
        if (!(' ' != *(pKPAUjoeFq4 + SeAS86Xy)))
            f7mFerZ5 = f7mFerZ5 + 1;
    pKPAUjoeFq4 = input;
    for (SeAS86Xy = 0; f7mFerZ5 > SeAS86Xy; SeAS86Xy = SeAS86Xy +1) {
        k = k + 1;
        for (GOawSPJ = 0; *pKPAUjoeFq4 != '\0' && *(pKPAUjoeFq4++) != ' '; GOawSPJ = GOawSPJ +1)
            *(*(CvrNXmh +SeAS86Xy) + GOawSPJ) = *(pKPAUjoeFq4 - 1);
        *(*(CvrNXmh +SeAS86Xy) + GOawSPJ) = '\0';
    }
    for (SeAS86Xy = k - 1; SeAS86Xy >= 0; SeAS86Xy--) {
        if (SeAS86Xy == 0)
            printf ("%s", *(CvrNXmh +SeAS86Xy));
        else
            printf ("%s ", *(CvrNXmh +SeAS86Xy));
    }
    return 0;
}

