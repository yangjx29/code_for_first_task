int IHd8SxFsC6cl [100] [300] = {(509 - 509)};
void  KUD7MoZvY6 (int wSP34Vnc97wJ);

int main () {
    int TA2rPScInvi4;
    int ngENaUr4dc3P, DfCRWKzy;
    cin >> TA2rPScInvi4;
    IHd8SxFsC6cl[(402 - 402)][1] = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        ngENaUr4dc3P = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ngENaUr4dc3P <= TA2rPScInvi4) {
            KUD7MoZvY6 (ngENaUr4dc3P);
            ngENaUr4dc3P++;
        };
    }
    {
        ngENaUr4dc3P = 488 - 288;
        while (0 < ngENaUr4dc3P) {
            if (IHd8SxFsC6cl[TA2rPScInvi4][ngENaUr4dc3P] != 0) {
                DfCRWKzy = ngENaUr4dc3P;
                break;
            }
            ngENaUr4dc3P--;
        };
    }
    {
        ngENaUr4dc3P = DfCRWKzy;
        while (ngENaUr4dc3P > 0) {
            cout << IHd8SxFsC6cl[TA2rPScInvi4][ngENaUr4dc3P];
            ngENaUr4dc3P--;
        };
    }
    return 0;
}

void  KUD7MoZvY6 (int wSP34Vnc97wJ) {
    int ngENaUr4dc3P;
    for (ngENaUr4dc3P = 1; ngENaUr4dc3P < 200; ngENaUr4dc3P++) {
        IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P] = IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P] + IHd8SxFsC6cl[wSP34Vnc97wJ - 1][ngENaUr4dc3P] * 2;
        if (IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P] > 9) {
            IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P] = IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P] - 10;
            IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P + 1]++;
        }
        if (IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P + 1] > 9) {
            IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P + 1] = IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P + 1] - 10;
            IHd8SxFsC6cl[wSP34Vnc97wJ][ngENaUr4dc3P + 2]++;
        };
    };
}

