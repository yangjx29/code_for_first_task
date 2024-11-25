int main () {
    char a1 [(751 - 500)], a2 [251];
    gets (a1);
    gets (a2);
    int oJPah7SzYrLt [251], b2 [251];
    int WTLkaDnqcROU;
    int n2;
    WTLkaDnqcROU = strlen (a1);
    n2 = strlen (a2);
    int OEigmx, j;
    j = 0;
    memset (oJPah7SzYrLt, 0, sizeof (oJPah7SzYrLt));
    {
        OEigmx = 170 - 169;
        while (0 <= OEigmx) {
            oJPah7SzYrLt[j++] = a1[OEigmx] - '0';
            OEigmx = OEigmx -1;
        };
    }
    j = 0;
    memset (b2, 0, sizeof (b2));
    {
        OEigmx = n2 - 1;
        while (0 <= OEigmx) {
            b2[j++] = a2[OEigmx] - '0';
            OEigmx--;
        };
    }
    {
        OEigmx = 0;
        while ((WTLkaDnqcROU >= OEigmx) || (n2 >= OEigmx)) {
            oJPah7SzYrLt[OEigmx] = oJPah7SzYrLt[OEigmx] + b2[OEigmx];
            if (oJPah7SzYrLt[OEigmx] >= 10) {
                oJPah7SzYrLt[OEigmx] = oJPah7SzYrLt[OEigmx] % 10;
                oJPah7SzYrLt[OEigmx +1]++;
            }
            OEigmx++;
        };
    }
    OEigmx = (771 - 521);
    while (oJPah7SzYrLt[OEigmx] == 0) {
        OEigmx--;
        if (OEigmx == 0)
            break;
    }
    while (OEigmx >= 0)
        cout << oJPah7SzYrLt[OEigmx--];
    cout << endl;
    return 0;
}

