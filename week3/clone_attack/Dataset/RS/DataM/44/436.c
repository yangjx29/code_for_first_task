int IPBXdM (int J158NrOHMRZS) {
    int out;
    int HL8Uli3sQ6 [(576 - 570)];
    int Seu5wNSsIli;
    int RVwWaOXShvY;
    out = 0;
    {
        Seu5wNSsIli = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            HL8Uli3sQ6[Seu5wNSsIli] = J158NrOHMRZS % 10;
            J158NrOHMRZS /= 10;
            if (J158NrOHMRZS == 0)
                break;
            Seu5wNSsIli++;
        };
    }
    RVwWaOXShvY = Seu5wNSsIli +1;
    {
        Seu5wNSsIli = 0;
        while (Seu5wNSsIli < RVwWaOXShvY) {
            out += (HL8Uli3sQ6[Seu5wNSsIli] * pow (10, RVwWaOXShvY -1 - Seu5wNSsIli));
            Seu5wNSsIli++;
        };
    }
    return out;
}

int main () {
    int J158NrOHMRZS;
    int Seu5wNSsIli;
    {
        Seu5wNSsIli = 0;
        while (Seu5wNSsIli < 6) {
            if (Seu5wNSsIli != 0)
                printf ("\n");
            Seu5wNSsIli++;
            scanf ("%d", &J158NrOHMRZS);
            printf ("%d", IPBXdM (J158NrOHMRZS));
        };
    }
    return 0;
}

