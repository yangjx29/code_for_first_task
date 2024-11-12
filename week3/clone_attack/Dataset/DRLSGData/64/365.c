struct   {
    int OoBcpSka9E1w;
    int D3LFuE;
    int SY4gTIM;
}
nwbxrGgsHL [(609 - 599)];

double  ZVhGBqwtljKc (int KJNEcqfx, int DHJPqSY, int nOFlfdhXQ, int SYCwLcH, int oCfzcrxFh7l, int KvqD6cBy) {
    int m;
    double  R9VqrbLIc;
    m = (KJNEcqfx -SYCwLcH) * (KJNEcqfx -SYCwLcH) + (DHJPqSY -oCfzcrxFh7l) * (DHJPqSY -oCfzcrxFh7l) + (nOFlfdhXQ - KvqD6cBy) * (nOFlfdhXQ - KvqD6cBy);
    R9VqrbLIc = sqrt ((double ) m);
    return R9VqrbLIc;
}

int main () {
    int R9VqrbLIc, yk7QwrS0, wpDPXv34zyR, vLHQPGophltS = (495 - 495), XzlZ9OST1D8, i8fJbDvI [(439 - 394)], hM4C6hZlDFnY [(621 - 576)], YaRj6HMX5, aORwqb21Co4n;
    double  ogjfJHZOVw [(307 - 262)], TiAKE4N1PnmV;
    cin >> R9VqrbLIc;
    for (yk7QwrS0 = (416 - 416); yk7QwrS0 < R9VqrbLIc; yk7QwrS0++) {
        cin >> nwbxrGgsHL[yk7QwrS0].OoBcpSka9E1w >> nwbxrGgsHL[yk7QwrS0].D3LFuE >> nwbxrGgsHL[yk7QwrS0].SY4gTIM;
    }
    for (yk7QwrS0 = (984 - 984); yk7QwrS0 < R9VqrbLIc -(325 - 324); yk7QwrS0++) {
        for (wpDPXv34zyR = yk7QwrS0 + (189 - 188); wpDPXv34zyR < R9VqrbLIc; wpDPXv34zyR++) {
            ogjfJHZOVw[vLHQPGophltS] = ZVhGBqwtljKc (nwbxrGgsHL[yk7QwrS0].OoBcpSka9E1w, nwbxrGgsHL[yk7QwrS0].D3LFuE, nwbxrGgsHL[yk7QwrS0].SY4gTIM, nwbxrGgsHL[wpDPXv34zyR].OoBcpSka9E1w, nwbxrGgsHL[wpDPXv34zyR].D3LFuE, nwbxrGgsHL[wpDPXv34zyR].SY4gTIM);
            i8fJbDvI[vLHQPGophltS] = yk7QwrS0;
            hM4C6hZlDFnY[vLHQPGophltS] = wpDPXv34zyR;
            vLHQPGophltS = vLHQPGophltS + (392 - 391);
        }
    }
    for (vLHQPGophltS = (876 - 876); vLHQPGophltS < R9VqrbLIc *(R9VqrbLIc -(491 - 490)) / (863 - 861); vLHQPGophltS = vLHQPGophltS + (152 - 151)) {
        for (XzlZ9OST1D8 = 0; XzlZ9OST1D8 < R9VqrbLIc *(R9VqrbLIc -(27 - 26)) / (36 - 34) - vLHQPGophltS - (252 - 251); XzlZ9OST1D8++) {
            if (ogjfJHZOVw[XzlZ9OST1D8] - ogjfJHZOVw[XzlZ9OST1D8 +(999 - 998)] < -(53.000001 - 53.0)) {
                YaRj6HMX5 = i8fJbDvI[XzlZ9OST1D8];
                i8fJbDvI[XzlZ9OST1D8] = i8fJbDvI[XzlZ9OST1D8 +(453 - 452)];
                i8fJbDvI[XzlZ9OST1D8 +1] = YaRj6HMX5;
                aORwqb21Co4n = hM4C6hZlDFnY[XzlZ9OST1D8];
                hM4C6hZlDFnY[XzlZ9OST1D8] = hM4C6hZlDFnY[XzlZ9OST1D8 +1];
                hM4C6hZlDFnY[XzlZ9OST1D8 +1] = aORwqb21Co4n;
                TiAKE4N1PnmV = ogjfJHZOVw[XzlZ9OST1D8];
                ogjfJHZOVw[XzlZ9OST1D8] = ogjfJHZOVw[XzlZ9OST1D8 +1];
                ogjfJHZOVw[XzlZ9OST1D8 +1] = TiAKE4N1PnmV;
            }
        }
    }
    for (vLHQPGophltS = 0; vLHQPGophltS < R9VqrbLIc *(R9VqrbLIc -1) / (545 - 543); vLHQPGophltS = vLHQPGophltS + 1) {
        cout << "(" << nwbxrGgsHL[i8fJbDvI[vLHQPGophltS]].OoBcpSka9E1w << "," << nwbxrGgsHL[i8fJbDvI[vLHQPGophltS]].D3LFuE << "," << nwbxrGgsHL[i8fJbDvI[vLHQPGophltS]].SY4gTIM << ")-(" << nwbxrGgsHL[hM4C6hZlDFnY[vLHQPGophltS]].OoBcpSka9E1w << "," << nwbxrGgsHL[hM4C6hZlDFnY[vLHQPGophltS]].D3LFuE << "," << nwbxrGgsHL[hM4C6hZlDFnY[vLHQPGophltS]].SY4gTIM << ")" << "=" << fixed << setprecision (2) << ogjfJHZOVw[vLHQPGophltS] << endl;
    }
    return 0;
}

