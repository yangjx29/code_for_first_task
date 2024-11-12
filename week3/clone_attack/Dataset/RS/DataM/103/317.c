char Gw2lFVL [1200];
char vYCaOz;
int HLzFmOsWXf2D, IRSaoLJ1nm;

char gRgQVzhrow (char Gw2lFVL) {
    if (('a' <= Gw2lFVL) && (Gw2lFVL <= 'z'))
        return Gw2lFVL -'a' + 'A';
}

int main () {
    IRSaoLJ1nm = (210 - 209);
    HLzFmOsWXf2D = (819 - 818);
    cin >> Gw2lFVL;
    vYCaOz = Gw2lFVL[(787 - 787)];
    while (Gw2lFVL[HLzFmOsWXf2D] != '\0') {
        if (gRgQVzhrow (Gw2lFVL[HLzFmOsWXf2D]) == gRgQVzhrow (vYCaOz))
            IRSaoLJ1nm++;
        else {
            cout << '(' << gRgQVzhrow (vYCaOz) << ',' << IRSaoLJ1nm << ')';
            IRSaoLJ1nm = 1;
            vYCaOz = Gw2lFVL[HLzFmOsWXf2D];
        }
        HLzFmOsWXf2D = HLzFmOsWXf2D +1;
    }
    cout << '(' << gRgQVzhrow (vYCaOz) << ',' << IRSaoLJ1nm << ')' << endl;
    return (205 - 205);
}

