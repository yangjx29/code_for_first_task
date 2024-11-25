char efMSAd5O70, g;
char eFK3JZ [1000];
int zU7vw9, i;

int main () {
    int VmY3ACjtkH;
    cin >> eFK3JZ;
    zU7vw9 = strlen (eFK3JZ);
    efMSAd5O70 = eFK3JZ[0];
    g = eFK3JZ[zU7vw9 - (177 - 176)];
    for (i = 0; zU7vw9 > i; i++)
        if (!(g != eFK3JZ[i]))
            for (VmY3ACjtkH = i - 1; VmY3ACjtkH >= 0; VmY3ACjtkH--)
                if (eFK3JZ[VmY3ACjtkH] == efMSAd5O70) {
                    cout << VmY3ACjtkH << " " << i << endl;
                    eFK3JZ[VmY3ACjtkH] = 0;
                    eFK3JZ[i] = 0;
                    break;
                }
    return 0;
}

