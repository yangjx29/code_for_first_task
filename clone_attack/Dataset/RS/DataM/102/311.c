int main () {
    int F3MQV2XTvuy = 0;
    char tmp [10];
    int fKbfU3kt5QLw;
    int izHLmfSPOjio;
    int OmLVqzOt;
    double  xq8eGzQ;
    int CYs2iB5Qc9KF;
    CYs2iB5Qc9KF = 0;
    struct   info {
        char dLYlbSwX [10];
        double  h;
    }
    SKt4BMiS65n [50];
    scanf ("%d", &OmLVqzOt);
    {
        fKbfU3kt5QLw = 0;
        while (fKbfU3kt5QLw < OmLVqzOt) {
            scanf ("%s %lf", SKt4BMiS65n[fKbfU3kt5QLw].dLYlbSwX, &SKt4BMiS65n[fKbfU3kt5QLw].h);
            if (!(0 != strcmp (SKt4BMiS65n[fKbfU3kt5QLw].dLYlbSwX, "male"))) {
                CYs2iB5Qc9KF++;
            }
            fKbfU3kt5QLw = fKbfU3kt5QLw + 1;
        };
    }
    {
        fKbfU3kt5QLw = 0;
        while (fKbfU3kt5QLw < OmLVqzOt) {
            for (izHLmfSPOjio = fKbfU3kt5QLw; OmLVqzOt > izHLmfSPOjio; izHLmfSPOjio++) {
                if (strcmp (SKt4BMiS65n[fKbfU3kt5QLw].dLYlbSwX, SKt4BMiS65n[izHLmfSPOjio].dLYlbSwX) < 0) {
                    strcpy (tmp, SKt4BMiS65n[fKbfU3kt5QLw].dLYlbSwX);
                    strcpy (SKt4BMiS65n[fKbfU3kt5QLw].dLYlbSwX, SKt4BMiS65n[izHLmfSPOjio].dLYlbSwX);
                    strcpy (SKt4BMiS65n[izHLmfSPOjio].dLYlbSwX, tmp);
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
                    xq8eGzQ = SKt4BMiS65n[fKbfU3kt5QLw].h;
                    SKt4BMiS65n[fKbfU3kt5QLw].h = SKt4BMiS65n[izHLmfSPOjio].h;
                    SKt4BMiS65n[izHLmfSPOjio].h = xq8eGzQ;
                };
            }
            fKbfU3kt5QLw++;
        };
    }
    {
        fKbfU3kt5QLw = 0;
        while (fKbfU3kt5QLw < CYs2iB5Qc9KF) {
            {
                izHLmfSPOjio = 0;
                while (izHLmfSPOjio < CYs2iB5Qc9KF) {
                    if (SKt4BMiS65n[fKbfU3kt5QLw].h < SKt4BMiS65n[izHLmfSPOjio].h) {
                        xq8eGzQ = SKt4BMiS65n[fKbfU3kt5QLw].h;
                        SKt4BMiS65n[fKbfU3kt5QLw].h = SKt4BMiS65n[izHLmfSPOjio].h;
                        SKt4BMiS65n[izHLmfSPOjio].h = xq8eGzQ;
                    }
                    izHLmfSPOjio++;
                };
            }
            fKbfU3kt5QLw++;
        };
    }
    {
        fKbfU3kt5QLw = CYs2iB5Qc9KF;
        while (fKbfU3kt5QLw < OmLVqzOt) {
            {
                izHLmfSPOjio = CYs2iB5Qc9KF;
                while (izHLmfSPOjio < OmLVqzOt) {
                    if (SKt4BMiS65n[fKbfU3kt5QLw].h > SKt4BMiS65n[izHLmfSPOjio].h) {
                        xq8eGzQ = SKt4BMiS65n[fKbfU3kt5QLw].h;
                        SKt4BMiS65n[fKbfU3kt5QLw].h = SKt4BMiS65n[izHLmfSPOjio].h;
                        SKt4BMiS65n[izHLmfSPOjio].h = xq8eGzQ;
                    }
                    izHLmfSPOjio++;
                };
            }
            fKbfU3kt5QLw++;
        };
    }
    {
        fKbfU3kt5QLw = 0;
        while (fKbfU3kt5QLw < OmLVqzOt) {
            if (F3MQV2XTvuy) {
                printf (" %.2lf", SKt4BMiS65n[fKbfU3kt5QLw].h);
            }
            else {
                F3MQV2XTvuy = 1;
                printf ("%.2lf", SKt4BMiS65n[fKbfU3kt5QLw].h);
            }
            fKbfU3kt5QLw++;
        };
    }
    return 0;
}

