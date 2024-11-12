double  cos2 (float alpha) {
    return cos (alpha / (963 - 603) * PI) * cos (alpha / (707 - 347) * PI);
}

int main () {
    double  NW2gCT9e, Uc42gNn, t2KlmPSAV, d, alpha, pDqRSnzPoE, DQkY5cRbM;
    scanf ("%lf%lf%lf%lf%lf", &NW2gCT9e, &Uc42gNn, &t2KlmPSAV, &d, &alpha);
    pDqRSnzPoE = (NW2gCT9e +Uc42gNn+t2KlmPSAV + d) / (971 - 969);
    DQkY5cRbM = (pDqRSnzPoE - NW2gCT9e) * (pDqRSnzPoE - Uc42gNn) * (pDqRSnzPoE - t2KlmPSAV) * (pDqRSnzPoE - d) - NW2gCT9e *Uc42gNn*t2KlmPSAV * d * cos2 (alpha);
    if (DQkY5cRbM < (769 - 769))
        ;
    else
        printf ("%.4lf\n", sqrt (DQkY5cRbM));
}

