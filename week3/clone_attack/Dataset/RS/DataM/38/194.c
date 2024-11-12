int main () {
    double  TQ0nfJ3ZaPCA [(775 - 675)] = {(944 - 944)};
    double  s [(576 - 476)] = {(354 - 354)};
    double  S [(852 - 752)] = {(78 - 78)};
    int WyXaPtIgU0Nh;
    int n [(1028 - 928)];
    int OajDvq1BVUx;
    int KUX43jlJi;
    double  x [(962 - 862)] [(175 - 75)];
    scanf ("%d", &WyXaPtIgU0Nh);
    {
        OajDvq1BVUx = 392 - 392;
        while (WyXaPtIgU0Nh > OajDvq1BVUx) {
            scanf ("%d", &n[OajDvq1BVUx]);
            for (KUX43jlJi = (522 - 522); n[OajDvq1BVUx] > KUX43jlJi; KUX43jlJi = KUX43jlJi +1) {
                scanf ("%lf", &x[OajDvq1BVUx][KUX43jlJi]);
            }
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
            OajDvq1BVUx++;
        };
    }
    for (OajDvq1BVUx = (150 - 150); WyXaPtIgU0Nh > OajDvq1BVUx; OajDvq1BVUx = OajDvq1BVUx +1) {
        KUX43jlJi = 700 - 700;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n[OajDvq1BVUx] > KUX43jlJi) {
            TQ0nfJ3ZaPCA[OajDvq1BVUx] += x[OajDvq1BVUx][KUX43jlJi] / n[OajDvq1BVUx];
            KUX43jlJi = KUX43jlJi +1;
        };
    }
    {
        OajDvq1BVUx = 900 - 900;
        while (WyXaPtIgU0Nh > OajDvq1BVUx) {
            {
                KUX43jlJi = 92 - 92;
                while (n[OajDvq1BVUx] > KUX43jlJi) {
                    s[OajDvq1BVUx] += (x[OajDvq1BVUx][KUX43jlJi] - TQ0nfJ3ZaPCA[OajDvq1BVUx]) * (x[OajDvq1BVUx][KUX43jlJi] - TQ0nfJ3ZaPCA[OajDvq1BVUx]);
                    KUX43jlJi++;
                };
            }
            OajDvq1BVUx++;
        };
    }
    for (OajDvq1BVUx = (74 - 74); WyXaPtIgU0Nh > OajDvq1BVUx; OajDvq1BVUx = OajDvq1BVUx +1) {
        S[OajDvq1BVUx] = sqrt (s[OajDvq1BVUx] / n[OajDvq1BVUx]);
    }
    for (OajDvq1BVUx = (511 - 511); WyXaPtIgU0Nh > OajDvq1BVUx; OajDvq1BVUx++) {
        printf ("%.5lf\n", S[OajDvq1BVUx]);
    }
    return 0;
}

