int main () {
    int lm2IQ8uYVR;
    int gXdZEJY;
    int F5MqvBpf3Lb;
    int x [11];
    int bOFiHy [11];
    int WlCAOhWtFg12 [11];
    int HQZC2T4u;
    int cPLNgrGOl2n;
    int Vg8KPRsC;
    lm2IQ8uYVR = 1;
    double  sSaI85r [50];
    double  E62WgGcPZ;
    cin >> F5MqvBpf3Lb;
    for (gXdZEJY = 1; gXdZEJY <= F5MqvBpf3Lb; gXdZEJY = gXdZEJY + 1)
        cin >> x[gXdZEJY] >> bOFiHy[gXdZEJY] >> WlCAOhWtFg12[gXdZEJY];
    {
        if (0) {
            return 0;
        }
    }
    for (gXdZEJY = 1; gXdZEJY < F5MqvBpf3Lb; gXdZEJY = gXdZEJY + 1)
        for (Vg8KPRsC = gXdZEJY + 1; Vg8KPRsC <= F5MqvBpf3Lb; Vg8KPRsC = Vg8KPRsC +1) {
            sSaI85r[lm2IQ8uYVR] = sqrt (pow (x[gXdZEJY] - x[Vg8KPRsC], 2.0) + pow (bOFiHy[gXdZEJY] - bOFiHy[Vg8KPRsC], 2.0) + pow (WlCAOhWtFg12[gXdZEJY] - WlCAOhWtFg12[Vg8KPRsC], 2.0));
            lm2IQ8uYVR = lm2IQ8uYVR + 1;
        }
    for (lm2IQ8uYVR = 1; lm2IQ8uYVR <= (F5MqvBpf3Lb *(F5MqvBpf3Lb -1) / 2 - 1); lm2IQ8uYVR++)
        for (gXdZEJY = 1; gXdZEJY <= (F5MqvBpf3Lb *(F5MqvBpf3Lb -1) / 2 - lm2IQ8uYVR); gXdZEJY = gXdZEJY + 1)
            if (sSaI85r[gXdZEJY] < sSaI85r[gXdZEJY + 1]) {
                E62WgGcPZ = sSaI85r[gXdZEJY];
                sSaI85r[gXdZEJY] = sSaI85r[gXdZEJY + 1];
                sSaI85r[gXdZEJY + 1] = E62WgGcPZ;
            }
    for (gXdZEJY = 1; gXdZEJY <= (F5MqvBpf3Lb *(F5MqvBpf3Lb -1) / 2); gXdZEJY++) {
        if (sSaI85r[gXdZEJY] == sSaI85r[gXdZEJY + 1])
            continue;
        for (HQZC2T4u = 1; HQZC2T4u < F5MqvBpf3Lb; HQZC2T4u++)
            for (cPLNgrGOl2n = HQZC2T4u +1; cPLNgrGOl2n <= F5MqvBpf3Lb; cPLNgrGOl2n++)
                if (sqrt (pow (x[HQZC2T4u] - x[cPLNgrGOl2n], 2.0) + pow (bOFiHy[HQZC2T4u] - bOFiHy[cPLNgrGOl2n], 2.0) + pow (WlCAOhWtFg12[HQZC2T4u] - WlCAOhWtFg12[cPLNgrGOl2n], 2.0)) == sSaI85r[gXdZEJY])
                    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[HQZC2T4u], bOFiHy[HQZC2T4u], WlCAOhWtFg12[HQZC2T4u], x[cPLNgrGOl2n], bOFiHy[cPLNgrGOl2n], WlCAOhWtFg12[cPLNgrGOl2n], sSaI85r[gXdZEJY]);
    }
    return 0;
}

