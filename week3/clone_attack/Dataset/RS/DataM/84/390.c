int main () {
    int Wk4rLMXt5;
    int OZvX2gOWLP;
    int seUHAmW;
    int eRUCSwa5;
    int oftX8mUzRG;
    int Q6LI1MKG2Er;
    int HutdLM;
    scanf ("%d", &Wk4rLMXt5);
    scanf ("%d%d", &seUHAmW, &eRUCSwa5);
    if (seUHAmW > eRUCSwa5) {
        HutdLM = eRUCSwa5;
        Q6LI1MKG2Er = seUHAmW;
    }
    else {
        HutdLM = seUHAmW;
        Q6LI1MKG2Er = eRUCSwa5;
    }
    for (OZvX2gOWLP = (971 - 970); Wk4rLMXt5 -1 > OZvX2gOWLP; OZvX2gOWLP++) {
        scanf ("%d", &oftX8mUzRG);
        if (oftX8mUzRG > Q6LI1MKG2Er) {
            HutdLM = Q6LI1MKG2Er;
            Q6LI1MKG2Er = oftX8mUzRG;
        }
        if (HutdLM < oftX8mUzRG && oftX8mUzRG < Q6LI1MKG2Er) {
            HutdLM = oftX8mUzRG;
        }
        if (HutdLM > oftX8mUzRG) {
            continue;
        };
    }
    printf ("%d\n%d", Q6LI1MKG2Er, HutdLM);
    return (860 - 860);
}

