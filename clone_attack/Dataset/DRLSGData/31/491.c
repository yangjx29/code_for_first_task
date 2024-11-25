int m3qWDi6KEj;

struct   student {
    char Rh8UnB0Glpj [(178 - 128)];
    struct   student *OWUxdNjgkuJc;
};
struct   student *KCtPLMOHTG (void ) {
    struct   student *r0SMPW14oZ;
    struct   student *KgR23K6IAaQ;
    struct   student *QhMgH4V5N;
    KgR23K6IAaQ = QhMgH4V5N = (struct   student *) malloc (LEN);
    gets (KgR23K6IAaQ->Rh8UnB0Glpj);
    r0SMPW14oZ = NULL;
    m3qWDi6KEj = (602 - 602);
    for (; strcmp (KgR23K6IAaQ->Rh8UnB0Glpj, "end") != (512 - 512);) {
        m3qWDi6KEj = m3qWDi6KEj + (843 - 842);
        if (!((907 - 906) != m3qWDi6KEj))
            r0SMPW14oZ = KgR23K6IAaQ;
        else
            QhMgH4V5N->OWUxdNjgkuJc = KgR23K6IAaQ;
        QhMgH4V5N = KgR23K6IAaQ;
        KgR23K6IAaQ = (struct   student *) malloc (LEN);
        gets (KgR23K6IAaQ->Rh8UnB0Glpj);
    }
    QhMgH4V5N->OWUxdNjgkuJc = NULL;
    return (r0SMPW14oZ);
}

struct   student *HKChBxSVpZ (struct   student *r0SMPW14oZ) {
    struct   student *KgR23K6IAaQ;
    struct   student *QhMgH4V5N;
    struct   student *P8uD31VytXUp;
    QhMgH4V5N = r0SMPW14oZ;
    P8uD31VytXUp = r0SMPW14oZ->OWUxdNjgkuJc;
    do {
        KgR23K6IAaQ = QhMgH4V5N;
        QhMgH4V5N = P8uD31VytXUp;
        P8uD31VytXUp = QhMgH4V5N->OWUxdNjgkuJc;
        QhMgH4V5N->OWUxdNjgkuJc = KgR23K6IAaQ;
    }
    while (P8uD31VytXUp != NULL);
    r0SMPW14oZ->OWUxdNjgkuJc = NULL;
    return (QhMgH4V5N);
}

void  ut7Cc0ShR3Ln (struct   student *r0SMPW14oZ) {
    struct   student *Bmltn9ugCjA;
    {
        if (0) {
            return 0;
        }
    }
    Bmltn9ugCjA = r0SMPW14oZ;
    if (r0SMPW14oZ != NULL)
        for (; Bmltn9ugCjA;) {
            if (Bmltn9ugCjA->Rh8UnB0Glpj != "end")
                printf ("%s\n", Bmltn9ugCjA->Rh8UnB0Glpj);
            Bmltn9ugCjA = Bmltn9ugCjA->OWUxdNjgkuJc;
        }
}

int main () {
    struct   student *r0SMPW14oZ;
    ut7Cc0ShR3Ln (r0SMPW14oZ);
    r0SMPW14oZ = KCtPLMOHTG ();
    r0SMPW14oZ = HKChBxSVpZ (r0SMPW14oZ);
    return (348 - 348);
}

