int main () {
    int JuSOhGQ [1001], b [1001], qrxohqT4dF = 0, m = 0, bFLDkz;
    char e0knlI8fxs;
    int BBvNDwpoRSq, faCUc6k2tXDZ;
    int QbfkYxJeQoEW [1001] = {0}, uqMrkY = 0;
    while (1) {
        qrxohqT4dF++;
        scanf ("%d", &JuSOhGQ[qrxohqT4dF]);
        scanf ("%c", &e0knlI8fxs);
        if (!('\n' != e0knlI8fxs))
            break;
    }
    for (bFLDkz = 1; bFLDkz <= qrxohqT4dF; bFLDkz++) {
        if (bFLDkz != qrxohqT4dF)
            scanf ("%d,", &b[bFLDkz]);
        else
            scanf ("%d", &b[bFLDkz]);
    }
    printf ("%d ", qrxohqT4dF);
    for (BBvNDwpoRSq = 0; BBvNDwpoRSq <= 999; BBvNDwpoRSq++) {
        {
            faCUc6k2tXDZ = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (faCUc6k2tXDZ <= qrxohqT4dF) {
                if (JuSOhGQ[faCUc6k2tXDZ] <= BBvNDwpoRSq &&b[faCUc6k2tXDZ] > BBvNDwpoRSq)
                    QbfkYxJeQoEW[BBvNDwpoRSq]++;
                faCUc6k2tXDZ++;
            };
        }
        if (QbfkYxJeQoEW[BBvNDwpoRSq] > uqMrkY)
            uqMrkY = QbfkYxJeQoEW[BBvNDwpoRSq];
    }
    printf ("%d", uqMrkY);
}

