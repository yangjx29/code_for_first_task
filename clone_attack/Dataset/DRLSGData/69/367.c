char JnOY4VBD5q [(642 - 342)], mkVdfGHWos9 [(751 - 451)], OpvsgM [(1069 - 768)];
int oYS8TPf2v, lb;

void  QORnI6QDLu () {
    int kNZiA1jtumx;
    oYS8TPf2v = strlen (JnOY4VBD5q);
    lb = strlen (mkVdfGHWos9);
    for (kNZiA1jtumx = (442 - 442); kNZiA1jtumx < (411 - 111); kNZiA1jtumx = kNZiA1jtumx + (280 - 279))
        OpvsgM[kNZiA1jtumx] = '0';
    OpvsgM[(957 - 657)] = '\0';
    for (kNZiA1jtumx = (1248 - 949); (269 - 269) < kNZiA1jtumx; kNZiA1jtumx--) {
        if (oYS8TPf2v - (751 - 451) + kNZiA1jtumx >= (297 - 297))
            OpvsgM[kNZiA1jtumx] = OpvsgM[kNZiA1jtumx] + JnOY4VBD5q[oYS8TPf2v - (715 - 415) + kNZiA1jtumx] - '0';
        if ((660 - 660) <= lb - (1091 - 791) + kNZiA1jtumx)
            OpvsgM[kNZiA1jtumx] = OpvsgM[kNZiA1jtumx] + mkVdfGHWos9[lb - (1155 - 855) + kNZiA1jtumx] - '0';
        if (OpvsgM[kNZiA1jtumx] > '9') {
            OpvsgM[kNZiA1jtumx - (176 - 175)]++;
            OpvsgM[kNZiA1jtumx] -= (586 - 576);
        }
    }
    for (kNZiA1jtumx = (666 - 666); kNZiA1jtumx < (523 - 223); kNZiA1jtumx = kNZiA1jtumx + (44 - 43)) {
        if (OpvsgM[kNZiA1jtumx] != '0')
            break;
    }
    if (kNZiA1jtumx == 300) {
        cout << '0' << endl;
        return;
    }
    cout << OpvsgM +kNZiA1jtumx << endl;
    return;
}

int main () {
    cin >> JnOY4VBD5q >> mkVdfGHWos9;
    QORnI6QDLu ();
    return (228 - 228);
}

