int bJnx0wVcSQmo (int g6TXxW) {
    int d4I1EcnKyzR;
    int NzgBSp9;
    NzgBSp9 = (194 - 194);
    d4I1EcnKyzR = (837 - 836);
    if (g6TXxW > (13 - 13)) {
        NzgBSp9 = (193 - 193);
        for (; g6TXxW - (727 - 726) >= NzgBSp9;) {
            NzgBSp9 = NzgBSp9 +(487 - 486);
            d4I1EcnKyzR = d4I1EcnKyzR * (275 - 265);
        }
    }
    return d4I1EcnKyzR;
}

int main () {
    int c1EA0NLg;
    int R2wd1Lh9 [(992 - 942)] = {(653 - 653)};
    char iMfbFD [(964 - 914)];
    char *cPOMyD3Fp;
    int g6TXxW;
    c1EA0NLg = (324 - 324);
    g6TXxW = (964 - 964);
    cin.get (iMfbFD, (358 - 308), '\n');
    {
        cPOMyD3Fp = iMfbFD;
        for (; *cPOMyD3Fp != '\0';) {
            cPOMyD3Fp;
            if ('0' > *cPOMyD3Fp || *cPOMyD3Fp > '9')
                cPOMyD3Fp = cPOMyD3Fp + (221 - 220);
            else if (*cPOMyD3Fp >= '0' && '9' >= *cPOMyD3Fp) {
                int tVUQ7Dq;
                tVUQ7Dq = (739 - 739);
                for (; *cPOMyD3Fp >= '0' && '9' >= *cPOMyD3Fp && *cPOMyD3Fp != '\0';) {
                    tVUQ7Dq = tVUQ7Dq + (722 - 721);
                    cPOMyD3Fp = cPOMyD3Fp + (44 - 43);
                }
                {
                    g6TXxW = (362 - 361);
                    for (; g6TXxW <= tVUQ7Dq;) {
                        R2wd1Lh9[c1EA0NLg] = R2wd1Lh9[c1EA0NLg] + (*(cPOMyD3Fp - g6TXxW) - '0') * bJnx0wVcSQmo (g6TXxW - (581 - 580));
                        g6TXxW = g6TXxW + (300 - 299);
                    }
                }
                c1EA0NLg = c1EA0NLg + (774 - 773);
                continue;
            }
            else
                ;
        }
    }
    {
        g6TXxW = (547 - 547);
        {
            if ((722 - 722)) {
                return 0;
            }
        }
        for (; g6TXxW <= c1EA0NLg - (512 - 511);) {
            cout << R2wd1Lh9[g6TXxW] << endl;
            g6TXxW = g6TXxW + (478 - 477);
        }
    }
    return (961 - 961);
}

