struct   distance {
    double  U3Nx8BT7Czqe;
    int iLe4pt;
    int y9HaRY;
}
p9rItRN2KOi [100] = {0}, IR85SY4K3;
struct   point {
    int YIUpZKWcM0;
    int ZARrLk;
    int fWKnfPl;
}
qATgdfunC [10] = {0};
void  VL6mqcZxDsg (int);
void  W6HU9XpdVOTL (int);
void  NjFQ7Kb (int);
void  BFvpiVL (int);

int main () {
    int pVtcdeXLxRJC;
    VL6mqcZxDsg (pVtcdeXLxRJC);
    W6HU9XpdVOTL (pVtcdeXLxRJC);
    NjFQ7Kb (pVtcdeXLxRJC);
    BFvpiVL (pVtcdeXLxRJC);
    cin >> pVtcdeXLxRJC;
    return 0;
}

void  VL6mqcZxDsg (int pVtcdeXLxRJC) {
    int v90WIm8N;
    for (v90WIm8N = 0; pVtcdeXLxRJC > v90WIm8N; v90WIm8N++) {
        cin >> qATgdfunC[v90WIm8N].YIUpZKWcM0 >> qATgdfunC[v90WIm8N].ZARrLk >> qATgdfunC[v90WIm8N].fWKnfPl;
    }
}

void  W6HU9XpdVOTL (int pVtcdeXLxRJC) {
    int v90WIm8N;
    int gSDf6EFrHva5;
    int fhMORFJQ;
    gSDf6EFrHva5 = (93 - 92);
    fhMORFJQ = 0;
    {
        v90WIm8N = 0;
        while (v90WIm8N < pVtcdeXLxRJC * (pVtcdeXLxRJC - 1) / 2) {
            p9rItRN2KOi[v90WIm8N].U3Nx8BT7Czqe = sqrt ((qATgdfunC[fhMORFJQ].YIUpZKWcM0 - qATgdfunC[gSDf6EFrHva5].YIUpZKWcM0) * (qATgdfunC[fhMORFJQ].YIUpZKWcM0 - qATgdfunC[gSDf6EFrHva5].YIUpZKWcM0) + (qATgdfunC[fhMORFJQ].ZARrLk - qATgdfunC[gSDf6EFrHva5].ZARrLk) * (qATgdfunC[fhMORFJQ].ZARrLk - qATgdfunC[gSDf6EFrHva5].ZARrLk) + (qATgdfunC[fhMORFJQ].fWKnfPl - qATgdfunC[gSDf6EFrHva5].fWKnfPl) * (qATgdfunC[fhMORFJQ].fWKnfPl - qATgdfunC[gSDf6EFrHva5].fWKnfPl));
            p9rItRN2KOi[v90WIm8N].iLe4pt = fhMORFJQ;
            p9rItRN2KOi[v90WIm8N].y9HaRY = gSDf6EFrHva5;
            gSDf6EFrHva5++;
            if (!(pVtcdeXLxRJC != gSDf6EFrHva5)) {
                fhMORFJQ++;
                gSDf6EFrHva5 = fhMORFJQ + 1;
            }
            v90WIm8N++;
        }
    }
    return;
}

void  NjFQ7Kb (int pVtcdeXLxRJC) {
    int v90WIm8N;
    int qY8DvmsinX1;
    {
        v90WIm8N = 0;
        while (pVtcdeXLxRJC * (pVtcdeXLxRJC - 1) / 2 - 1 > v90WIm8N) {
            {
                qY8DvmsinX1 = 0;
                while (pVtcdeXLxRJC * (pVtcdeXLxRJC - 1) / 2 - v90WIm8N - 1 > qY8DvmsinX1) {
                    if (p9rItRN2KOi[qY8DvmsinX1 + 1].U3Nx8BT7Czqe > p9rItRN2KOi[qY8DvmsinX1].U3Nx8BT7Czqe) {
                        IR85SY4K3 = p9rItRN2KOi[qY8DvmsinX1];
                        p9rItRN2KOi[qY8DvmsinX1] = p9rItRN2KOi[qY8DvmsinX1 + 1];
                        p9rItRN2KOi[qY8DvmsinX1 + 1] = IR85SY4K3;
                    }
                    qY8DvmsinX1++;
                }
            }
            v90WIm8N++;
        }
    }
    return;
}

void  BFvpiVL (int pVtcdeXLxRJC) {
    int v90WIm8N;
    {
        v90WIm8N = 0;
        while (pVtcdeXLxRJC * (pVtcdeXLxRJC - 1) / 2 > v90WIm8N) {
            cout << "(" << qATgdfunC[p9rItRN2KOi[v90WIm8N].iLe4pt].YIUpZKWcM0 << "," << qATgdfunC[p9rItRN2KOi[v90WIm8N].iLe4pt].ZARrLk << "," << qATgdfunC[p9rItRN2KOi[v90WIm8N].iLe4pt].fWKnfPl << ")-(" << qATgdfunC[p9rItRN2KOi[v90WIm8N].y9HaRY].YIUpZKWcM0 << "," << qATgdfunC[p9rItRN2KOi[v90WIm8N].y9HaRY].ZARrLk << "," << qATgdfunC[p9rItRN2KOi[v90WIm8N].y9HaRY].fWKnfPl << ")=" << setprecision (2) << fixed << p9rItRN2KOi[v90WIm8N].U3Nx8BT7Czqe << endl;
            v90WIm8N++;
        }
    }
    return;
}

