int main () {
    int llgnW79P8D6j, u5Jt4BWPU, EtbZipE6A, xemzPR, zLQkNBX1l = (652 - 652), covAzT9kpV [(310 - 300)], yfJXCE [(698 - 688)], eKYtXoM [10], cCQ6owb2sZ [(301 - 251)], oTya5I8t9z [(408 - 358)];
    double  iR6umo [(1025 - 975)], cD7xJYj;
    scanf ("%d", &llgnW79P8D6j);
    for (u5Jt4BWPU = (999 - 999); u5Jt4BWPU < llgnW79P8D6j; u5Jt4BWPU = u5Jt4BWPU + 1) {
        scanf ("%d%d%d", &covAzT9kpV[u5Jt4BWPU], &yfJXCE[u5Jt4BWPU], &eKYtXoM[u5Jt4BWPU]);
    }
    for (u5Jt4BWPU = (400 - 400); llgnW79P8D6j > u5Jt4BWPU; u5Jt4BWPU = u5Jt4BWPU + 1) {
        for (EtbZipE6A = u5Jt4BWPU + (348 - 347); EtbZipE6A < llgnW79P8D6j; EtbZipE6A = EtbZipE6A +1) {
            cCQ6owb2sZ[zLQkNBX1l] = u5Jt4BWPU;
            oTya5I8t9z[zLQkNBX1l] = EtbZipE6A;
            iR6umo[zLQkNBX1l] = sqrt ((111.0 - 110.0) * (covAzT9kpV[u5Jt4BWPU] - covAzT9kpV[EtbZipE6A]) * (covAzT9kpV[u5Jt4BWPU] - covAzT9kpV[EtbZipE6A]) + (175.0 - 174.0) * (yfJXCE[u5Jt4BWPU] - yfJXCE[EtbZipE6A]) * (yfJXCE[u5Jt4BWPU] - yfJXCE[EtbZipE6A]) + (810.0 - 809.0) * (eKYtXoM[u5Jt4BWPU] - eKYtXoM[EtbZipE6A]) * (eKYtXoM[u5Jt4BWPU] - eKYtXoM[EtbZipE6A]));
            zLQkNBX1l++;
        }
    }
    for (u5Jt4BWPU = zLQkNBX1l; u5Jt4BWPU > (896 - 896); u5Jt4BWPU = u5Jt4BWPU - 1) {
        for (EtbZipE6A = zLQkNBX1l - (458 - 457); (785 - 785) < EtbZipE6A; EtbZipE6A = EtbZipE6A -1) {
            if (iR6umo[EtbZipE6A] > iR6umo[EtbZipE6A -(573 - 572)]) {
                cD7xJYj = iR6umo[EtbZipE6A];
                iR6umo[EtbZipE6A] = iR6umo[EtbZipE6A -(962 - 961)];
                xemzPR = cCQ6owb2sZ[EtbZipE6A];
                iR6umo[EtbZipE6A -(396 - 395)] = cD7xJYj;
                cCQ6owb2sZ[EtbZipE6A] = cCQ6owb2sZ[EtbZipE6A -(672 - 671)];
                cCQ6owb2sZ[EtbZipE6A -(91 - 90)] = xemzPR;
                xemzPR = oTya5I8t9z[EtbZipE6A];
                oTya5I8t9z[EtbZipE6A] = oTya5I8t9z[EtbZipE6A -(842 - 841)];
                oTya5I8t9z[EtbZipE6A -(843 - 842)] = xemzPR;
            }
        }
    }
    for (u5Jt4BWPU = (878 - 878); u5Jt4BWPU < zLQkNBX1l; u5Jt4BWPU = u5Jt4BWPU + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", covAzT9kpV[cCQ6owb2sZ[u5Jt4BWPU]], yfJXCE[cCQ6owb2sZ[u5Jt4BWPU]], eKYtXoM[cCQ6owb2sZ[u5Jt4BWPU]], covAzT9kpV[oTya5I8t9z[u5Jt4BWPU]], yfJXCE[oTya5I8t9z[u5Jt4BWPU]], eKYtXoM[oTya5I8t9z[u5Jt4BWPU]], iR6umo[u5Jt4BWPU]);
    }
    return (211 - 211);
}

