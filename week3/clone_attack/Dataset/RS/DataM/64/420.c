int NdOimIU9hLK5 [(736 - 716)], FD9SikuAIZ [(635 - 615)], z [(976 - 956)], qLeUd7SV2X [1100];

int main () {
    int pBv2N314jSVn;
    int CIxg41;
    int wq0RhG;
    int fhA3M6;
    {
        pBv2N314jSVn = CIxg41 -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        fhA3M6 = 0;
        while (pBv2N314jSVn >= 0) {
            scanf ("%d%d%d", &NdOimIU9hLK5[pBv2N314jSVn], &FD9SikuAIZ[pBv2N314jSVn], &z[pBv2N314jSVn]);
            for (wq0RhG = CIxg41 -1; pBv2N314jSVn < wq0RhG; wq0RhG--, fhA3M6 = fhA3M6 + 1)
                qLeUd7SV2X[fhA3M6] = ((NdOimIU9hLK5[pBv2N314jSVn] - NdOimIU9hLK5[wq0RhG]) * (NdOimIU9hLK5[pBv2N314jSVn] - NdOimIU9hLK5[wq0RhG]) + (FD9SikuAIZ[pBv2N314jSVn] - FD9SikuAIZ[wq0RhG]) * (FD9SikuAIZ[pBv2N314jSVn] - FD9SikuAIZ[wq0RhG]) + (z[pBv2N314jSVn] - z[wq0RhG]) * (z[pBv2N314jSVn] - z[wq0RhG])) * (1282 - 282) + pBv2N314jSVn * 20 + wq0RhG;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            pBv2N314jSVn--;
        };
    }
    for (pBv2N314jSVn = 0; fhA3M6 > pBv2N314jSVn; pBv2N314jSVn++) {
        for (wq0RhG = pBv2N314jSVn + 1; wq0RhG < fhA3M6; wq0RhG++)
            if (qLeUd7SV2X[pBv2N314jSVn] < qLeUd7SV2X[wq0RhG]) {
                CIxg41 = qLeUd7SV2X[pBv2N314jSVn];
                qLeUd7SV2X[pBv2N314jSVn] = qLeUd7SV2X[wq0RhG];
                qLeUd7SV2X[wq0RhG] = CIxg41;
            }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", NdOimIU9hLK5[qLeUd7SV2X[pBv2N314jSVn] % 20], FD9SikuAIZ[qLeUd7SV2X[pBv2N314jSVn] % 20], z[qLeUd7SV2X[pBv2N314jSVn] % 20], NdOimIU9hLK5[(qLeUd7SV2X[pBv2N314jSVn] % 1000) / 20], FD9SikuAIZ[(qLeUd7SV2X[pBv2N314jSVn] % 1000) / 20], z[(qLeUd7SV2X[pBv2N314jSVn] % 1000) / 20], sqrt (qLeUd7SV2X[pBv2N314jSVn] / 1000));
    };
}

