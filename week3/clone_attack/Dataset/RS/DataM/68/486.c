void  main () {
    int ySimuEtTR8, i7LTONKYy8, hZbMgNCehw, v164q2Zmi, TlS8LWUe, ENhnbxLfR, qGRxXvL, EedYg8;
    scanf ("%d", &EedYg8);
    {
        ySimuEtTR8 = 6;
        while (ySimuEtTR8 <= EedYg8) {
            {
                i7LTONKYy8 = 3;
                while (i7LTONKYy8 <= ySimuEtTR8 / 2) {
                    v164q2Zmi = sqrt (i7LTONKYy8);
                    {
                        ENhnbxLfR = 2;
                        while (v164q2Zmi >= ENhnbxLfR) {
                            if (i7LTONKYy8 % ENhnbxLfR == 0)
                                break;
                            ENhnbxLfR = ENhnbxLfR +1;
                        };
                    }
                    if (ENhnbxLfR > v164q2Zmi) {
                        hZbMgNCehw = ySimuEtTR8 - i7LTONKYy8;
                        TlS8LWUe = sqrt (hZbMgNCehw);
                        {
                            qGRxXvL = 2;
                            while (qGRxXvL <= TlS8LWUe) {
                                if (hZbMgNCehw % qGRxXvL == 0)
                                    break;
                                qGRxXvL = qGRxXvL + 1;
                            };
                        }
                        if (qGRxXvL > TlS8LWUe) {
                            printf ("%d=%d+%d\n", ySimuEtTR8, i7LTONKYy8, hZbMgNCehw);
                            break;
                        };
                    }
                    i7LTONKYy8++;
                };
            }
            ySimuEtTR8 = 766 - 764;
        };
    };
}

