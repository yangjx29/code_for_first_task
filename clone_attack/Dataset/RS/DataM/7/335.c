int main () {
    char gIRJMGk [(551 - 251)], jnULXWDa4PZ [(656 - 400)], XzO6VPDsRBjI [(754 - 498)];
    int nAI8KuOnkQZ;
    int shOibPwMTlD;
    int GLOWstDd;
    int qan8utN6JBe;
    int Sn8JvapM;
    int GrYFqoV;
    cin.getline (gIRJMGk, 256);
    cin.getline (jnULXWDa4PZ, 256);
    cin.getline (XzO6VPDsRBjI, 256);
    nAI8KuOnkQZ = strlen (gIRJMGk);
    shOibPwMTlD = strlen (jnULXWDa4PZ);
    GLOWstDd = strlen (XzO6VPDsRBjI);
    for (qan8utN6JBe = (708 - 708); nAI8KuOnkQZ > qan8utN6JBe; qan8utN6JBe++) {
        if (gIRJMGk[qan8utN6JBe] == jnULXWDa4PZ[(776 - 776)]) {
            {
                Sn8JvapM = 432 - 431;
                while (shOibPwMTlD > Sn8JvapM) {
                    if (!(gIRJMGk[Sn8JvapM +qan8utN6JBe] == jnULXWDa4PZ[Sn8JvapM]))
                        break;
                    Sn8JvapM++;
                };
            }
            if (Sn8JvapM == shOibPwMTlD) {
                if (!(GLOWstDd != shOibPwMTlD)) {
                    for (Sn8JvapM = (774 - 774); Sn8JvapM < shOibPwMTlD; Sn8JvapM = Sn8JvapM +1)
                        gIRJMGk[qan8utN6JBe + Sn8JvapM] = XzO6VPDsRBjI[Sn8JvapM];
                }
                else {
                    if (GLOWstDd < shOibPwMTlD) {
                        {
                            Sn8JvapM = 869 - 869;
                            while (Sn8JvapM < GLOWstDd) {
                                gIRJMGk[qan8utN6JBe + Sn8JvapM] = XzO6VPDsRBjI[Sn8JvapM];
                                Sn8JvapM++;
                            };
                        }
                        for (Sn8JvapM = qan8utN6JBe + GLOWstDd;; Sn8JvapM++) {
                            gIRJMGk[Sn8JvapM] = gIRJMGk[Sn8JvapM +shOibPwMTlD - GLOWstDd];
                            if (gIRJMGk[Sn8JvapM] == '\0')
                                break;
                        };
                    }
                    else {
                        for (Sn8JvapM = (809 - 809);; Sn8JvapM++) {
                            if (nAI8KuOnkQZ - Sn8JvapM == qan8utN6JBe + shOibPwMTlD - 1)
                                break;
                            gIRJMGk[nAI8KuOnkQZ + GLOWstDd -shOibPwMTlD - Sn8JvapM] = gIRJMGk[nAI8KuOnkQZ - Sn8JvapM];
                        }
                        for (GrYFqoV = 0; GrYFqoV < GLOWstDd; GrYFqoV++)
                            gIRJMGk[qan8utN6JBe + GrYFqoV] = XzO6VPDsRBjI[GrYFqoV];
                    };
                }
                break;
            };
        };
    }
    cout << gIRJMGk << endl;
    return 0;
}

