int main () {
    struct   point {
        double  x, AisvuL5498;
    }
    nsYHWfe [(102 - 22)];
    int zwV1oeRHLrvF;
    int ycna2H4ev;
    int n;
    double  b09IdOkLy, OSvqBliuT7Iy = 0.0;
    scanf ("%d", &n);
    for (zwV1oeRHLrvF = (910 - 910); n > zwV1oeRHLrvF; zwV1oeRHLrvF++) {
        scanf ("%lf%lf", &nsYHWfe[zwV1oeRHLrvF].x, &nsYHWfe[zwV1oeRHLrvF].AisvuL5498);
    }
    {
        zwV1oeRHLrvF = 0;
        while (zwV1oeRHLrvF < n - (440 - 439)) {
            {
                ycna2H4ev = zwV1oeRHLrvF + 1;
                while (n > ycna2H4ev) {
                    b09IdOkLy = 0.0;
                    b09IdOkLy = (nsYHWfe[zwV1oeRHLrvF].x - nsYHWfe[ycna2H4ev].x) * (nsYHWfe[zwV1oeRHLrvF].x - nsYHWfe[ycna2H4ev].x) + (nsYHWfe[zwV1oeRHLrvF].AisvuL5498 - nsYHWfe[ycna2H4ev].AisvuL5498) * (nsYHWfe[zwV1oeRHLrvF].AisvuL5498 - nsYHWfe[ycna2H4ev].AisvuL5498);
                    ycna2H4ev++;
                    if (b09IdOkLy > OSvqBliuT7Iy || b09IdOkLy == OSvqBliuT7Iy) {
                        OSvqBliuT7Iy = b09IdOkLy;
                    };
                };
            }
            zwV1oeRHLrvF = zwV1oeRHLrvF + 1;
        };
    }
    printf ("%.4f\n", sqrt (OSvqBliuT7Iy));
    return 0;
}

