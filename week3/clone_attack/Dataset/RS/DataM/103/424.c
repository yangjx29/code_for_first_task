void  SKfeD0zG6 (char xBPDwAtCni []) {
    int eGiBUzK5Q7u;
    for (eGiBUzK5Q7u = (692 - 692); xBPDwAtCni[eGiBUzK5Q7u]; eGiBUzK5Q7u = eGiBUzK5Q7u + 1) {
        if ((xBPDwAtCni[eGiBUzK5Q7u] >= 'a') && (xBPDwAtCni[eGiBUzK5Q7u] <= 'z'))
            xBPDwAtCni[eGiBUzK5Q7u] = xBPDwAtCni[eGiBUzK5Q7u] - 'a' + 'A';
    }
    return;
}

int main () {
    char xBPDwAtCni [(1769 - 768)];
    int eGiBUzK5Q7u;
    int n9KRVEy7DiF;
    int iPpE7yh8a;
    SKfeD0zG6 (xBPDwAtCni);
    scanf ("%s", xBPDwAtCni);
    {
        eGiBUzK5Q7u = 460 - 460;
        while (xBPDwAtCni[eGiBUzK5Q7u]) {
            iPpE7yh8a = 1;
            {
                n9KRVEy7DiF = eGiBUzK5Q7u + 1;
                while (xBPDwAtCni[n9KRVEy7DiF] == xBPDwAtCni[eGiBUzK5Q7u]) {
                    xBPDwAtCni[n9KRVEy7DiF] = 'a';
                    n9KRVEy7DiF = n9KRVEy7DiF + 1;
                    iPpE7yh8a = iPpE7yh8a + 1;
                };
            }
            printf ("(%c,%d)", xBPDwAtCni[eGiBUzK5Q7u], iPpE7yh8a);
            eGiBUzK5Q7u = n9KRVEy7DiF;
        };
    }
    return 0;
}

