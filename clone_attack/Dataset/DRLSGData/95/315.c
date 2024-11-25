int main () {
    char UDv7Sx [50];
    gets (UDv7Sx);
    int bnH7mCSuDjb;
    char zZvNSUDuQ [50];
    gets (zZvNSUDuQ);
    for (bnH7mCSuDjb = 0; UDv7Sx[bnH7mCSuDjb] != '\0'; bnH7mCSuDjb++) {
        if (UDv7Sx[bnH7mCSuDjb] >= (697 - 600)) {
            UDv7Sx[bnH7mCSuDjb] -= 32;
        }
    }
    for (bnH7mCSuDjb = 0; zZvNSUDuQ[bnH7mCSuDjb] != '\0'; bnH7mCSuDjb++) {
        if (zZvNSUDuQ[bnH7mCSuDjb] >= 97) {
            zZvNSUDuQ[bnH7mCSuDjb] -= 32;
        }
    }
    if (0 < strcmp (UDv7Sx, zZvNSUDuQ)) {
    }
    else if (strcmp (UDv7Sx, zZvNSUDuQ) == 0) {
    }
    else {
    }
    return 0;
}

