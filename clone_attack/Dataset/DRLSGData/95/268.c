int main () {
    char oIRkO49QXJ [80];
    gets (oIRkO49QXJ);
    int CWfhzQLnI;
    char hHVyGR0FK [80];
    gets (hHVyGR0FK);
    int i;
    CWfhzQLnI = 0;
    {
        i = 0;
        while (oIRkO49QXJ[i] != '\0' && hHVyGR0FK[i] != '\0') {
            if (65 <= oIRkO49QXJ[i] && 90 >= oIRkO49QXJ[i])
                oIRkO49QXJ[i] = oIRkO49QXJ[i] + 32;
            if (hHVyGR0FK[i] >= 65 && hHVyGR0FK[i] <= 90)
                hHVyGR0FK[i] = hHVyGR0FK[i] + 32;
            if (oIRkO49QXJ[i] > hHVyGR0FK[i]) {
                CWfhzQLnI = CWfhzQLnI +1;
                break;
            }
            else if (hHVyGR0FK[i] > oIRkO49QXJ[i]) {
                CWfhzQLnI = CWfhzQLnI +1;
                break;
            }
            i = i + 1;
        }
    }
    if (!(0 != CWfhzQLnI)) {
        if (oIRkO49QXJ[i] == '\0' && hHVyGR0FK[i] == '\0')
            printf ("=");
        else if (oIRkO49QXJ[i] != '\0')
            ;
        else
            ;
    }
    return 0;
}

