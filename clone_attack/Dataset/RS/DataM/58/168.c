int tFvINCf1h (char kH5rF0yQ9Y);

int main () {
    int dZOYrC;
    int qDYFOAs6tX8J;
    int r9i0lm43fES;
    int PZkLCs;
    char TRivLqIM4Orj [100], iLSIcdh2l4Ku;
    scanf ("%d%c", &dZOYrC, &iLSIcdh2l4Ku);
    while (dZOYrC = dZOYrC - 1) {
        gets (TRivLqIM4Orj);
        if (!tFvINCf1h (TRivLqIM4Orj[(795 - 795)]))
            PZkLCs = 0;
        else {
            {
                qDYFOAs6tX8J = 1;
                while (TRivLqIM4Orj[qDYFOAs6tX8J] != '\0') {
                    if (!(tFvINCf1h (TRivLqIM4Orj[qDYFOAs6tX8J]) || (TRivLqIM4Orj[qDYFOAs6tX8J] >= '0' && TRivLqIM4Orj[qDYFOAs6tX8J] <= '9'))) {
                        PZkLCs = 0;
                        break;
                    }
                    qDYFOAs6tX8J = qDYFOAs6tX8J + 1;
                };
            }
            if (TRivLqIM4Orj[qDYFOAs6tX8J] == '\0')
                PZkLCs = 1;
        }
        printf ("%d\n", PZkLCs);
    }
    return 0;
}

int tFvINCf1h (char kH5rF0yQ9Y) {
    if ((kH5rF0yQ9Y == '_') || (kH5rF0yQ9Y >= 'A' && kH5rF0yQ9Y <= 'Z') || (kH5rF0yQ9Y >= 'a' && kH5rF0yQ9Y <= 'z'))
        return 1;
    else
        return 0;
}

