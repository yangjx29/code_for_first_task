int main () {
    int a;
    int xRhQCIyWl;
    int fcKBauEYJ43;
    int xQ0Rd3UWGe;
    int q;
    int YgAcJ9nVR;
    int QwhtO9qYGa;
    xRhQCIyWl = 0;
    scanf ("%d", &a);
    scanf ("%d%d", &fcKBauEYJ43, &xQ0Rd3UWGe);
    if (xQ0Rd3UWGe < fcKBauEYJ43)
        YgAcJ9nVR = fcKBauEYJ43, QwhtO9qYGa = xQ0Rd3UWGe;
    else
        YgAcJ9nVR = xQ0Rd3UWGe, QwhtO9qYGa = fcKBauEYJ43;
    for (; a - 2 > xRhQCIyWl;) {
        scanf ("%d", &q);
        if (YgAcJ9nVR < q) {
            QwhtO9qYGa = YgAcJ9nVR;
            YgAcJ9nVR = q;
        }
        if (q > QwhtO9qYGa &&q < YgAcJ9nVR) {
            QwhtO9qYGa = q;
        }
        xRhQCIyWl = xRhQCIyWl + 1;
    }
    printf ("%d\n%d", YgAcJ9nVR, QwhtO9qYGa);
    return 0;
}

