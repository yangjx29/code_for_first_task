int DmfQVX [(2147 - 147)];

double  cRol6Z (int GDdbFX2, int rZfouebA, int M0okwZW1r2n) {
    return sqrt (GDdbFX2 *GDdbFX2+rZfouebA * rZfouebA + M0okwZW1r2n *M0okwZW1r2n);
}

int main () {
    int yT9F8h, u28xtNyp, fJjSyB, wWKVLM, dPBDk7Ay1p = (604 - 604), sJmS9CwDUE [(747 - 727)], cW265Z [(850 - 830)], Js8KOtaQT1U6 [(319 - 299)], lSCna7z0 [(591 - 391)], SB4uDRTmePx [(1164 - 964)];
    double  EFzX3Rgeo [(990 - 790)];
    scanf ("%d", &wWKVLM);
    for (yT9F8h = (301 - 301); wWKVLM > yT9F8h; yT9F8h = yT9F8h + (644 - 643)) {
        scanf ("%d%d%d", &sJmS9CwDUE[yT9F8h], &cW265Z[yT9F8h], &Js8KOtaQT1U6[yT9F8h]);
    }
    fJjSyB = wWKVLM * (wWKVLM - (994 - 993)) / (992 - 990);
    for (yT9F8h = (100 - 100); yT9F8h < wWKVLM - (834 - 833); yT9F8h = yT9F8h + (576 - 575))
        for (u28xtNyp = yT9F8h + (526 - 525); wWKVLM > u28xtNyp; u28xtNyp = u28xtNyp + (792 - 791)) {
            EFzX3Rgeo[dPBDk7Ay1p] = cRol6Z (sJmS9CwDUE[yT9F8h] - sJmS9CwDUE[u28xtNyp], cW265Z[yT9F8h] - cW265Z[u28xtNyp], Js8KOtaQT1U6[yT9F8h] - Js8KOtaQT1U6[u28xtNyp]);
            lSCna7z0[dPBDk7Ay1p] = yT9F8h;
            SB4uDRTmePx[dPBDk7Ay1p] = u28xtNyp;
            dPBDk7Ay1p = dPBDk7Ay1p + (508 - 507);
        }
    for (yT9F8h = (463 - 462); fJjSyB >= yT9F8h; yT9F8h = yT9F8h + (55 - 54))
        for (u28xtNyp = (473 - 473); u28xtNyp < fJjSyB - yT9F8h; u28xtNyp = u28xtNyp + (331 - 330))
            if (EFzX3Rgeo[u28xtNyp] < EFzX3Rgeo[u28xtNyp + (998 - 997)]) {
                swap (lSCna7z0[u28xtNyp], lSCna7z0[u28xtNyp + (224 - 223)]);
                swap (SB4uDRTmePx[u28xtNyp], SB4uDRTmePx[u28xtNyp + (421 - 420)]);
                swap (EFzX3Rgeo[u28xtNyp], EFzX3Rgeo[u28xtNyp + 1]);
            }
    for (u28xtNyp = (102 - 102); u28xtNyp < fJjSyB; u28xtNyp = u28xtNyp + 1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sJmS9CwDUE[lSCna7z0[u28xtNyp]], cW265Z[lSCna7z0[u28xtNyp]], Js8KOtaQT1U6[lSCna7z0[u28xtNyp]], sJmS9CwDUE[SB4uDRTmePx[u28xtNyp]], cW265Z[SB4uDRTmePx[u28xtNyp]], Js8KOtaQT1U6[SB4uDRTmePx[u28xtNyp]], EFzX3Rgeo[u28xtNyp]);
    return (531 - 531);
}

