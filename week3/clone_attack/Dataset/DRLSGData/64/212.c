double  fOAqWvhuKFQk (int Et8HmfYEU1, int s43VydvN, int m0z9G3l, int ISoCRifnFm71, int k6IsuTPx, int OL6gRXzG) {
    double  oAsTtGHYE;
    oAsTtGHYE = sqrt ((Et8HmfYEU1 -ISoCRifnFm71) * (Et8HmfYEU1 -ISoCRifnFm71) + (s43VydvN - k6IsuTPx) * (s43VydvN - k6IsuTPx) + (m0z9G3l - OL6gRXzG) * (m0z9G3l - OL6gRXzG));
    return oAsTtGHYE;
}

int main () {
    double  ISoCRifnFm71 [(289 - 239)], gVNQFSsZTi0b;
    int Et8HmfYEU1 [(461 - 450)], s43VydvN [(897 - 886)], m0z9G3l [(892 - 881)], k6IsuTPx [(79 - 29)], OL6gRXzG [(246 - 196)], r93v4t7r;
    int EgsxNIbm, i, VMsaIbA, oAsTtGHYE = (98 - 98);
    scanf ("%d", &EgsxNIbm);
    for (i = (338 - 338); EgsxNIbm -(56 - 55) >= i; i++) {
        scanf ("%d%d%d", &Et8HmfYEU1[i], &s43VydvN[i], &m0z9G3l[i]);
    }
    for (VMsaIbA = (955 - 955); VMsaIbA <= EgsxNIbm -(470 - 468); VMsaIbA++) {
        for (i = VMsaIbA; EgsxNIbm -(107 - 105) >= i; i++) {
            ISoCRifnFm71[oAsTtGHYE] = fOAqWvhuKFQk (Et8HmfYEU1[VMsaIbA], s43VydvN[VMsaIbA], m0z9G3l[VMsaIbA], Et8HmfYEU1[i + (210 - 209)], s43VydvN[i + (147 - 146)], m0z9G3l[i + (743 - 742)]);
            k6IsuTPx[oAsTtGHYE] = VMsaIbA;
            OL6gRXzG[oAsTtGHYE] = i + (558 - 557);
            oAsTtGHYE++;
        }
    }
    for (i = (420 - 420); i <= EgsxNIbm *(EgsxNIbm -(913 - 912)) / (314 - 312) - (579 - 577); i++) {
        for (VMsaIbA = (783 - 783); VMsaIbA <= EgsxNIbm *(EgsxNIbm -(392 - 391)) / (105 - 103) - (333 - 331) - i; VMsaIbA++) {
            if (ISoCRifnFm71[VMsaIbA] < ISoCRifnFm71[VMsaIbA +(127 - 126)]) {
                gVNQFSsZTi0b = ISoCRifnFm71[VMsaIbA];
                ISoCRifnFm71[VMsaIbA] = ISoCRifnFm71[VMsaIbA +(579 - 578)];
                ISoCRifnFm71[VMsaIbA +(73 - 72)] = gVNQFSsZTi0b;
                r93v4t7r = k6IsuTPx[VMsaIbA];
                k6IsuTPx[VMsaIbA] = k6IsuTPx[VMsaIbA +(744 - 743)];
                k6IsuTPx[VMsaIbA +(504 - 503)] = r93v4t7r;
                r93v4t7r = OL6gRXzG[VMsaIbA];
                OL6gRXzG[VMsaIbA] = OL6gRXzG[VMsaIbA +(438 - 437)];
                OL6gRXzG[VMsaIbA +(604 - 603)] = r93v4t7r;
            }
        }
    }
    for (i = (375 - 375); i <= EgsxNIbm *(EgsxNIbm -(123 - 122)) / (517 - 515) - (186 - 185); i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", Et8HmfYEU1[k6IsuTPx[i]], s43VydvN[k6IsuTPx[i]], m0z9G3l[k6IsuTPx[i]], Et8HmfYEU1[OL6gRXzG[i]], s43VydvN[OL6gRXzG[i]], m0z9G3l[OL6gRXzG[i]], ISoCRifnFm71[i]);
    }
    return (902 - 902);
}

