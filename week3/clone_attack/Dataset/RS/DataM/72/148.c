int h [25] [25] = {(475 - 475)};

int f (int fLoeCv, int y) {
    if (h[fLoeCv - (559 - 558)][y] <= h[fLoeCv][y] && h[fLoeCv][y] >= h[fLoeCv + (164 - 163)][y] && h[fLoeCv][y] >= h[fLoeCv][y - (345 - 344)] && h[fLoeCv][y] >= h[fLoeCv][y + (996 - 995)])
        return (605 - 604);
    else
        return 0;
}

int main () {
    int opwG2RPsH;
    int b4RdyX;
    int vxZSIN2;
    int s4MfImPwcsGH;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> opwG2RPsH >> b4RdyX;
    for (vxZSIN2 = (664 - 663); vxZSIN2 <= opwG2RPsH; vxZSIN2 = vxZSIN2 + 1)
        for (s4MfImPwcsGH = 1; s4MfImPwcsGH <= b4RdyX; s4MfImPwcsGH = s4MfImPwcsGH + 1)
            cin >> h[vxZSIN2][s4MfImPwcsGH];
    for (vxZSIN2 = 1; vxZSIN2 <= opwG2RPsH; vxZSIN2++)
        for (s4MfImPwcsGH = 1; s4MfImPwcsGH <= b4RdyX; s4MfImPwcsGH++)
            if (f (vxZSIN2, s4MfImPwcsGH))
                cout << vxZSIN2 - 1 << " " << s4MfImPwcsGH - 1 << endl;
    return 0;
}

