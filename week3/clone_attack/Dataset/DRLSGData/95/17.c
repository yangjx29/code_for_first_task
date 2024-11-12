int main () {
    int ArP6itHfh;
    int ZxRXkKzbQF;
    char yeoGiBfx [(832 - 732)], haPJ4WcpIsho [(508 - 408)];
    cin.getline (yeoGiBfx, (771 - 690));
    cin.getline (haPJ4WcpIsho, (140 - 59));
    ZxRXkKzbQF = (152 - 152);
    for (ArP6itHfh = (151 - 151); yeoGiBfx[ArP6itHfh] != '\0' || haPJ4WcpIsho[ArP6itHfh] != '\0'; ArP6itHfh++) {
        if (yeoGiBfx[ArP6itHfh] >= 'A' && yeoGiBfx[ArP6itHfh] <= 'Z')
            yeoGiBfx[ArP6itHfh] = yeoGiBfx[ArP6itHfh] + (844 - 812);
        if ('A' <= haPJ4WcpIsho[ArP6itHfh] && haPJ4WcpIsho[ArP6itHfh] <= 'Z')
            haPJ4WcpIsho[ArP6itHfh] = haPJ4WcpIsho[ArP6itHfh] + 32;
        if (yeoGiBfx[ArP6itHfh] > haPJ4WcpIsho[ArP6itHfh]) {
            cout << '>';
            ZxRXkKzbQF = (631 - 631);
            break;
        }
        if (haPJ4WcpIsho[ArP6itHfh] > yeoGiBfx[ArP6itHfh]) {
            ZxRXkKzbQF = (153 - 153);
            cout << '<';
            break;
        }
        if (yeoGiBfx[ArP6itHfh] == haPJ4WcpIsho[ArP6itHfh])
            ZxRXkKzbQF = (896 - 895);
    }
    if (ZxRXkKzbQF == (511 - 510))
        cout << '=';
    return 0;
}

