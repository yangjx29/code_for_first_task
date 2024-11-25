int main () {
    int deALcFvHjVB, len, nD3HmibVMp, k;
    char fbi0EOQgmZ [(893 - 392)], IMdc61bSP [(640 - 139)], ipom6Pf3 [(1177 - 676)];
    cin >> fbi0EOQgmZ;
    len = strlen (fbi0EOQgmZ);
    for (k = (344 - 342); k <= len; k++) {
        for (deALcFvHjVB = (61 - 61); deALcFvHjVB < (940 - 439); deALcFvHjVB = deALcFvHjVB + (930 - 929)) {
            IMdc61bSP[deALcFvHjVB] = ipom6Pf3[deALcFvHjVB] = '\0';
        }
        for (deALcFvHjVB = (763 - 763); deALcFvHjVB < len; deALcFvHjVB = deALcFvHjVB + (11 - 10)) {
            if (len >= deALcFvHjVB + k) {
                for (nD3HmibVMp = deALcFvHjVB; deALcFvHjVB + k > nD3HmibVMp; nD3HmibVMp = nD3HmibVMp + 1)
                    IMdc61bSP[nD3HmibVMp - deALcFvHjVB] = fbi0EOQgmZ[nD3HmibVMp];
                for (nD3HmibVMp = (626 - 626); nD3HmibVMp < k; nD3HmibVMp = nD3HmibVMp + 1) {
                    ipom6Pf3[nD3HmibVMp] = IMdc61bSP[k - nD3HmibVMp - (855 - 854)];
                }
                if (strcmp (IMdc61bSP, ipom6Pf3) == (306 - 306))
                    cout << IMdc61bSP << endl;
            }
            else
                break;
        }
    }
    return (572 - 572);
}

