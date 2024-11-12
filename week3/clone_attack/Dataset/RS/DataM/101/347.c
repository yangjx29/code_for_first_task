int main () {
    int qIzhCDvk, i9sY5tJ6Gv, wLJSVG;
    int gZtI8DxA246q;
    int ZjxenQRPm5g;
    int AP3AEm9qD8;
    for (qIzhCDvk = 1; qIzhCDvk <= 3; qIzhCDvk = qIzhCDvk + 1)
        for (i9sY5tJ6Gv = 1; i9sY5tJ6Gv <= 3; i9sY5tJ6Gv = i9sY5tJ6Gv + 1)
            for (wLJSVG = 1; wLJSVG <= 3; wLJSVG = wLJSVG + 1) {
                gZtI8DxA246q = (i9sY5tJ6Gv > qIzhCDvk) + (qIzhCDvk == wLJSVG);
                ZjxenQRPm5g = (qIzhCDvk > i9sY5tJ6Gv) + (qIzhCDvk > wLJSVG);
                AP3AEm9qD8 = (wLJSVG > i9sY5tJ6Gv) + (i9sY5tJ6Gv > qIzhCDvk);
                if (gZtI8DxA246q > ZjxenQRPm5g &&ZjxenQRPm5g > AP3AEm9qD8 &&qIzhCDvk < i9sY5tJ6Gv && i9sY5tJ6Gv < wLJSVG) {
                    cout << "A" << "B" << "C" << endl;
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
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (gZtI8DxA246q > AP3AEm9qD8 &&AP3AEm9qD8 > ZjxenQRPm5g &&qIzhCDvk < wLJSVG && wLJSVG < i9sY5tJ6Gv) {
                    cout << "A" << "C" << "B" << endl;
                }
                if (ZjxenQRPm5g > gZtI8DxA246q && gZtI8DxA246q > AP3AEm9qD8 &&i9sY5tJ6Gv < qIzhCDvk && qIzhCDvk < wLJSVG) {
                    cout << "B" << "A" << "C" << endl;
                }
                if (ZjxenQRPm5g > AP3AEm9qD8 &&AP3AEm9qD8 > gZtI8DxA246q && i9sY5tJ6Gv < wLJSVG && wLJSVG < qIzhCDvk) {
                    cout << "B" << "C" << "A" << endl;
                }
                if (AP3AEm9qD8 > ZjxenQRPm5g &&ZjxenQRPm5g > gZtI8DxA246q && wLJSVG < i9sY5tJ6Gv && i9sY5tJ6Gv < qIzhCDvk) {
                    cout << "C" << "B" << "A" << endl;
                }
                if (AP3AEm9qD8 > gZtI8DxA246q && gZtI8DxA246q > ZjxenQRPm5g &&wLJSVG < qIzhCDvk && qIzhCDvk < i9sY5tJ6Gv) {
                    cout << "C" << "A" << "B" << endl;
                };
            }
    return 0;
}

