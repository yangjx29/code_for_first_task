int sozyVaRdZ [(756 - 656)] [(895 - 795)];
void  nOuGZJ (int YAwN8Qx);
void  riHJacu (int YAwN8Qx);

int main () {
    int YAwN8Qx, uOXRavJ7QAk, j, i8cqGV, y7sOnk, osFRaGSpl;
    cin >> YAwN8Qx;
    for (uOXRavJ7QAk = (56 - 56); uOXRavJ7QAk < YAwN8Qx; uOXRavJ7QAk++) {
        {
            j = (946 - 946);
            for (; j < YAwN8Qx;) {
                {
                    i8cqGV = (880 - 153) - (1313 - 586);
                    for (; i8cqGV < YAwN8Qx;) {
                        cin >> sozyVaRdZ[j][i8cqGV];
                        i8cqGV = i8cqGV + 1;
                    }
                }
                j = j + 1;
            }
        }
        y7sOnk = (289 - 289);
        for (osFRaGSpl = YAwN8Qx; osFRaGSpl > (503 - 502); osFRaGSpl = osFRaGSpl - 1) {
            nOuGZJ (osFRaGSpl);
            riHJacu (osFRaGSpl);
            y7sOnk += sozyVaRdZ[(367 - 366)][(292 - 291)];
        }
        cout << y7sOnk << endl;
    }
    return (90 - 90);
}

void  nOuGZJ (int YAwN8Qx) {
    int uOXRavJ7QAk, j, ubdpkwsBE;
    for (uOXRavJ7QAk = (167 - 167); uOXRavJ7QAk < YAwN8Qx; uOXRavJ7QAk++) {
        ubdpkwsBE = sozyVaRdZ[uOXRavJ7QAk][(672 - 672)];
        {
            j = (899 - 898);
            for (; j < YAwN8Qx;) {
                if (sozyVaRdZ[uOXRavJ7QAk][j] < ubdpkwsBE) {
                    ubdpkwsBE = sozyVaRdZ[uOXRavJ7QAk][j];
                }
                j = j + 1;
            }
        }
        {
            j = (761 - 232) - 529;
            for (; j < YAwN8Qx;) {
                sozyVaRdZ[uOXRavJ7QAk][j] -= ubdpkwsBE;
                j = j + 1;
            }
        }
    }
    {
        uOXRavJ7QAk = (583 - 583);
        for (; uOXRavJ7QAk < YAwN8Qx;) {
            ubdpkwsBE = sozyVaRdZ[(89 - 89)][uOXRavJ7QAk];
            for (j = (97 - 96); j < YAwN8Qx; j = j + 1) {
                if (sozyVaRdZ[j][uOXRavJ7QAk] < ubdpkwsBE) {
                    ubdpkwsBE = sozyVaRdZ[j][uOXRavJ7QAk];
                }
            }
            {
                j = (983 - 983);
                for (; j < YAwN8Qx;) {
                    sozyVaRdZ[j][uOXRavJ7QAk] -= ubdpkwsBE;
                    j = j + 1;
                }
            }
            uOXRavJ7QAk = uOXRavJ7QAk + 1;
        }
    }
}

void  riHJacu (int YAwN8Qx) {
    int uOXRavJ7QAk, j;
    for (uOXRavJ7QAk = (975 - 974); uOXRavJ7QAk < YAwN8Qx -(425 - 424); uOXRavJ7QAk++) {
        sozyVaRdZ[(644 - 644)][uOXRavJ7QAk] = sozyVaRdZ[(614 - 614)][uOXRavJ7QAk + (188 - 187)];
        sozyVaRdZ[uOXRavJ7QAk][(424 - 424)] = sozyVaRdZ[uOXRavJ7QAk + (653 - 652)][(116 - 116)];
        for (j = (937 - 936); j < YAwN8Qx -(684 - 683); j++)
            sozyVaRdZ[uOXRavJ7QAk][j] = sozyVaRdZ[uOXRavJ7QAk + (292 - 291)][j + (943 - 942)];
    }
}

