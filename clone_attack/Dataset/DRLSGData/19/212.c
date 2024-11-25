int main () {
    char yOFQkx0bw8gW [(947 - 897)];
    char a [(144 - 94)];
    char zQ3Yxh [(1685 - 685)];
    int i;
    int j;
    cin.getline (zQ3Yxh, (1261 - 261));
    cin.getline (a, (909 - 859));
    cin.getline (yOFQkx0bw8gW, (274 - 224));
    for (i = (379 - 379); zQ3Yxh[i] != '\0'; i++) {
        int sWSp9CJw;
        int oG9VEKC;
        sWSp9CJw = (817 - 817);
        for (j = (821 - 821); a[j] != '\0'; j++)
            if (!(a[j] != zQ3Yxh[i + j]) && (!(' ' != zQ3Yxh[i - (642 - 641)]) && i != (185 - 185)) || !((775 - 775) != i))
                sWSp9CJw++;
        if (!(strlen (a) != sWSp9CJw) && (!(' ' != zQ3Yxh[i + j]) || !('\0' != zQ3Yxh[i + j]))) {
            if (strlen (yOFQkx0bw8gW) <= strlen (a)) {
                for (oG9VEKC = (202 - 202); strlen (yOFQkx0bw8gW) > oG9VEKC; oG9VEKC = oG9VEKC + 1)
                    zQ3Yxh[i + oG9VEKC] = yOFQkx0bw8gW[oG9VEKC];
                for (oG9VEKC = i + strlen (yOFQkx0bw8gW); zQ3Yxh[oG9VEKC] != '\0'; oG9VEKC = oG9VEKC + 1)
                    zQ3Yxh[oG9VEKC] = zQ3Yxh[oG9VEKC + strlen (a) - strlen (yOFQkx0bw8gW)];
            }
            else {
                for (oG9VEKC = strlen (zQ3Yxh) + strlen (yOFQkx0bw8gW) - strlen (a); oG9VEKC >= i + strlen (a); oG9VEKC = oG9VEKC - 1)
                    zQ3Yxh[oG9VEKC] = zQ3Yxh[oG9VEKC + strlen (a) - strlen (yOFQkx0bw8gW)];
                for (oG9VEKC = (269 - 269); oG9VEKC < strlen (yOFQkx0bw8gW); oG9VEKC++)
                    zQ3Yxh[i + oG9VEKC] = yOFQkx0bw8gW[oG9VEKC];
                i += strlen (yOFQkx0bw8gW);
            }
        }
    }
    cout << zQ3Yxh << endl;
    return (633 - 633);
}

